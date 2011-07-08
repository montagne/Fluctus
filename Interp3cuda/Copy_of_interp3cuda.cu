#include "cufft.h"
#include "cutil.h"
#include "mex.h"
#include "cuda.h"
#include <cutil_inline.h>
#include <stdio.h>
#include <stdlib.h>


#include <memcpy.cu>
#include <cubicPrefilter3D.cu>
#include <cubicTex3D.cu>


//static bool debug = false;

#define IMUL(a, b) __umul24(a, b)



//////////////////////////////////////////////////////////////////////////////////////
///         Interpolation Kernel
//////////////////////////////////////////////////////////////////////////////////////
texture<float, 3, cudaReadModeElementType> texInput;

__global__ void interpTex( float3 *points, float *output, int output_numel, int output_width, int _option){

  const uint x = IMUL(blockIdx.x, blockDim.x) + threadIdx.x;
  const uint y = IMUL(blockIdx.y, blockDim.y) + threadIdx.y;

  uint loc = IMUL(y, output_width) + x;
  if (loc < output_numel) { 
    switch(_option){
    case 0:
      output[loc]  = tex3D(texInput, points[loc].x, points[loc].y, points[loc].z);
      break;
    case 1:
      output[loc]  = tex3D(texInput, points[loc].x, points[loc].y, points[loc].z);
      break;
    case 2:
      output[loc]  = cubicTex3D(texInput, points[loc].x, points[loc].y, points[loc].z);
      break;
    case 3:
      output[loc]  = cubicTex3D(texInput, points[loc].x, points[loc].y, points[loc].z);
      break;
    default :
      output[loc]  = tex3D(texInput, points[loc].x, points[loc].y, points[loc].z);
      break;
    }

  }


}



//Round a / b to nearest higher integer value
int iDivUp(int a, int b){
  return (a % b != 0) ? (a / b + 1) : (a / b);
}

//////////////////////////////////////////////////////////////////////////////////////
///         Main
//////////////////////////////////////////////////////////////////////////////////////

void mexFunction( int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[] ) {
  // Check number of inputs
  if (nrhs <3) mexErrMsgTxt("Must have three input arguments: data, rowpoints, colpoints");

  if (nrhs > 5) mexErrMsgTxt("This format is not supported, usage : interp3cuda(W,Xi,Yi,Zi,method),  method is optional ");
  if (nlhs !=1) mexErrMsgTxt("Must have one output argument");
	
  // Check the class of input data
  if ( mxIsComplex(prhs[0]) || !mxIsClass(prhs[0],"double") ) {
    // try casting the input to double?
    mexErrMsgTxt("Input must be real, double !");
  }
	

  ///// Allocate, set up data structures
  int OUTPUT_W, OUTPUT_H, OUTPUT_P, OUTPUT_SIZE;
  int INPUT_W, INPUT_H,INPUT_P, INPUT_SIZE, POINTS_SIZE;

  int NB_ELEM_Xi,NB_ELEM_Yi,NB_ELEM_Zi;	

  int interpo_option;

  double *input = mxGetPr(prhs[0]);

  const mwSize* dim_input = mxGetDimensions(prhs[0]);

  INPUT_W = dim_input[0];
  INPUT_H = dim_input[1];
  INPUT_P = dim_input[2];

  //  mexPrintf("W %d  H %d  P %d\n",INPUT_W, INPUT_H, INPUT_P);

  INPUT_SIZE = INPUT_H * INPUT_W * INPUT_P * sizeof(float);


  float *f_input;
  float3 *f_points;
	
  ///// Check if we're in "input points" or "number of points" mode
  if ( mxGetNumberOfElements(prhs[1]) == 1 && mxGetNumberOfElements(prhs[2]) == 1) {

    //  mexPrintf("number of point\n");

    double *row_points = mxGetPr(prhs[1]);
    double *col_points = mxGetPr(prhs[2]);


    // number of points mode
    OUTPUT_W = (int) col_points[0];
    OUTPUT_H = (int) row_points[0];
    OUTPUT_SIZE = OUTPUT_W * OUTPUT_H * sizeof(float);
    POINTS_SIZE = 2*OUTPUT_SIZE;

		
    // we want N evenly spaced points from 0 to 1
    f_points = (float3 *)mxMalloc(POINTS_SIZE);
		
    for ( int r=0; r<OUTPUT_H; r++ ) {
      for ( int c=0; c<OUTPUT_W; c++ ) {
	f_points[c + OUTPUT_W*r].x = (float) c * (INPUT_W-1) / (OUTPUT_W-1) + 0.5f;
	f_points[c + OUTPUT_W*r].y = (float) r * (INPUT_H-1) / (OUTPUT_H-1) + 0.5f;
      }
    }

  }
  else {

    //    mexPrintf("my test\n");

    double *x_points = mxGetPr(prhs[1]);
    double *y_points = mxGetPr(prhs[2]);
    double *z_points = mxGetPr(prhs[3]);

    if (nrhs == 5 || nrhs == 8){ // if interpolation option is passed 
      //FIXME : the condition must be : if nrhs == 5 

      mxChar* option = (nrhs == 5) ? mxGetChars(prhs[4]) : mxGetChars(prhs[7]);

      if((char)option[0] == 'n' && (char)option[1] == 'e' && (char)option[2] == 'a' && (char)option[3] == 'r' && (char)option[4] == 'e' 
	 && (char)option[5] == 's' && (char)option[6] == 't'){
	interpo_option = 0;
	//	mexPrintf("nearest\n");
      }
      else if ((char)option[0] == 'l' && (char)option[1] == 'i' && (char)option[2] == 'n' && (char)option[3] == 'e' && (char)option[4] == 'a' 
	       && (char)option[5] == 'r'){
	interpo_option = 1;
	//	mexPrintf("linear\n");
      }
      else if((char)option[0] == 's' && (char)option[1] == 'p' && (char)option[2] == 'l' && (char)option[3] == 'i' && (char)option[4] == 'n' 
	      && (char)option[5] == 'e'){
	interpo_option = 2;
	//	mexPrintf("spline\n");
      }
      else if((char)option[0] == 'c' && (char)option[1] == 'u' && (char)option[2] == 'b' && (char)option[3] == 'i' && (char)option[4] == 'c'){
	interpo_option = 3;
	//	mexPrintf("cubic\n");
	mexErrMsgTxt("cubic method is not yet supported !!");
      }
      else{
	mexErrMsgTxt("method is not recognized, you must use 'nearest' 'linear' 'spline' or 'cubic'");
      }

    }
    else{
      interpo_option = 1;
      //      mexPrintf("linear\n"); 
    }
    
    NB_ELEM_Xi = mxGetNumberOfElements(prhs[1]);
    NB_ELEM_Yi = mxGetNumberOfElements(prhs[2]);
    NB_ELEM_Zi = mxGetNumberOfElements(prhs[3]);

    if ( (NB_ELEM_Xi != NB_ELEM_Yi) && (NB_ELEM_Yi != NB_ELEM_Zi)){
      mexErrMsgTxt("Xi, Yi and Zi must have the same number of element  !!");
    }


    const mwSize* dimX = mxGetDimensions(prhs[1]);
    const mwSize* dimY = mxGetDimensions(prhs[2]);
    const mwSize* dimZ = mxGetDimensions(prhs[3]);


    if (dimX[0] != dimY[0] || dimY[0] != dimZ[0] || dimZ[0] != dimX[0] || dimX[1] != dimY[1] || dimY[1] != dimZ[1] || dimZ[1] != dimX[1]
	|| dimX[2] != dimY[2] || dimY[2] != dimZ[2] || dimZ[2] != dimX[2]){
          mexErrMsgTxt("Xi, Yi and Zi dimension must be the same !!");
    }

  plhs[0] = mxCreateNumericArray(3, dimX, mxDOUBLE_CLASS ,mxREAL);

    OUTPUT_W = dimX[0];
    OUTPUT_H = dimX[1];
    OUTPUT_P = dimX[2];

    OUTPUT_SIZE = OUTPUT_W * OUTPUT_H * OUTPUT_P * sizeof(float);
    POINTS_SIZE = 3*OUTPUT_SIZE;



    f_points = (float3 *)mxMalloc(POINTS_SIZE);
		
    for ( int r=0; r<NB_ELEM_Xi; r++ ) {
      f_points[r].x = (float) x_points[r] - 0.5f;
      f_points[r].y = (float) y_points[r] - 0.5f;
      f_points[r].z = (float) z_points[r] - 0.5f;
    }

   }
	


   double *output = mxGetPr(plhs[0]);
   float *f_output = (float *)mxMalloc(OUTPUT_SIZE);
	


  ///// We need to convert the input array from double to float
  f_input = (float *)malloc(INPUT_SIZE);


  for ( int p = 0; p < INPUT_P; p++ ) {
    for ( int c = 0; c < INPUT_W; c++ ) {
      for ( int r = 0; r < INPUT_H; r++){
  	f_input[(c + INPUT_W*r + p*INPUT_W*INPUT_H)] = (float) input[r+ (INPUT_H)*c + p*INPUT_W*INPUT_H];
      }
    }
  }

  ///// Load all this stuff into graphics memory
	
  // Allocate, copy input data into a 2D texture
  cudaArray *d_input;
  cudaChannelFormatDesc input_tex = cudaCreateChannelDesc<float>();

  const cudaExtent volumeSize = make_cudaExtent(OUTPUT_W, OUTPUT_H, OUTPUT_P);
	
  cutilSafeCall( cudaMalloc3DArray(&d_input, &input_tex, volumeSize) );

  cudaMemcpy3DParms copyParams = {0};
  copyParams.srcPtr   = make_cudaPitchedPtr((void*)f_input, volumeSize.width * sizeof(float), volumeSize.width, volumeSize.height);
  copyParams.dstArray = d_input;
  copyParams.extent   = volumeSize;
  copyParams.kind     = cudaMemcpyHostToDevice;

  cudaMemcpy3D(&copyParams) ;



  texInput.filterMode = (interpo_option == 0 ) ? cudaFilterModePoint : cudaFilterModeLinear;
  texInput.normalized = 0;
  texInput.addressMode[0] = cudaAddressModeWrap;   // wrap texture coordinates
  texInput.addressMode[1] = cudaAddressModeWrap;
  texInput.addressMode[2] = cudaAddressModeWrap;

  // bind array to 3D texture
  cudaBindTextureToArray(texInput, d_input, input_tex);


  // Allocate, copy points data into a float2*
  float3 *d_points;
  cudaMalloc((void **)&d_points, POINTS_SIZE);
  cudaMemcpy(d_points, f_points, POINTS_SIZE, cudaMemcpyHostToDevice);

	
  // Allocate output space
  float *d_output;
  cudaMalloc((void **)&d_output, OUTPUT_SIZE);
	
  const dim3 blockSize(min(PowTwoDivider(OUTPUT_W), 16), min(PowTwoDivider(OUTPUT_H * OUTPUT_P), 16));
  const dim3 gridSize(OUTPUT_W/ blockSize.x, OUTPUT_H * OUTPUT_P / blockSize.y);


  // Run it
  interpTex<<<gridSize, blockSize>>> (d_points, d_output, OUTPUT_W*OUTPUT_H*OUTPUT_P, OUTPUT_W, interpo_option);


  // Copy the data back
  cudaMemcpy(f_output, d_output, OUTPUT_SIZE, cudaMemcpyDeviceToHost);


  // Convert to double, and we're done
  for ( int r = 0; r<OUTPUT_H; r++ ) {
    for ( int c = 0; c<OUTPUT_W; c++ ) {
      for(int p = 0; p < OUTPUT_P; p++){
	output[r + OUTPUT_H*c + p*OUTPUT_H*OUTPUT_W] = (double)f_output[r+OUTPUT_H*c +p*OUTPUT_H*OUTPUT_W];
      }
    }
  }

  // mexPrintf("f_output = \n");
  // for (int i = 0; i < 8; i++) {
  //   mexPrintf("[%d] %f \n",i,f_output[i]);
  // }
  // mexPrintf("\n");

  //  mexPrintf("f_output [0] :%d\n",(int)f_output[0]);

				
  cudaUnbindTexture(texInput);
  cudaFreeArray(d_input);
	
  cudaFree(d_points);
  cudaFree(d_output);
	
  mxFree(f_input);
  mxFree(f_output);
  mxFree(f_points);
}
