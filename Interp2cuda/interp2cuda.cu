#include "cufft.h"
#include "cutil.h"
#include "mex.h"
#include "cuda.h"
#include <stdio.h>
#include <stdlib.h>


#include <memcpy.cu>
#include <cubicPrefilter2D.cu>
#include <cubicTex2D.cu>


#define IMUL(a, b) __umul24(a, b)

//////////////////////////////////////////////////////////////////////////////////////
///         Interpolation Kernel
//////////////////////////////////////////////////////////////////////////////////////
texture<float, 2, cudaReadModeElementType> texInput;

__global__ void interpTex( float2 *points, float *output, int output_numel, int output_width, int _option){
  const int x = IMUL(blockDim.x, blockIdx.x) + threadIdx.x;
  const int y = IMUL(blockDim.y, blockIdx.y) + threadIdx.y;
	
  const int loc = IMUL(y,output_width) + x;
  if (loc < output_numel) { 

    switch(_option){
    case 0:
      output[loc]  = tex2D(texInput, points[loc].x, points[loc].y);
      break;
    case 1:
      output[loc]  = tex2D(texInput, points[loc].x, points[loc].y);
      break;
    case 2:
      output[loc]  = cubicTex2D(texInput, points[loc].x, points[loc].y);
      break;
    case 3:
      output[loc]  = cubicTex2D(texInput, points[loc].x, points[loc].y);
      break;
    default :
      output[loc]  = tex2D(texInput, points[loc].x, points[loc].y);
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
  if (nlhs !=1) mexErrMsgTxt("Must have one output argument");

  if (nrhs > 4) mexErrMsgTxt("This format is not supported, usage : interp2cuda(W,Xi,Yi,method),  method is optional ");
	
  // Check the class of input data
  if ( mxIsComplex(prhs[0]) || !mxIsClass(prhs[0],"double") ) {
    // try casting the input to double?
    mexErrMsgTxt("Input must be real, double !");
  }
	
  ///// Allocate, set up data structures
  int OUTPUT_W, OUTPUT_H, OUTPUT_SIZE, INPUT_W, INPUT_H, INPUT_SIZE, POINTS_SIZE ;

  int interpo_option;	

  double *input = mxGetPr(prhs[0]);


  INPUT_W = mxGetN(prhs[0]);
  INPUT_H = mxGetM(prhs[0]);

  INPUT_SIZE = INPUT_H * INPUT_W * sizeof(float);

  float *f_input;
  float2 *f_points;
	
  ///// Check if we're in "input points" or "number of points" mode
  if ( mxGetNumberOfElements(prhs[1]) == 1 && mxGetNumberOfElements(prhs[2]) == 1) {

    mexErrMsgTxt("This mode is not yet implemented !! usage interp2(Z,Xi,Yi,method)");

    // double *row_points = mxGetPr(prhs[1]);
    // double *col_points = mxGetPr(prhs[2]);


    // // number of points mode
    // OUTPUT_W = (int) col_points[0];
    // OUTPUT_H = (int) row_points[0];
    // OUTPUT_SIZE = OUTPUT_W * OUTPUT_H * sizeof(float);
    // POINTS_SIZE = 2*OUTPUT_SIZE;

		
    // // we want N evenly spaced points from 0 to 1
    // f_points = (float2 *)mxMalloc(POINTS_SIZE);
		
    // for ( int r=0; r<OUTPUT_H; r++ ) {
    //   for ( int c=0; c<OUTPUT_W; c++ ) {
    // 	f_points[c + OUTPUT_W*r].x = (float) c * (INPUT_W-1) / (OUTPUT_W-1) + 0.5f;
    // 	f_points[c + OUTPUT_W*r].y = (float) r * (INPUT_H-1) / (OUTPUT_H-1) + 0.5f;
    //   }
    // }
  }
  else {
    double *x_points = mxGetPr(prhs[1]);
    double *y_points = mxGetPr(prhs[2]);
    int NB_ELEM_Xi,NB_ELEM_Yi;

    if (nrhs == 4 || nrhs == 7){ // if interpolation option is passed 

      mxChar* option = (nrhs == 4) ? mxGetChars(prhs[3]) : mxGetChars(prhs[6]);

      if((char)option[0] == 'n' && (char)option[1] == 'e' && (char)option[2] == 'a' && (char)option[3] == 'r' && (char)option[4] == 'e' 
	 && (char)option[5] == 's' && (char)option[6] == 't'){
	interpo_option = 0;
	//mexPrintf("nearest\n");
      }
      else if ((char)option[0] == 'l' && (char)option[1] == 'i' && (char)option[2] == 'n' && (char)option[3] == 'e' && (char)option[4] == 'a' 
	       && (char)option[5] == 'r'){
	interpo_option = 1;
	//mexPrintf("linear\n");
      }
      else if((char)option[0] == 's' && (char)option[1] == 'p' && (char)option[2] == 'l' && (char)option[3] == 'i' && (char)option[4] == 'n' 
	      && (char)option[5] == 'e'){
	interpo_option = 2;
	//mexPrintf("spline\n");
      }
      else if((char)option[0] == 'c' && (char)option[1] == 'u' && (char)option[2] == 'b' && (char)option[3] == 'i' && (char)option[4] == 'c'){
	interpo_option = 3;
	//mexPrintf("cubic\n");
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

    if ( NB_ELEM_Xi != NB_ELEM_Yi){
      mexErrMsgTxt("Xi and Yi must have the same size !!");
    }

    OUTPUT_W = mxGetN(prhs[1]);
    OUTPUT_H = mxGetM(prhs[1]);
    OUTPUT_SIZE = OUTPUT_W * OUTPUT_H * sizeof(float);
    POINTS_SIZE = 2*OUTPUT_SIZE;

    f_points = (float2 *)mxMalloc(POINTS_SIZE);
		
    for ( int r=0; r<NB_ELEM_Xi; r++ ) {
      f_points[r].x = (float) x_points[r] + 0.5f;
      f_points[r].y = (float) y_points[r] + 0.5f;
    }


  }
	
  plhs[0] = mxCreateDoubleMatrix(OUTPUT_H, OUTPUT_W, mxREAL);
  double *output = mxGetPr(plhs[0]);
  float *f_output = (float *)mxMalloc(OUTPUT_SIZE);
	


  ///// We need to convert the input array from double to float
  f_input = (float *)malloc(INPUT_SIZE);

  for ( int r=0; r<INPUT_H; r++ ) {
    for ( int c=0; c<INPUT_W; c++ ) {
      f_input[c + INPUT_W*r] = (float) input[r+ (INPUT_H)*(c)];
    }
  }

  // --- CUDA Part ---
	
  // Allocate, copy input data into a 2D texture
  cudaArray *d_input;
  cudaChannelFormatDesc input_tex = cudaCreateChannelDesc<float>();
	

  cudaMallocArray(&d_input, &input_tex, INPUT_W, INPUT_H);
  cudaMemcpyToArray(d_input, 0, 0, f_input, INPUT_SIZE, cudaMemcpyHostToDevice);

  texInput.filterMode = (interpo_option == 0 ) ? cudaFilterModePoint : cudaFilterModeLinear;
  texInput.normalized = 0;
	
  cudaBindTextureToArray(texInput, d_input);
	
  // Allocate, copy points data into a float2*
  float2 *d_points;
  cudaMalloc((void **)&d_points, POINTS_SIZE);
  cudaMemcpy(d_points, f_points, POINTS_SIZE, cudaMemcpyHostToDevice);
	
  // Allocate output space
  float *d_output;
  cudaMalloc((void **)&d_output, OUTPUT_SIZE);
	
  // Set up blocks, grid for parallel processing
  dim3 dimBlock(16, 12);
  dim3 dimGrid(iDivUp(OUTPUT_W,dimBlock.x),iDivUp(OUTPUT_H,dimBlock.y));
	
  // Run it
  interpTex<<<dimGrid, dimBlock>>> (d_points, d_output, OUTPUT_W*OUTPUT_H, OUTPUT_W, interpo_option);

  // Copy the data back
  cudaMemcpy(f_output, d_output, OUTPUT_SIZE, cudaMemcpyDeviceToHost);
		
  // Convert to double, and we're done
  for ( int r=0; r<OUTPUT_H; r++ ) {
    for ( int c=0; c<OUTPUT_W; c++ ) {
      output[r+OUTPUT_H*c] = (double)f_output[r+OUTPUT_H*c];
    }
  }

				
  cudaUnbindTexture(texInput);
  cudaFreeArray(d_input);
	
  cudaFree(d_points);
  cudaFree(d_output);
	
  mxFree(f_input);
  mxFree(f_output);
  mxFree(f_points);
}
