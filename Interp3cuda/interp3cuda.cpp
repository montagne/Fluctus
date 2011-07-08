# 1 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.cpp"
# 1 "interp3cuda.cu"
# 60 "/usr/local/cuda/include/device_types.h"
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/include/builtin_types.h" 1 3
# 56 "/usr/local/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda/include/device_types.h" 1 3
# 60 "/usr/local/cuda/include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 57 "/usr/local/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/include/driver_types.h" 1 3
# 118 "/usr/local/cuda/include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 153 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 162 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 172 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 181 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 196 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 277 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 286 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 295 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 304 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 352 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 387 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 449 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 475 "/usr/local/cuda/include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,






  cudaErrorPeerAccessAlreadyEnabled = 50,






  cudaErrorPeerAccessNotEnabled = 51,





  cudaErrorDeviceAlreadyInUse = 54,







  cudaErrorProfilerDisabled = 55,






  cudaErrorProfilerNotInitialized = 56,






  cudaErrorProfilerAlreadyStarted = 57,





   cudaErrorProfilerAlreadyStopped = 58,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemoryType
{
  cudaMemoryTypeHost = 1,
  cudaMemoryTypeDevice = 2
};





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3,
  cudaMemcpyDefault = 4
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaMemcpy3DPeerParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;
  int srcDevice;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;
  int dstDevice;

  struct cudaExtent extent;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0,
  cudaGraphicsRegisterFlagsReadOnly = 1,
  cudaGraphicsRegisterFlagsWriteDiscard = 2,
  cudaGraphicsRegisterFlagsSurfaceLoadStore = 4
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaPointerAttributes
{




    enum cudaMemoryType memoryType;
# 728 "/usr/local/cuda/include/driver_types.h" 3
    int device;





    void *devicePointer;





    void *hostPointer;
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2,
  cudaComputeModeExclusiveProcess = 3
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





enum cudaOutputMode
{
    cudaKeyValuePair = 0x00,
    cudaCSV = 0x01
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture1DLayered[2];
  int maxTexture2DLayered[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int pciDomainID;
  int tccDriver;
  int asyncEngineCount;
  int unifiedAddressing;
  int memoryClockRate;
  int memoryBusWidth;
  int l2CacheSize;
  int maxThreadsPerMultiProcessor;
};
# 936 "/usr/local/cuda/include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;





typedef enum cudaOutputMode cudaOutputMode_t;
# 58 "/usr/local/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/include/surface_types.h" 1 3
# 77 "/usr/local/cuda/include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 59 "/usr/local/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/include/texture_types.h" 1 3
# 83 "/usr/local/cuda/include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;



  int sRGB;
  int __cudaReserved[15];
};
# 60 "/usr/local/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/include/vector_types.h" 1 3
# 59 "/usr/local/cuda/include/vector_types.h" 3
# 1 "/usr/local/cuda/include/builtin_types.h" 1 3
# 60 "/usr/local/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda/include/vector_types.h" 1 3
# 60 "/usr/local/cuda/include/builtin_types.h" 2 3
# 60 "/usr/local/cuda/include/vector_types.h" 2 3
# 1 "/usr/local/cuda/include/host_defines.h" 1 3
# 61 "/usr/local/cuda/include/vector_types.h" 2 3
# 92 "/usr/local/cuda/include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 246 "/usr/local/cuda/include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 390 "/usr/local/cuda/include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 493 "/usr/local/cuda/include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 60 "/usr/local/cuda/include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stddef.h" 2 3
# 118 "/usr/local/cuda/include/driver_types.h"
# 541 "/usr/local/cuda/include/driver_types.h"
# 553 "/usr/local/cuda/include/driver_types.h"
# 566 "/usr/local/cuda/include/driver_types.h"
# 572 "/usr/local/cuda/include/driver_types.h"
# 582 "/usr/local/cuda/include/driver_types.h"
# 596 "/usr/local/cuda/include/driver_types.h"
# 609 "/usr/local/cuda/include/driver_types.h"
# 621 "/usr/local/cuda/include/driver_types.h"
# 632 "/usr/local/cuda/include/driver_types.h"
# 650 "/usr/local/cuda/include/driver_types.h"
# 669 "/usr/local/cuda/include/driver_types.h"
# 675 "/usr/local/cuda/include/driver_types.h"
# 687 "/usr/local/cuda/include/driver_types.h"
# 698 "/usr/local/cuda/include/driver_types.h"
# 711 "/usr/local/cuda/include/driver_types.h"
# 747 "/usr/local/cuda/include/driver_types.h"
# 798 "/usr/local/cuda/include/driver_types.h"
# 809 "/usr/local/cuda/include/driver_types.h"
# 821 "/usr/local/cuda/include/driver_types.h"
# 832 "/usr/local/cuda/include/driver_types.h"
# 842 "/usr/local/cuda/include/driver_types.h"
# 936 "/usr/local/cuda/include/driver_types.h"
# 942 "/usr/local/cuda/include/driver_types.h"
# 948 "/usr/local/cuda/include/driver_types.h"
# 954 "/usr/local/cuda/include/driver_types.h"
# 960 "/usr/local/cuda/include/driver_types.h"
# 966 "/usr/local/cuda/include/driver_types.h"
# 77 "/usr/local/cuda/include/surface_types.h"
# 88 "/usr/local/cuda/include/surface_types.h"
# 98 "/usr/local/cuda/include/surface_types.h"
# 83 "/usr/local/cuda/include/texture_types.h"
# 95 "/usr/local/cuda/include/texture_types.h"
# 105 "/usr/local/cuda/include/texture_types.h"
# 115 "/usr/local/cuda/include/texture_types.h"
# 92 "/usr/local/cuda/include/vector_types.h"
# 98 "/usr/local/cuda/include/vector_types.h"
# 104 "/usr/local/cuda/include/vector_types.h"
# 110 "/usr/local/cuda/include/vector_types.h"
# 116 "/usr/local/cuda/include/vector_types.h"
# 122 "/usr/local/cuda/include/vector_types.h"
# 128 "/usr/local/cuda/include/vector_types.h"
# 134 "/usr/local/cuda/include/vector_types.h"
# 140 "/usr/local/cuda/include/vector_types.h"
# 146 "/usr/local/cuda/include/vector_types.h"
# 152 "/usr/local/cuda/include/vector_types.h"
# 158 "/usr/local/cuda/include/vector_types.h"
# 164 "/usr/local/cuda/include/vector_types.h"
# 170 "/usr/local/cuda/include/vector_types.h"
# 176 "/usr/local/cuda/include/vector_types.h"
# 179 "/usr/local/cuda/include/vector_types.h"
# 182 "/usr/local/cuda/include/vector_types.h"
# 188 "/usr/local/cuda/include/vector_types.h"
# 194 "/usr/local/cuda/include/vector_types.h"
# 197 "/usr/local/cuda/include/vector_types.h"
# 200 "/usr/local/cuda/include/vector_types.h"
# 206 "/usr/local/cuda/include/vector_types.h"
# 212 "/usr/local/cuda/include/vector_types.h"
# 218 "/usr/local/cuda/include/vector_types.h"
# 224 "/usr/local/cuda/include/vector_types.h"
# 230 "/usr/local/cuda/include/vector_types.h"
# 246 "/usr/local/cuda/include/vector_types.h"
# 252 "/usr/local/cuda/include/vector_types.h"
# 260 "/usr/local/cuda/include/vector_types.h"
# 266 "/usr/local/cuda/include/vector_types.h"
# 272 "/usr/local/cuda/include/vector_types.h"
# 278 "/usr/local/cuda/include/vector_types.h"
# 284 "/usr/local/cuda/include/vector_types.h"
# 290 "/usr/local/cuda/include/vector_types.h"
# 293 "/usr/local/cuda/include/vector_types.h"
# 299 "/usr/local/cuda/include/vector_types.h"
# 305 "/usr/local/cuda/include/vector_types.h"
# 311 "/usr/local/cuda/include/vector_types.h"
# 317 "/usr/local/cuda/include/vector_types.h"
# 323 "/usr/local/cuda/include/vector_types.h"
# 329 "/usr/local/cuda/include/vector_types.h"
# 335 "/usr/local/cuda/include/vector_types.h"
# 341 "/usr/local/cuda/include/vector_types.h"
# 347 "/usr/local/cuda/include/vector_types.h"
# 353 "/usr/local/cuda/include/vector_types.h"
# 359 "/usr/local/cuda/include/vector_types.h"
# 365 "/usr/local/cuda/include/vector_types.h"
# 371 "/usr/local/cuda/include/vector_types.h"
# 390 "/usr/local/cuda/include/vector_types.h"
# 392 "/usr/local/cuda/include/vector_types.h"
# 394 "/usr/local/cuda/include/vector_types.h"
# 396 "/usr/local/cuda/include/vector_types.h"
# 398 "/usr/local/cuda/include/vector_types.h"
# 400 "/usr/local/cuda/include/vector_types.h"
# 402 "/usr/local/cuda/include/vector_types.h"
# 404 "/usr/local/cuda/include/vector_types.h"
# 406 "/usr/local/cuda/include/vector_types.h"
# 408 "/usr/local/cuda/include/vector_types.h"
# 410 "/usr/local/cuda/include/vector_types.h"
# 412 "/usr/local/cuda/include/vector_types.h"
# 414 "/usr/local/cuda/include/vector_types.h"
# 416 "/usr/local/cuda/include/vector_types.h"
# 418 "/usr/local/cuda/include/vector_types.h"
# 420 "/usr/local/cuda/include/vector_types.h"
# 422 "/usr/local/cuda/include/vector_types.h"
# 424 "/usr/local/cuda/include/vector_types.h"
# 426 "/usr/local/cuda/include/vector_types.h"
# 428 "/usr/local/cuda/include/vector_types.h"
# 430 "/usr/local/cuda/include/vector_types.h"
# 432 "/usr/local/cuda/include/vector_types.h"
# 434 "/usr/local/cuda/include/vector_types.h"
# 436 "/usr/local/cuda/include/vector_types.h"
# 438 "/usr/local/cuda/include/vector_types.h"
# 440 "/usr/local/cuda/include/vector_types.h"
# 442 "/usr/local/cuda/include/vector_types.h"
# 444 "/usr/local/cuda/include/vector_types.h"
# 446 "/usr/local/cuda/include/vector_types.h"
# 448 "/usr/local/cuda/include/vector_types.h"
# 450 "/usr/local/cuda/include/vector_types.h"
# 452 "/usr/local/cuda/include/vector_types.h"
# 454 "/usr/local/cuda/include/vector_types.h"
# 456 "/usr/local/cuda/include/vector_types.h"
# 458 "/usr/local/cuda/include/vector_types.h"
# 460 "/usr/local/cuda/include/vector_types.h"
# 462 "/usr/local/cuda/include/vector_types.h"
# 464 "/usr/local/cuda/include/vector_types.h"
# 466 "/usr/local/cuda/include/vector_types.h"
# 468 "/usr/local/cuda/include/vector_types.h"
# 470 "/usr/local/cuda/include/vector_types.h"
# 472 "/usr/local/cuda/include/vector_types.h"
# 474 "/usr/local/cuda/include/vector_types.h"
# 476 "/usr/local/cuda/include/vector_types.h"
# 478 "/usr/local/cuda/include/vector_types.h"
# 480 "/usr/local/cuda/include/vector_types.h"
# 482 "/usr/local/cuda/include/vector_types.h"
# 484 "/usr/local/cuda/include/vector_types.h"
# 493 "/usr/local/cuda/include/vector_types.h"
# 504 "/usr/local/cuda/include/vector_types.h"
# 134 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceReset();
# 151 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSynchronize();
# 203 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetLimit(cudaLimit , size_t );
# 227 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetLimit(size_t * , cudaLimit );
# 257 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * );
# 298 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache );
# 332 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 356 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 415 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit , size_t );
# 446 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t * , cudaLimit );
# 481 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * );
# 527 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache );
# 581 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 624 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 638 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t );
# 668 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int * );
# 829 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp * , int );
# 848 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int * , const cudaDeviceProp * );
# 881 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int );
# 898 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int * );
# 927 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int * , int );
# 987 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned );
# 1013 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t * );
# 1034 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t );
# 1070 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t , cudaEvent_t , unsigned );
# 1089 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t );
# 1107 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t );
# 1139 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t * );
# 1170 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t * , unsigned );
# 1203 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t , cudaStream_t = 0);
# 1232 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t );
# 1264 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t );
# 1289 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t );
# 1330 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float * , cudaEvent_t , cudaEvent_t );
# 1369 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3 , dim3 , size_t = (0), cudaStream_t = 0);
# 1396 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void * , size_t , size_t );
# 1442 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char * , cudaFuncCache );
# 1477 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char * );
# 1510 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * , const char * );
# 1532 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double * );
# 1554 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double * );
# 1586 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void ** , size_t );
# 1615 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void ** , size_t );
# 1654 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void ** , size_t * , size_t , size_t );
# 1693 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray ** , const cudaChannelFormatDesc * , size_t , size_t = (0), unsigned = (0));
# 1717 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void * );
# 1737 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void * );
# 1759 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray * );
# 1818 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void ** , size_t , unsigned );
# 1874 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostRegister(void * , size_t , unsigned );
# 1893 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostUnregister(void * );
# 1920 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void ** , void * , unsigned );
# 1939 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned * , void * );
# 1974 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr * , cudaExtent );
# 2035 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray ** , const cudaChannelFormatDesc * , cudaExtent , unsigned = (0));
# 2132 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * );
# 2159 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * );
# 2264 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * , cudaStream_t = 0);
# 2285 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * , cudaStream_t = 0);
# 2304 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t * , size_t * );
# 2337 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void * , const void * , size_t , cudaMemcpyKind );
# 2368 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeer(void * , int , const void * , int , size_t );
# 2401 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind );
# 2434 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind );
# 2469 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2511 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2552 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2593 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind );
# 2632 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2667 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char * , const void * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2701 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void * , const char * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2744 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void * , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2774 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeerAsync(void * , int , const void * , int , size_t , cudaStream_t = 0);
# 2816 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2858 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2909 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2959 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3009 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3053 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char * , const void * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3096 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void * , const char * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3118 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void * , int , size_t );
# 3144 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void * , size_t , int , size_t , size_t );
# 3183 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr , int , cudaExtent );
# 3210 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void * , int , size_t , cudaStream_t = 0);
# 3242 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void * , size_t , int , size_t , size_t , cudaStream_t = 0);
# 3287 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr , int , cudaExtent , cudaStream_t = 0);
# 3314 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void ** , const char * );
# 3337 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t * , const char * );
# 3482 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * , void * );
# 3516 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceCanAccessPeer(int * , int , int );
# 3557 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceEnablePeerAccess(int , unsigned );
# 3582 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceDisablePeerAccess(int );
# 3628 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t );
# 3660 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t , unsigned );
# 3695 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 3726 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 3755 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void ** , size_t * , cudaGraphicsResource_t );
# 3789 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray ** , cudaGraphicsResource_t , unsigned , unsigned );
# 3822 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * , const cudaArray * );
# 3857 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int , int , int , int , cudaChannelFormatKind );
# 3899 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t = (((2147483647) * 2U) + 1U));
# 3942 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t , size_t , size_t );
# 3970 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 3991 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference * );
# 4016 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t * , const textureReference * );
# 4040 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference ** , const char * );
# 4073 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 4091 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference ** , const char * );
# 4118 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int * );
# 4135 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int * );
# 4140 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void ** , const cudaUUID_t * );
# 107 "/usr/local/cuda/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 108 "/usr/local/cuda/include/channel_descriptor.h"
{
# 109 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 110 "/usr/local/cuda/include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 113 "/usr/local/cuda/include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 120 "/usr/local/cuda/include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 127 "/usr/local/cuda/include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 130 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 131 "/usr/local/cuda/include/channel_descriptor.h"
}
# 133 "/usr/local/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 134 "/usr/local/cuda/include/channel_descriptor.h"
{
# 135 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 137 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 138 "/usr/local/cuda/include/channel_descriptor.h"
}
# 140 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 141 "/usr/local/cuda/include/channel_descriptor.h"
{
# 142 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 147 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 149 "/usr/local/cuda/include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 152 "/usr/local/cuda/include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 159 "/usr/local/cuda/include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 166 "/usr/local/cuda/include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 173 "/usr/local/cuda/include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 180 "/usr/local/cuda/include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 187 "/usr/local/cuda/include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 194 "/usr/local/cuda/include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 197 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 201 "/usr/local/cuda/include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 204 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 208 "/usr/local/cuda/include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 215 "/usr/local/cuda/include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 222 "/usr/local/cuda/include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 229 "/usr/local/cuda/include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 236 "/usr/local/cuda/include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 243 "/usr/local/cuda/include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 250 "/usr/local/cuda/include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 253 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 257 "/usr/local/cuda/include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 260 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 264 "/usr/local/cuda/include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 271 "/usr/local/cuda/include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 278 "/usr/local/cuda/include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 285 "/usr/local/cuda/include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 292 "/usr/local/cuda/include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 299 "/usr/local/cuda/include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/include/channel_descriptor.h"
}
# 305 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 306 "/usr/local/cuda/include/channel_descriptor.h"
{
# 307 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 309 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 310 "/usr/local/cuda/include/channel_descriptor.h"
}
# 312 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 313 "/usr/local/cuda/include/channel_descriptor.h"
{
# 314 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 316 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 317 "/usr/local/cuda/include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 380 "/usr/local/cuda/include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 387 "/usr/local/cuda/include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/include/channel_descriptor.h"
}
# 393 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 394 "/usr/local/cuda/include/channel_descriptor.h"
{
# 395 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 397 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 398 "/usr/local/cuda/include/channel_descriptor.h"
}
# 400 "/usr/local/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 401 "/usr/local/cuda/include/channel_descriptor.h"
{
# 402 "/usr/local/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 404 "/usr/local/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 405 "/usr/local/cuda/include/channel_descriptor.h"
}
# 79 "/usr/local/cuda/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 80 "/usr/local/cuda/include/driver_functions.h"
{
# 81 "/usr/local/cuda/include/driver_functions.h"
cudaPitchedPtr s;
# 83 "/usr/local/cuda/include/driver_functions.h"
(s.ptr) = d;
# 84 "/usr/local/cuda/include/driver_functions.h"
(s.pitch) = p;
# 85 "/usr/local/cuda/include/driver_functions.h"
(s.xsize) = xsz;
# 86 "/usr/local/cuda/include/driver_functions.h"
(s.ysize) = ysz;
# 88 "/usr/local/cuda/include/driver_functions.h"
return s;
# 89 "/usr/local/cuda/include/driver_functions.h"
}
# 106 "/usr/local/cuda/include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 107 "/usr/local/cuda/include/driver_functions.h"
{
# 108 "/usr/local/cuda/include/driver_functions.h"
cudaPos p;
# 110 "/usr/local/cuda/include/driver_functions.h"
(p.x) = x;
# 111 "/usr/local/cuda/include/driver_functions.h"
(p.y) = y;
# 112 "/usr/local/cuda/include/driver_functions.h"
(p.z) = z;
# 114 "/usr/local/cuda/include/driver_functions.h"
return p;
# 115 "/usr/local/cuda/include/driver_functions.h"
}
# 132 "/usr/local/cuda/include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 133 "/usr/local/cuda/include/driver_functions.h"
{
# 134 "/usr/local/cuda/include/driver_functions.h"
cudaExtent e;
# 136 "/usr/local/cuda/include/driver_functions.h"
(e.width) = w;
# 137 "/usr/local/cuda/include/driver_functions.h"
(e.height) = h;
# 138 "/usr/local/cuda/include/driver_functions.h"
(e.depth) = d;
# 140 "/usr/local/cuda/include/driver_functions.h"
return e;
# 141 "/usr/local/cuda/include/driver_functions.h"
}
# 69 "/usr/local/cuda/include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 70 "/usr/local/cuda/include/vector_functions.h"
{
# 71 "/usr/local/cuda/include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 72 "/usr/local/cuda/include/vector_functions.h"
}
# 74 "/usr/local/cuda/include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 75 "/usr/local/cuda/include/vector_functions.h"
{
# 76 "/usr/local/cuda/include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 77 "/usr/local/cuda/include/vector_functions.h"
}
# 79 "/usr/local/cuda/include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 80 "/usr/local/cuda/include/vector_functions.h"
{
# 81 "/usr/local/cuda/include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 82 "/usr/local/cuda/include/vector_functions.h"
}
# 84 "/usr/local/cuda/include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 85 "/usr/local/cuda/include/vector_functions.h"
{
# 86 "/usr/local/cuda/include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 87 "/usr/local/cuda/include/vector_functions.h"
}
# 89 "/usr/local/cuda/include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 90 "/usr/local/cuda/include/vector_functions.h"
{
# 91 "/usr/local/cuda/include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 92 "/usr/local/cuda/include/vector_functions.h"
}
# 94 "/usr/local/cuda/include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 95 "/usr/local/cuda/include/vector_functions.h"
{
# 96 "/usr/local/cuda/include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 97 "/usr/local/cuda/include/vector_functions.h"
}
# 99 "/usr/local/cuda/include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 100 "/usr/local/cuda/include/vector_functions.h"
{
# 101 "/usr/local/cuda/include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 102 "/usr/local/cuda/include/vector_functions.h"
}
# 104 "/usr/local/cuda/include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 105 "/usr/local/cuda/include/vector_functions.h"
{
# 106 "/usr/local/cuda/include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 107 "/usr/local/cuda/include/vector_functions.h"
}
# 109 "/usr/local/cuda/include/vector_functions.h"
static inline short1 make_short1(short x)
# 110 "/usr/local/cuda/include/vector_functions.h"
{
# 111 "/usr/local/cuda/include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 112 "/usr/local/cuda/include/vector_functions.h"
}
# 114 "/usr/local/cuda/include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 115 "/usr/local/cuda/include/vector_functions.h"
{
# 116 "/usr/local/cuda/include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 117 "/usr/local/cuda/include/vector_functions.h"
}
# 119 "/usr/local/cuda/include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 120 "/usr/local/cuda/include/vector_functions.h"
{
# 121 "/usr/local/cuda/include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 122 "/usr/local/cuda/include/vector_functions.h"
}
# 124 "/usr/local/cuda/include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 125 "/usr/local/cuda/include/vector_functions.h"
{
# 126 "/usr/local/cuda/include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 127 "/usr/local/cuda/include/vector_functions.h"
}
# 129 "/usr/local/cuda/include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 130 "/usr/local/cuda/include/vector_functions.h"
{
# 131 "/usr/local/cuda/include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 132 "/usr/local/cuda/include/vector_functions.h"
}
# 134 "/usr/local/cuda/include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 135 "/usr/local/cuda/include/vector_functions.h"
{
# 136 "/usr/local/cuda/include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 137 "/usr/local/cuda/include/vector_functions.h"
}
# 139 "/usr/local/cuda/include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 140 "/usr/local/cuda/include/vector_functions.h"
{
# 141 "/usr/local/cuda/include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 142 "/usr/local/cuda/include/vector_functions.h"
}
# 144 "/usr/local/cuda/include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 145 "/usr/local/cuda/include/vector_functions.h"
{
# 146 "/usr/local/cuda/include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 147 "/usr/local/cuda/include/vector_functions.h"
}
# 149 "/usr/local/cuda/include/vector_functions.h"
static inline int1 make_int1(int x)
# 150 "/usr/local/cuda/include/vector_functions.h"
{
# 151 "/usr/local/cuda/include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 152 "/usr/local/cuda/include/vector_functions.h"
}
# 154 "/usr/local/cuda/include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 155 "/usr/local/cuda/include/vector_functions.h"
{
# 156 "/usr/local/cuda/include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 157 "/usr/local/cuda/include/vector_functions.h"
}
# 159 "/usr/local/cuda/include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 160 "/usr/local/cuda/include/vector_functions.h"
{
# 161 "/usr/local/cuda/include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 162 "/usr/local/cuda/include/vector_functions.h"
}
# 164 "/usr/local/cuda/include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 165 "/usr/local/cuda/include/vector_functions.h"
{
# 166 "/usr/local/cuda/include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 167 "/usr/local/cuda/include/vector_functions.h"
}
# 169 "/usr/local/cuda/include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 170 "/usr/local/cuda/include/vector_functions.h"
{
# 171 "/usr/local/cuda/include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 172 "/usr/local/cuda/include/vector_functions.h"
}
# 174 "/usr/local/cuda/include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 175 "/usr/local/cuda/include/vector_functions.h"
{
# 176 "/usr/local/cuda/include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 177 "/usr/local/cuda/include/vector_functions.h"
}
# 179 "/usr/local/cuda/include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 180 "/usr/local/cuda/include/vector_functions.h"
{
# 181 "/usr/local/cuda/include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 182 "/usr/local/cuda/include/vector_functions.h"
}
# 184 "/usr/local/cuda/include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 185 "/usr/local/cuda/include/vector_functions.h"
{
# 186 "/usr/local/cuda/include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 187 "/usr/local/cuda/include/vector_functions.h"
}
# 189 "/usr/local/cuda/include/vector_functions.h"
static inline long1 make_long1(long x)
# 190 "/usr/local/cuda/include/vector_functions.h"
{
# 191 "/usr/local/cuda/include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 192 "/usr/local/cuda/include/vector_functions.h"
}
# 194 "/usr/local/cuda/include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 195 "/usr/local/cuda/include/vector_functions.h"
{
# 196 "/usr/local/cuda/include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 197 "/usr/local/cuda/include/vector_functions.h"
}
# 199 "/usr/local/cuda/include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 200 "/usr/local/cuda/include/vector_functions.h"
{
# 201 "/usr/local/cuda/include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 202 "/usr/local/cuda/include/vector_functions.h"
}
# 204 "/usr/local/cuda/include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 205 "/usr/local/cuda/include/vector_functions.h"
{
# 206 "/usr/local/cuda/include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 207 "/usr/local/cuda/include/vector_functions.h"
}
# 209 "/usr/local/cuda/include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 210 "/usr/local/cuda/include/vector_functions.h"
{
# 211 "/usr/local/cuda/include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 212 "/usr/local/cuda/include/vector_functions.h"
}
# 214 "/usr/local/cuda/include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 215 "/usr/local/cuda/include/vector_functions.h"
{
# 216 "/usr/local/cuda/include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 217 "/usr/local/cuda/include/vector_functions.h"
}
# 219 "/usr/local/cuda/include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 220 "/usr/local/cuda/include/vector_functions.h"
{
# 221 "/usr/local/cuda/include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 222 "/usr/local/cuda/include/vector_functions.h"
}
# 224 "/usr/local/cuda/include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 225 "/usr/local/cuda/include/vector_functions.h"
{
# 226 "/usr/local/cuda/include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 227 "/usr/local/cuda/include/vector_functions.h"
}
# 229 "/usr/local/cuda/include/vector_functions.h"
static inline float1 make_float1(float x)
# 230 "/usr/local/cuda/include/vector_functions.h"
{
# 231 "/usr/local/cuda/include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 232 "/usr/local/cuda/include/vector_functions.h"
}
# 234 "/usr/local/cuda/include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 235 "/usr/local/cuda/include/vector_functions.h"
{
# 236 "/usr/local/cuda/include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 237 "/usr/local/cuda/include/vector_functions.h"
}
# 239 "/usr/local/cuda/include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 240 "/usr/local/cuda/include/vector_functions.h"
{
# 241 "/usr/local/cuda/include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 242 "/usr/local/cuda/include/vector_functions.h"
}
# 244 "/usr/local/cuda/include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 245 "/usr/local/cuda/include/vector_functions.h"
{
# 246 "/usr/local/cuda/include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 247 "/usr/local/cuda/include/vector_functions.h"
}
# 249 "/usr/local/cuda/include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 250 "/usr/local/cuda/include/vector_functions.h"
{
# 251 "/usr/local/cuda/include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 252 "/usr/local/cuda/include/vector_functions.h"
}
# 254 "/usr/local/cuda/include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 255 "/usr/local/cuda/include/vector_functions.h"
{
# 256 "/usr/local/cuda/include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 257 "/usr/local/cuda/include/vector_functions.h"
}
# 259 "/usr/local/cuda/include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 260 "/usr/local/cuda/include/vector_functions.h"
{
# 261 "/usr/local/cuda/include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 262 "/usr/local/cuda/include/vector_functions.h"
}
# 264 "/usr/local/cuda/include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 265 "/usr/local/cuda/include/vector_functions.h"
{
# 266 "/usr/local/cuda/include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 267 "/usr/local/cuda/include/vector_functions.h"
}
# 269 "/usr/local/cuda/include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 270 "/usr/local/cuda/include/vector_functions.h"
{
# 271 "/usr/local/cuda/include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 272 "/usr/local/cuda/include/vector_functions.h"
}
# 274 "/usr/local/cuda/include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 275 "/usr/local/cuda/include/vector_functions.h"
{
# 276 "/usr/local/cuda/include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 277 "/usr/local/cuda/include/vector_functions.h"
}
# 279 "/usr/local/cuda/include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 280 "/usr/local/cuda/include/vector_functions.h"
{
# 281 "/usr/local/cuda/include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 282 "/usr/local/cuda/include/vector_functions.h"
}
# 284 "/usr/local/cuda/include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 285 "/usr/local/cuda/include/vector_functions.h"
{
# 286 "/usr/local/cuda/include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 287 "/usr/local/cuda/include/vector_functions.h"
}
# 289 "/usr/local/cuda/include/vector_functions.h"
static inline double1 make_double1(double x)
# 290 "/usr/local/cuda/include/vector_functions.h"
{
# 291 "/usr/local/cuda/include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 292 "/usr/local/cuda/include/vector_functions.h"
}
# 294 "/usr/local/cuda/include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 295 "/usr/local/cuda/include/vector_functions.h"
{
# 296 "/usr/local/cuda/include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 297 "/usr/local/cuda/include/vector_functions.h"
}
# 299 "/usr/local/cuda/include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 300 "/usr/local/cuda/include/vector_functions.h"
{
# 301 "/usr/local/cuda/include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 302 "/usr/local/cuda/include/vector_functions.h"
}
# 304 "/usr/local/cuda/include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 305 "/usr/local/cuda/include/vector_functions.h"
{
# 306 "/usr/local/cuda/include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 307 "/usr/local/cuda/include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" void *memcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 46 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void * , const void * , size_t ) throw()
# 50 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__ , const void *__restrict__ , int , size_t ) throw()
# 59 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 65 "/usr/include/string.h" 3
extern "C" void *memset(void * , int , size_t ) throw() __attribute((__nonnull__(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void * , const void * , size_t ) throw()
# 69 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void * , int , size_t ) throw() __asm__("memchr")
# 76 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void * , int , size_t ) throw() __asm__("memchr")
# 78 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void * , int ) throw() __asm__("rawmemchr")
# 105 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void * , int ) throw() __asm__("rawmemchr")
# 107 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void * , int , size_t ) throw() __asm__("memrchr")
# 116 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void * , int , size_t ) throw() __asm__("memrchr")
# 118 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 129 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 133 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__ , const char *__restrict__ ) throw()
# 137 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 140 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char * , const char * ) throw()
# 144 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char * , const char * , size_t ) throw()
# 147 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char * , const char * ) throw()
# 151 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 155 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char * , const char * , __locale_t ) throw()
# 166 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char * , const char * , size_t , __locale_t ) throw()
# 169 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char * ) throw()
# 176 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char * , size_t ) throw()
# 184 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char * , int ) throw() __asm__("strchr")
# 216 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char * , int ) throw() __asm__("strchr")
# 218 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char * , int ) throw() __asm__("strrchr")
# 243 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char * , int ) throw() __asm__("strrchr")
# 245 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char * , int ) throw() __asm__("strchrnul")
# 272 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char * , int ) throw() __asm__("strchrnul")
# 274 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char * , const char * ) throw()
# 285 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char * , const char * ) throw()
# 289 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char * , const char * ) throw() __asm__("strpbrk")
# 295 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char * , const char * ) throw() __asm__("strpbrk")
# 297 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char * , const char * ) throw() __asm__("strstr")
# 322 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char * , const char * ) throw() __asm__("strstr")
# 325 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__ , const char *__restrict__ ) throw()
# 349 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 357 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 361 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char * , const char * ) throw() __asm__("strcasestr")
# 368 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char * , const char * ) throw() __asm__("strcasestr")
# 371 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void * , size_t , const void * , size_t ) throw()
# 384 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 390 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 393 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char * ) throw()
# 400 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char * , size_t ) throw()
# 407 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int ) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int , char * , size_t ) throw()
# 439 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int , __locale_t ) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void * , void * , size_t ) throw()
# 456 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void * , const void * , size_t ) throw()
# 463 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 469 "/usr/include/string.h" 3
extern char *index(char * , int ) throw() __asm__("index")
# 470 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char * , int ) throw() __asm__("index")
# 472 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char * , int ) throw() __asm__("rindex")
# 498 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char * , int ) throw() __asm__("rindex")
# 500 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int ) throw() __attribute((const));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long ) throw() __attribute((const));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long ) throw()
# 531 "/usr/include/string.h" 3
 __attribute((const));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char * , const char * ) throw()
# 537 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char * , const char * , size_t ) throw()
# 541 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char * , const char * , __locale_t ) throw()
# 549 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char * , const char * , size_t , __locale_t ) throw()
# 553 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__ , const char *__restrict__ ) throw()
# 561 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int ) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 570 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 572 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 578 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 581 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char * , const char * ) throw()
# 587 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char * ) throw() __attribute((__nonnull__(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 601 "/usr/include/string.h" 3
char *basename(char * ) throw() __asm__("basename")
# 602 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char * ) throw() __asm__("basename")
# 604 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t * ) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t , time_t ) throw()
# 190 "/usr/include/time.h" 3
 __attribute((const));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm * ) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ ) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__ , const char *__restrict__ , tm * ) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ , __locale_t ) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__ , const char *__restrict__ , tm * , __locale_t ) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t * ) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t * ) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm * ) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t * ) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__ , char *__restrict__ ) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__ , char *__restrict__ ) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t * ) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm * ) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm * ) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int ) throw() __attribute((const));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec * , timespec * );
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t , timespec * ) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t , timespec * ) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t , const timespec * ) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t , int , const timespec * , timespec * );
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t , clockid_t * ) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t , sigevent *__restrict__ , timer_t *__restrict__ ) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t ) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t , int , const itimerspec *__restrict__ , itimerspec *__restrict__ ) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t , itimerspec * ) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t ) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char * );
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__ , tm *__restrict__ );
# 71 "/usr/local/cuda/include/common_functions.h"
extern "C" clock_t clock() throw();
# 73 "/usr/local/cuda/include/common_functions.h"
extern "C" void *memset(void *, int, size_t) throw();
# 75 "/usr/local/cuda/include/common_functions.h"
extern "C" void *memcpy(void *, const void *, size_t) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" double acos(double ) throw(); extern "C" double __acos(double ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" double asin(double ) throw(); extern "C" double __asin(double ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" double atan(double ) throw(); extern "C" double __atan(double ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" double atan2(double , double ) throw(); extern "C" double __atan2(double , double ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" double cos(double ) throw(); extern "C" double __cos(double ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" double sin(double ) throw(); extern "C" double __sin(double ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" double tan(double ) throw(); extern "C" double __tan(double ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" double cosh(double ) throw(); extern "C" double __cosh(double ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" double sinh(double ) throw(); extern "C" double __sinh(double ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" double tanh(double ) throw(); extern "C" double __tanh(double ) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincos(double , double * , double * ) throw(); extern "C" void __sincos(double , double * , double * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" double acosh(double ) throw(); extern "C" double __acosh(double ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" double asinh(double ) throw(); extern "C" double __asinh(double ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" double atanh(double ) throw(); extern "C" double __atanh(double ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp(double ) throw(); extern "C" double __exp(double ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" double frexp(double , int * ) throw(); extern "C" double __frexp(double , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" double ldexp(double , int ) throw(); extern "C" double __ldexp(double , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" double log(double ) throw(); extern "C" double __log(double ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" double log10(double ) throw(); extern "C" double __log10(double ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" double modf(double , double * ) throw(); extern "C" double __modf(double , double * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp10(double ) throw(); extern "C" double __exp10(double ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double ) throw(); extern "C" double __pow10(double ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" double expm1(double ) throw(); extern "C" double __expm1(double ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" double log1p(double ) throw(); extern "C" double __log1p(double ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" double logb(double ) throw(); extern "C" double __logb(double ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp2(double ) throw(); extern "C" double __exp2(double ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" double log2(double ) throw(); extern "C" double __log2(double ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow(double , double ) throw(); extern "C" double __pow(double , double ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" double sqrt(double ) throw(); extern "C" double __sqrt(double ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" double hypot(double , double ) throw(); extern "C" double __hypot(double , double ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" double cbrt(double ) throw(); extern "C" double __cbrt(double ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" double ceil(double ) throw() __attribute((const)); extern "C" double __ceil(double ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" double fabs(double ) throw() __attribute((const)); extern "C" double __fabs(double ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" double floor(double ) throw() __attribute((const)); extern "C" double __floor(double ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmod(double , double ) throw(); extern "C" double __fmod(double , double ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinf(double ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finite(double ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double , double ) throw(); extern "C" double __drem(double , double ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double ) throw(); extern "C" double __significand(double ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" double copysign(double , double ) throw() __attribute((const)); extern "C" double __copysign(double , double ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" double nan(const char * ) throw() __attribute((const)); extern "C" double __nan(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnan(double ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int * ) throw(); extern "C" double __lgamma_r(double, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" double rint(double ) throw(); extern "C" double __rint(double ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" double nextafter(double , double ) throw() __attribute((const)); extern "C" double __nextafter(double , double ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double , long double ) throw() __attribute((const)); extern "C" double __nexttoward(double , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" double remainder(double , double ) throw(); extern "C" double __remainder(double , double ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalbn(double , int ) throw(); extern "C" double __scalbn(double , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogb(double ) throw(); extern "C" int __ilogb(double ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalbln(double , long ) throw(); extern "C" double __scalbln(double , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" double nearbyint(double ) throw(); extern "C" double __nearbyint(double ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" double round(double ) throw() __attribute((const)); extern "C" double __round(double ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" double trunc(double ) throw() __attribute((const)); extern "C" double __trunc(double ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" double remquo(double , double , int * ) throw(); extern "C" double __remquo(double , double , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrint(double ) throw(); extern "C" long __lrint(double ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrint(double ) throw(); extern "C" long long __llrint(double ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lround(double ) throw(); extern "C" long __lround(double ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llround(double ) throw(); extern "C" long long __llround(double ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" double fdim(double , double ) throw(); extern "C" double __fdim(double , double ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmax(double , double ) throw(); extern "C" double __fmax(double , double ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmin(double , double ) throw(); extern "C" double __fmin(double , double ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbit(double ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" double fma(double , double , double ) throw(); extern "C" double __fma(double , double , double ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double , double ) throw(); extern "C" double __scalb(double , double ) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" float acosf(float ) throw(); extern "C" float __acosf(float ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" float asinf(float ) throw(); extern "C" float __asinf(float ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" float atanf(float ) throw(); extern "C" float __atanf(float ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" float atan2f(float , float ) throw(); extern "C" float __atan2f(float , float ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" float cosf(float ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" float sinf(float ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" float tanf(float ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" float coshf(float ) throw(); extern "C" float __coshf(float ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" float sinhf(float ) throw(); extern "C" float __sinhf(float ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" float tanhf(float ) throw(); extern "C" float __tanhf(float ) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosf(float , float * , float * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" float acoshf(float ) throw(); extern "C" float __acoshf(float ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" float asinhf(float ) throw(); extern "C" float __asinhf(float ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" float atanhf(float ) throw(); extern "C" float __atanhf(float ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" float expf(float ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" float frexpf(float , int * ) throw(); extern "C" float __frexpf(float , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" float ldexpf(float , int ) throw(); extern "C" float __ldexpf(float , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" float logf(float ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" float log10f(float ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" float modff(float , float * ) throw(); extern "C" float __modff(float , float * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" float exp10f(float ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float ) throw(); extern "C" float __pow10f(float ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" float expm1f(float ) throw(); extern "C" float __expm1f(float ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" float log1pf(float ) throw(); extern "C" float __log1pf(float ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" float logbf(float ) throw(); extern "C" float __logbf(float ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" float exp2f(float ) throw(); extern "C" float __exp2f(float ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" float log2f(float ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" float powf(float , float ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" float sqrtf(float ) throw(); extern "C" float __sqrtf(float ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" float hypotf(float , float ) throw(); extern "C" float __hypotf(float , float ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" float cbrtf(float ) throw(); extern "C" float __cbrtf(float ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" float ceilf(float ) throw() __attribute((const)); extern "C" float __ceilf(float ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" float fabsf(float ) throw() __attribute((const)); extern "C" float __fabsf(float ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" float floorf(float ) throw() __attribute((const)); extern "C" float __floorf(float ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmodf(float , float ) throw(); extern "C" float __fmodf(float , float ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinff(float ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finitef(float ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float , float ) throw(); extern "C" float __dremf(float , float ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float ) throw(); extern "C" float __significandf(float ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" float copysignf(float , float ) throw() __attribute((const)); extern "C" float __copysignf(float , float ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" float nanf(const char * ) throw() __attribute((const)); extern "C" float __nanf(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnanf(float ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int * ) throw(); extern "C" float __lgammaf_r(float, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" float rintf(float ) throw(); extern "C" float __rintf(float ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" float nextafterf(float , float ) throw() __attribute((const)); extern "C" float __nextafterf(float , float ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float , long double ) throw() __attribute((const)); extern "C" float __nexttowardf(float , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" float remainderf(float , float ) throw(); extern "C" float __remainderf(float , float ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbnf(float , int ) throw(); extern "C" float __scalbnf(float , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbf(float ) throw(); extern "C" int __ilogbf(float ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalblnf(float , long ) throw(); extern "C" float __scalblnf(float , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" float nearbyintf(float ) throw(); extern "C" float __nearbyintf(float ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" float roundf(float ) throw() __attribute((const)); extern "C" float __roundf(float ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" float truncf(float ) throw() __attribute((const)); extern "C" float __truncf(float ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" float remquof(float , float , int * ) throw(); extern "C" float __remquof(float , float , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintf(float ) throw(); extern "C" long __lrintf(float ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintf(float ) throw(); extern "C" long long __llrintf(float ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundf(float ) throw(); extern "C" long __lroundf(float ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundf(float ) throw(); extern "C" long long __llroundf(float ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" float fdimf(float , float ) throw(); extern "C" float __fdimf(float , float ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmaxf(float , float ) throw(); extern "C" float __fmaxf(float , float ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" float fminf(float , float ) throw(); extern "C" float __fminf(float , float ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbitf(float ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmaf(float , float , float ) throw(); extern "C" float __fmaf(float , float , float ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float , float ) throw(); extern "C" float __scalbf(float , float ) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double ) throw(); extern "C" long double __acosl(long double ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double ) throw(); extern "C" long double __asinl(long double ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double ) throw(); extern "C" long double __atanl(long double ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double , long double ) throw(); extern "C" long double __atan2l(long double , long double ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double ) throw(); extern "C" long double __cosl(long double ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double ) throw(); extern "C" long double __sinl(long double ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double ) throw(); extern "C" long double __tanl(long double ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double ) throw(); extern "C" long double __coshl(long double ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double ) throw(); extern "C" long double __sinhl(long double ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double ) throw(); extern "C" long double __tanhl(long double ) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double , long double * , long double * ) throw(); extern "C" void __sincosl(long double , long double * , long double * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double ) throw(); extern "C" long double __acoshl(long double ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double ) throw(); extern "C" long double __asinhl(long double ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double ) throw(); extern "C" long double __atanhl(long double ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double ) throw(); extern "C" long double __expl(long double ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double , int * ) throw(); extern "C" long double __frexpl(long double , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double , int ) throw(); extern "C" long double __ldexpl(long double , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double ) throw(); extern "C" long double __logl(long double ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double ) throw(); extern "C" long double __log10l(long double ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double , long double * ) throw(); extern "C" long double __modfl(long double , long double * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double ) throw(); extern "C" long double __exp10l(long double ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double ) throw(); extern "C" long double __pow10l(long double ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double ) throw(); extern "C" long double __expm1l(long double ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double ) throw(); extern "C" long double __log1pl(long double ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double ) throw(); extern "C" long double __logbl(long double ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double ) throw(); extern "C" long double __exp2l(long double ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double ) throw(); extern "C" long double __log2l(long double ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double , long double ) throw(); extern "C" long double __powl(long double , long double ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double ) throw(); extern "C" long double __sqrtl(long double ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double , long double ) throw(); extern "C" long double __hypotl(long double , long double ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double ) throw(); extern "C" long double __cbrtl(long double ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double ) throw() __attribute((const)); extern "C" long double __ceill(long double ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double ) throw() __attribute((const)); extern "C" long double __fabsl(long double ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double ) throw() __attribute((const)); extern "C" long double __floorl(long double ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double , long double ) throw(); extern "C" long double __fmodl(long double , long double ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinfl(long double ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finitel(long double ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double , long double ) throw(); extern "C" long double __dreml(long double , long double ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double ) throw(); extern "C" long double __significandl(long double ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double , long double ) throw() __attribute((const)); extern "C" long double __copysignl(long double , long double ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char * ) throw() __attribute((const)); extern "C" long double __nanl(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnanl(long double ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int * ) throw(); extern "C" long double __lgammal_r(long double, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double ) throw(); extern "C" long double __rintl(long double ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double , long double ) throw() __attribute((const)); extern "C" long double __nextafterl(long double , long double ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double , long double ) throw() __attribute((const)); extern "C" long double __nexttowardl(long double , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double , long double ) throw(); extern "C" long double __remainderl(long double , long double ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double , int ) throw(); extern "C" long double __scalbnl(long double , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double ) throw(); extern "C" int __ilogbl(long double ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double , long ) throw(); extern "C" long double __scalblnl(long double , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double ) throw(); extern "C" long double __nearbyintl(long double ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double ) throw() __attribute((const)); extern "C" long double __roundl(long double ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double ) throw() __attribute((const)); extern "C" long double __truncl(long double ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double , long double , int * ) throw(); extern "C" long double __remquol(long double , long double , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double ) throw(); extern "C" long __lrintl(long double ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double ) throw(); extern "C" long long __llrintl(long double ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double ) throw(); extern "C" long __lroundl(long double ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double ) throw(); extern "C" long long __llroundl(long double ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double , long double ) throw(); extern "C" long double __fdiml(long double , long double ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double , long double ) throw(); extern "C" long double __fmaxl(long double , long double ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double , long double ) throw(); extern "C" long double __fminl(long double , long double ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbitl(long double ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double , long double , long double ) throw(); extern "C" long double __fmal(long double , long double , long double ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double , long double ) throw(); extern "C" long double __scalbl(long double , long double ) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception * ) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char * ) throw()
# 146 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char * ) throw()
# 149 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char * ) throw()
# 152 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char * ) throw()
# 159 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__ , char **__restrict__ ) throw()
# 167 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__ , char **__restrict__ ) throw()
# 174 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__ , char **__restrict__ ) throw()
# 178 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__ , char **__restrict__ , int ) throw()
# 186 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__ , char **__restrict__ , int ) throw()
# 190 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 198 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 203 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__ , char **__restrict__ , int ) throw()
# 212 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__ , char **__restrict__ , int ) throw()
# 217 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 242 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 247 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 253 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 259 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 263 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 267 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 272 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long ) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char * ) throw()
# 315 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t __attribute((__mode__(__QI__))); }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t __attribute((__mode__(__HI__))); }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t __attribute((__mode__(__SI__))); }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t __attribute((__mode__(__DI__))); }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t __attribute((__mode__(__SI__))); }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef long register_t __attribute((__mode__(__word__))); }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , timeval *__restrict__ );
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , const timespec *__restrict__ , const __sigset_t *__restrict__ );
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long ) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long ) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned , unsigned ) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned ) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned , char * , size_t ) throw()
# 337 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char * ) throw() __attribute((__nonnull__(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__ , int32_t *__restrict__ ) throw()
# 361 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned , random_data * ) throw()
# 364 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned , char *__restrict__ , size_t , random_data *__restrict__ ) throw()
# 369 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2, 4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__ , random_data *__restrict__ ) throw()
# 373 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned ) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned * ) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute((__nonnull__(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw()
# 401 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw()
# 406 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long ) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw()
# 411 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute((__nonnull__(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__ , double *__restrict__ ) throw()
# 429 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__ , double *__restrict__ ) throw()
# 432 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 437 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 441 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 446 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 450 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long , drand48_data * ) throw()
# 454 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data * ) throw()
# 457 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data * ) throw()
# 461 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t ) throw() __attribute((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t , size_t ) throw()
# 474 "/usr/include/stdlib.h" 3
 __attribute((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void * , size_t ) throw()
# 486 "/usr/include/stdlib.h" 3
 __attribute((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void * ) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void * ) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t ) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t ) throw() __attribute((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void ** , size_t , size_t ) throw()
# 509 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (* )(void)) throw() __attribute((__nonnull__(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (* )(void)) throw() __asm__("at_quick_exit")
# 526 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (* )(int , void * ), void * ) throw()
# 537 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int ) throw() __attribute((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int ) throw() __attribute((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int ) throw() __attribute((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char * ) throw() __attribute((__nonnull__(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char * ) throw()
# 573 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char * ) throw() __attribute((__nonnull__(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char * , const char * , int ) throw()
# 586 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char * ) throw() __attribute((__nonnull__(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char * ) throw() __attribute((__nonnull__(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char * ) __attribute((__nonnull__(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char * ) __attribute((__nonnull__(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char * , int ) __attribute((__nonnull__(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char * , int )
# 653 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char * ) throw() __attribute((__nonnull__(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char * , int ) __attribute((__nonnull__(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char * , int ) __attribute((__nonnull__(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char * , int , int )
# 695 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char * , int , int )
# 707 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char * );
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char * ) throw()
# 725 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__ , char *__restrict__ ) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void * , const void * , size_t , size_t , __compar_fn_t )
# 757 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void * , size_t , size_t , __compar_fn_t )
# 762 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void * , size_t , size_t , __compar_d_fn_t , void * )
# 766 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" int abs(int ) throw() __attribute((const));
# 772 "/usr/include/stdlib.h" 3
extern "C" long labs(long ) throw() __attribute((const));
# 776 "/usr/include/stdlib.h" 3
extern "C" long long llabs(long long ) throw()
# 777 "/usr/include/stdlib.h" 3
 __attribute((const));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int , int ) throw()
# 786 "/usr/include/stdlib.h" 3
 __attribute((const));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long , long ) throw()
# 788 "/usr/include/stdlib.h" 3
 __attribute((const));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long , long long ) throw()
# 795 "/usr/include/stdlib.h" 3
 __attribute((const));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 809 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 815 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double , int , char * ) throw()
# 821 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 828 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 831 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double , int , char * ) throw()
# 833 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 840 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 843 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 848 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 852 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char * , size_t ) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char * , wchar_t ) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__ , const wchar_t *__restrict__ , size_t ) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char * ) throw() __attribute((__nonnull__(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__ , char *const *__restrict__ , char **__restrict__ ) throw()
# 899 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char * ) throw() __attribute((__nonnull__(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int );
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int ) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int ) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int ) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int , char * , size_t ) throw()
# 938 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int ) throw()
# 949 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute((__visibility__("default")))
# 77 "/usr/include/c++/4.4/cmath" 3
 __attribute((__visibility__("default")))
# 492 "/usr/include/c++/4.4/cmath" 3
 __attribute((__visibility__("default")))
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
 __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default")))
# 157 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2())) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute((__visibility__("default")))
# 492 "/usr/include/c++/4.4/cmath" 3
 __attribute((__visibility__("default")))
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
 __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute((__visibility__("default")))
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
 __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute((__visibility__("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 85 "/usr/local/cuda/include/math_functions.h"
extern "C" int abs(int) throw();
# 87 "/usr/local/cuda/include/math_functions.h"
extern "C" long labs(long) throw();
# 89 "/usr/local/cuda/include/math_functions.h"
extern "C" long long llabs(long long) throw();
# 91 "/usr/local/cuda/include/math_functions.h"
extern "C" double fabs(double) throw();
# 93 "/usr/local/cuda/include/math_functions.h"
extern "C" float fabsf(float) throw();
# 96 "/usr/local/cuda/include/math_functions.h"
extern "C" int min(int, int);
# 98 "/usr/local/cuda/include/math_functions.h"
extern "C" unsigned umin(unsigned, unsigned);
# 100 "/usr/local/cuda/include/math_functions.h"
extern "C" long long llmin(long long, long long);
# 102 "/usr/local/cuda/include/math_functions.h"
extern "C" unsigned long long ullmin(unsigned long long, unsigned long long);
# 104 "/usr/local/cuda/include/math_functions.h"
extern "C" float fminf(float, float) throw();
# 106 "/usr/local/cuda/include/math_functions.h"
extern "C" double fmin(double, double) throw();
# 109 "/usr/local/cuda/include/math_functions.h"
extern "C" int max(int, int);
# 111 "/usr/local/cuda/include/math_functions.h"
extern "C" unsigned umax(unsigned, unsigned);
# 113 "/usr/local/cuda/include/math_functions.h"
extern "C" long long llmax(long long, long long);
# 115 "/usr/local/cuda/include/math_functions.h"
extern "C" unsigned long long ullmax(unsigned long long, unsigned long long);
# 117 "/usr/local/cuda/include/math_functions.h"
extern "C" float fmaxf(float, float) throw();
# 119 "/usr/local/cuda/include/math_functions.h"
extern "C" double fmax(double, double) throw();
# 122 "/usr/local/cuda/include/math_functions.h"
extern "C" double sin(double) throw();
# 125 "/usr/local/cuda/include/math_functions.h"
extern "C" double cos(double) throw();
# 128 "/usr/local/cuda/include/math_functions.h"
extern "C" void sincos(double, double *, double *) throw();
# 130 "/usr/local/cuda/include/math_functions.h"
extern "C" void sincosf(float, float *, float *) throw();
# 133 "/usr/local/cuda/include/math_functions.h"
extern "C" double tan(double) throw();
# 136 "/usr/local/cuda/include/math_functions.h"
extern "C" double sqrt(double) throw();
# 139 "/usr/local/cuda/include/math_functions.h"
extern "C" double rsqrt(double);
# 141 "/usr/local/cuda/include/math_functions.h"
extern "C" float rsqrtf(float);
# 144 "/usr/local/cuda/include/math_functions.h"
extern "C" double exp2(double) throw();
# 146 "/usr/local/cuda/include/math_functions.h"
extern "C" float exp2f(float) throw();
# 149 "/usr/local/cuda/include/math_functions.h"
extern "C" double exp10(double) throw();
# 151 "/usr/local/cuda/include/math_functions.h"
extern "C" float exp10f(float) throw();
# 154 "/usr/local/cuda/include/math_functions.h"
extern "C" double expm1(double) throw();
# 156 "/usr/local/cuda/include/math_functions.h"
extern "C" float expm1f(float) throw();
# 159 "/usr/local/cuda/include/math_functions.h"
extern "C" double log2(double) throw();
# 161 "/usr/local/cuda/include/math_functions.h"
extern "C" float log2f(float) throw();
# 164 "/usr/local/cuda/include/math_functions.h"
extern "C" double log10(double) throw();
# 167 "/usr/local/cuda/include/math_functions.h"
extern "C" double log(double) throw();
# 170 "/usr/local/cuda/include/math_functions.h"
extern "C" double log1p(double) throw();
# 172 "/usr/local/cuda/include/math_functions.h"
extern "C" float log1pf(float) throw();
# 175 "/usr/local/cuda/include/math_functions.h"
extern "C" double floor(double) throw();
# 178 "/usr/local/cuda/include/math_functions.h"
extern "C" double exp(double) throw();
# 181 "/usr/local/cuda/include/math_functions.h"
extern "C" double cosh(double) throw();
# 184 "/usr/local/cuda/include/math_functions.h"
extern "C" double sinh(double) throw();
# 187 "/usr/local/cuda/include/math_functions.h"
extern "C" double tanh(double) throw();
# 190 "/usr/local/cuda/include/math_functions.h"
extern "C" double acosh(double) throw();
# 192 "/usr/local/cuda/include/math_functions.h"
extern "C" float acoshf(float) throw();
# 195 "/usr/local/cuda/include/math_functions.h"
extern "C" double asinh(double) throw();
# 197 "/usr/local/cuda/include/math_functions.h"
extern "C" float asinhf(float) throw();
# 200 "/usr/local/cuda/include/math_functions.h"
extern "C" double atanh(double) throw();
# 202 "/usr/local/cuda/include/math_functions.h"
extern "C" float atanhf(float) throw();
# 205 "/usr/local/cuda/include/math_functions.h"
extern "C" double ldexp(double, int) throw();
# 207 "/usr/local/cuda/include/math_functions.h"
extern "C" float ldexpf(float, int) throw();
# 210 "/usr/local/cuda/include/math_functions.h"
extern "C" double logb(double) throw();
# 212 "/usr/local/cuda/include/math_functions.h"
extern "C" float logbf(float) throw();
# 215 "/usr/local/cuda/include/math_functions.h"
extern "C" int ilogb(double) throw();
# 217 "/usr/local/cuda/include/math_functions.h"
extern "C" int ilogbf(float) throw();
# 220 "/usr/local/cuda/include/math_functions.h"
extern "C" double scalbn(double, int) throw();
# 222 "/usr/local/cuda/include/math_functions.h"
extern "C" float scalbnf(float, int) throw();
# 225 "/usr/local/cuda/include/math_functions.h"
extern "C" double scalbln(double, long) throw();
# 227 "/usr/local/cuda/include/math_functions.h"
extern "C" float scalblnf(float, long) throw();
# 230 "/usr/local/cuda/include/math_functions.h"
extern "C" double frexp(double, int *) throw();
# 232 "/usr/local/cuda/include/math_functions.h"
extern "C" float frexpf(float, int *) throw();
# 235 "/usr/local/cuda/include/math_functions.h"
extern "C" double round(double) throw();
# 237 "/usr/local/cuda/include/math_functions.h"
extern "C" float roundf(float) throw();
# 240 "/usr/local/cuda/include/math_functions.h"
extern "C" long lround(double) throw();
# 242 "/usr/local/cuda/include/math_functions.h"
extern "C" long lroundf(float) throw();
# 245 "/usr/local/cuda/include/math_functions.h"
extern "C" long long llround(double) throw();
# 247 "/usr/local/cuda/include/math_functions.h"
extern "C" long long llroundf(float) throw();
# 250 "/usr/local/cuda/include/math_functions.h"
extern "C" double rint(double) throw();
# 252 "/usr/local/cuda/include/math_functions.h"
extern "C" float rintf(float) throw();
# 255 "/usr/local/cuda/include/math_functions.h"
extern "C" long lrint(double) throw();
# 257 "/usr/local/cuda/include/math_functions.h"
extern "C" long lrintf(float) throw();
# 260 "/usr/local/cuda/include/math_functions.h"
extern "C" long long llrint(double) throw();
# 262 "/usr/local/cuda/include/math_functions.h"
extern "C" long long llrintf(float) throw();
# 265 "/usr/local/cuda/include/math_functions.h"
extern "C" double nearbyint(double) throw();
# 267 "/usr/local/cuda/include/math_functions.h"
extern "C" float nearbyintf(float) throw();
# 270 "/usr/local/cuda/include/math_functions.h"
extern "C" double ceil(double) throw();
# 273 "/usr/local/cuda/include/math_functions.h"
extern "C" double trunc(double) throw();
# 275 "/usr/local/cuda/include/math_functions.h"
extern "C" float truncf(float) throw();
# 278 "/usr/local/cuda/include/math_functions.h"
extern "C" double fdim(double, double) throw();
# 280 "/usr/local/cuda/include/math_functions.h"
extern "C" float fdimf(float, float) throw();
# 283 "/usr/local/cuda/include/math_functions.h"
extern "C" double atan2(double, double) throw();
# 286 "/usr/local/cuda/include/math_functions.h"
extern "C" double atan(double) throw();
# 289 "/usr/local/cuda/include/math_functions.h"
extern "C" double asin(double) throw();
# 292 "/usr/local/cuda/include/math_functions.h"
extern "C" double acos(double) throw();
# 296 "/usr/local/cuda/include/math_functions.h"
extern "C" double hypot(double, double) throw();
# 302 "/usr/local/cuda/include/math_functions.h"
extern "C" float hypotf(float, float) throw();
# 305 "/usr/local/cuda/include/math_functions.h"
extern "C" double cbrt(double) throw();
# 307 "/usr/local/cuda/include/math_functions.h"
extern "C" float cbrtf(float) throw();
# 310 "/usr/local/cuda/include/math_functions.h"
extern "C" double rcbrt(double);
# 312 "/usr/local/cuda/include/math_functions.h"
extern "C" float rcbrtf(float);
# 315 "/usr/local/cuda/include/math_functions.h"
extern "C" double sinpi(double);
# 317 "/usr/local/cuda/include/math_functions.h"
extern "C" float sinpif(float);
# 320 "/usr/local/cuda/include/math_functions.h"
extern "C" double cospi(double);
# 322 "/usr/local/cuda/include/math_functions.h"
extern "C" float cospif(float);
# 325 "/usr/local/cuda/include/math_functions.h"
extern "C" double pow(double, double) throw();
# 328 "/usr/local/cuda/include/math_functions.h"
extern "C" double modf(double, double *) throw();
# 331 "/usr/local/cuda/include/math_functions.h"
extern "C" double fmod(double, double) throw();
# 334 "/usr/local/cuda/include/math_functions.h"
extern "C" double remainder(double, double) throw();
# 336 "/usr/local/cuda/include/math_functions.h"
extern "C" float remainderf(float, float) throw();
# 339 "/usr/local/cuda/include/math_functions.h"
extern "C" double remquo(double, double, int *) throw();
# 341 "/usr/local/cuda/include/math_functions.h"
extern "C" float remquof(float, float, int *) throw();
# 344 "/usr/local/cuda/include/math_functions.h"
extern "C" double erf(double) throw();
# 346 "/usr/local/cuda/include/math_functions.h"
extern "C" float erff(float) throw();
# 349 "/usr/local/cuda/include/math_functions.h"
extern "C" double erfinv(double);
# 351 "/usr/local/cuda/include/math_functions.h"
extern "C" float erfinvf(float);
# 354 "/usr/local/cuda/include/math_functions.h"
extern "C" double erfc(double) throw();
# 356 "/usr/local/cuda/include/math_functions.h"
extern "C" float erfcf(float) throw();
# 359 "/usr/local/cuda/include/math_functions.h"
extern "C" double erfcinv(double);
# 361 "/usr/local/cuda/include/math_functions.h"
extern "C" float erfcinvf(float);
# 364 "/usr/local/cuda/include/math_functions.h"
extern "C" double lgamma(double) throw();
# 366 "/usr/local/cuda/include/math_functions.h"
extern "C" float lgammaf(float) throw();
# 369 "/usr/local/cuda/include/math_functions.h"
extern "C" double tgamma(double) throw();
# 371 "/usr/local/cuda/include/math_functions.h"
extern "C" float tgammaf(float) throw();
# 374 "/usr/local/cuda/include/math_functions.h"
extern "C" double copysign(double, double) throw();
# 376 "/usr/local/cuda/include/math_functions.h"
extern "C" float copysignf(float, float) throw();
# 379 "/usr/local/cuda/include/math_functions.h"
extern "C" double nextafter(double, double) throw();
# 381 "/usr/local/cuda/include/math_functions.h"
extern "C" float nextafterf(float, float) throw();
# 384 "/usr/local/cuda/include/math_functions.h"
extern "C" double nan(const char *) throw();
# 386 "/usr/local/cuda/include/math_functions.h"
extern "C" float nanf(const char *) throw();
# 389 "/usr/local/cuda/include/math_functions.h"
extern "C" int __isinf(double) throw();
# 391 "/usr/local/cuda/include/math_functions.h"
extern "C" int __isinff(float) throw();
# 394 "/usr/local/cuda/include/math_functions.h"
extern "C" int __isnan(double) throw();
# 397 "/usr/local/cuda/include/math_functions.h"
extern "C" int __isnanf(float) throw();
# 411 "/usr/local/cuda/include/math_functions.h"
extern "C" int __finite(double) throw();
# 414 "/usr/local/cuda/include/math_functions.h"
extern "C" int __finitef(float) throw();
# 418 "/usr/local/cuda/include/math_functions.h"
extern "C" int __signbit(double) throw();
# 423 "/usr/local/cuda/include/math_functions.h"
extern "C" int __signbitf(float) throw();
# 426 "/usr/local/cuda/include/math_functions.h"
extern "C" double fma(double, double, double) throw();
# 428 "/usr/local/cuda/include/math_functions.h"
extern "C" float fmaf(float, float, float) throw();
# 436 "/usr/local/cuda/include/math_functions.h"
extern "C" int __signbitl(long double) throw();
# 438 "/usr/local/cuda/include/math_functions.h"
extern "C" int __isinfl(long double) throw();
# 440 "/usr/local/cuda/include/math_functions.h"
extern "C" int __isnanl(long double) throw();
# 450 "/usr/local/cuda/include/math_functions.h"
extern "C" int __finitel(long double) throw();
# 516 "/usr/local/cuda/include/math_functions.h"
extern "C" float acosf(float) throw();
# 519 "/usr/local/cuda/include/math_functions.h"
extern "C" float asinf(float) throw();
# 522 "/usr/local/cuda/include/math_functions.h"
extern "C" float atanf(float) throw();
# 525 "/usr/local/cuda/include/math_functions.h"
extern "C" float atan2f(float, float) throw();
# 528 "/usr/local/cuda/include/math_functions.h"
extern "C" float cosf(float) throw();
# 531 "/usr/local/cuda/include/math_functions.h"
extern "C" float sinf(float) throw();
# 534 "/usr/local/cuda/include/math_functions.h"
extern "C" float tanf(float) throw();
# 537 "/usr/local/cuda/include/math_functions.h"
extern "C" float coshf(float) throw();
# 540 "/usr/local/cuda/include/math_functions.h"
extern "C" float sinhf(float) throw();
# 543 "/usr/local/cuda/include/math_functions.h"
extern "C" float tanhf(float) throw();
# 546 "/usr/local/cuda/include/math_functions.h"
extern "C" float expf(float) throw();
# 549 "/usr/local/cuda/include/math_functions.h"
extern "C" float logf(float) throw();
# 552 "/usr/local/cuda/include/math_functions.h"
extern "C" float log10f(float) throw();
# 555 "/usr/local/cuda/include/math_functions.h"
extern "C" float modff(float, float *) throw();
# 558 "/usr/local/cuda/include/math_functions.h"
extern "C" float powf(float, float) throw();
# 561 "/usr/local/cuda/include/math_functions.h"
extern "C" float sqrtf(float) throw();
# 564 "/usr/local/cuda/include/math_functions.h"
extern "C" float ceilf(float) throw();
# 567 "/usr/local/cuda/include/math_functions.h"
extern "C" float floorf(float) throw();
# 570 "/usr/local/cuda/include/math_functions.h"
extern "C" float fmodf(float, float) throw();
# 605 "/usr/local/cuda/include/math_functions.h"
namespace __gnu_cxx {
# 607 "/usr/local/cuda/include/math_functions.h"
extern inline long long abs(long long);
# 608 "/usr/local/cuda/include/math_functions.h"
}
# 610 "/usr/local/cuda/include/math_functions.h"
namespace std {
# 612 "/usr/local/cuda/include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 613 "/usr/local/cuda/include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 614 "/usr/local/cuda/include/math_functions.h"
}
# 616 "/usr/local/cuda/include/math_functions.h"
using std::abs;
# 617 "/usr/local/cuda/include/math_functions.h"
using std::fabs;
# 618 "/usr/local/cuda/include/math_functions.h"
using std::ceil;
# 619 "/usr/local/cuda/include/math_functions.h"
using std::floor;
# 620 "/usr/local/cuda/include/math_functions.h"
using std::sqrt;
# 621 "/usr/local/cuda/include/math_functions.h"
using std::pow;
# 622 "/usr/local/cuda/include/math_functions.h"
using std::log;
# 623 "/usr/local/cuda/include/math_functions.h"
using std::log10;
# 624 "/usr/local/cuda/include/math_functions.h"
using std::fmod;
# 625 "/usr/local/cuda/include/math_functions.h"
using std::modf;
# 626 "/usr/local/cuda/include/math_functions.h"
using std::exp;
# 627 "/usr/local/cuda/include/math_functions.h"
using std::frexp;
# 628 "/usr/local/cuda/include/math_functions.h"
using std::ldexp;
# 629 "/usr/local/cuda/include/math_functions.h"
using std::asin;
# 630 "/usr/local/cuda/include/math_functions.h"
using std::sin;
# 631 "/usr/local/cuda/include/math_functions.h"
using std::sinh;
# 632 "/usr/local/cuda/include/math_functions.h"
using std::acos;
# 633 "/usr/local/cuda/include/math_functions.h"
using std::cos;
# 634 "/usr/local/cuda/include/math_functions.h"
using std::cosh;
# 635 "/usr/local/cuda/include/math_functions.h"
using std::atan;
# 636 "/usr/local/cuda/include/math_functions.h"
using std::atan2;
# 637 "/usr/local/cuda/include/math_functions.h"
using std::tan;
# 638 "/usr/local/cuda/include/math_functions.h"
using std::tanh;
# 695 "/usr/local/cuda/include/math_functions.h"
namespace std {
# 698 "/usr/local/cuda/include/math_functions.h"
extern inline long abs(long);
# 699 "/usr/local/cuda/include/math_functions.h"
extern inline float abs(float);
# 700 "/usr/local/cuda/include/math_functions.h"
extern inline double abs(double);
# 701 "/usr/local/cuda/include/math_functions.h"
extern inline float fabs(float);
# 702 "/usr/local/cuda/include/math_functions.h"
extern inline float ceil(float);
# 703 "/usr/local/cuda/include/math_functions.h"
extern inline float floor(float);
# 704 "/usr/local/cuda/include/math_functions.h"
extern inline float sqrt(float);
# 705 "/usr/local/cuda/include/math_functions.h"
extern inline float pow(float, float);
# 706 "/usr/local/cuda/include/math_functions.h"
extern inline float pow(float, int);
# 707 "/usr/local/cuda/include/math_functions.h"
extern inline double pow(double, int);
# 708 "/usr/local/cuda/include/math_functions.h"
extern inline float log(float);
# 709 "/usr/local/cuda/include/math_functions.h"
extern inline float log10(float);
# 710 "/usr/local/cuda/include/math_functions.h"
extern inline float fmod(float, float);
# 711 "/usr/local/cuda/include/math_functions.h"
extern inline float modf(float, float *);
# 712 "/usr/local/cuda/include/math_functions.h"
extern inline float exp(float);
# 713 "/usr/local/cuda/include/math_functions.h"
extern inline float frexp(float, int *);
# 714 "/usr/local/cuda/include/math_functions.h"
extern inline float ldexp(float, int);
# 715 "/usr/local/cuda/include/math_functions.h"
extern inline float asin(float);
# 716 "/usr/local/cuda/include/math_functions.h"
extern inline float sin(float);
# 717 "/usr/local/cuda/include/math_functions.h"
extern inline float sinh(float);
# 718 "/usr/local/cuda/include/math_functions.h"
extern inline float acos(float);
# 719 "/usr/local/cuda/include/math_functions.h"
extern inline float cos(float);
# 720 "/usr/local/cuda/include/math_functions.h"
extern inline float cosh(float);
# 721 "/usr/local/cuda/include/math_functions.h"
extern inline float atan(float);
# 722 "/usr/local/cuda/include/math_functions.h"
extern inline float atan2(float, float);
# 723 "/usr/local/cuda/include/math_functions.h"
extern inline float tan(float);
# 724 "/usr/local/cuda/include/math_functions.h"
extern inline float tanh(float);
# 727 "/usr/local/cuda/include/math_functions.h"
}
# 730 "/usr/local/cuda/include/math_functions.h"
static inline float logb(float a)
# 731 "/usr/local/cuda/include/math_functions.h"
{
# 732 "/usr/local/cuda/include/math_functions.h"
return logbf(a);
# 733 "/usr/local/cuda/include/math_functions.h"
}
# 735 "/usr/local/cuda/include/math_functions.h"
static inline int ilogb(float a)
# 736 "/usr/local/cuda/include/math_functions.h"
{
# 737 "/usr/local/cuda/include/math_functions.h"
return ilogbf(a);
# 738 "/usr/local/cuda/include/math_functions.h"
}
# 740 "/usr/local/cuda/include/math_functions.h"
static inline float scalbn(float a, int b)
# 741 "/usr/local/cuda/include/math_functions.h"
{
# 742 "/usr/local/cuda/include/math_functions.h"
return scalbnf(a, b);
# 743 "/usr/local/cuda/include/math_functions.h"
}
# 745 "/usr/local/cuda/include/math_functions.h"
static inline float scalbln(float a, long b)
# 746 "/usr/local/cuda/include/math_functions.h"
{
# 747 "/usr/local/cuda/include/math_functions.h"
return scalblnf(a, b);
# 748 "/usr/local/cuda/include/math_functions.h"
}
# 750 "/usr/local/cuda/include/math_functions.h"
static inline float exp2(float a)
# 751 "/usr/local/cuda/include/math_functions.h"
{
# 752 "/usr/local/cuda/include/math_functions.h"
return exp2f(a);
# 753 "/usr/local/cuda/include/math_functions.h"
}
# 755 "/usr/local/cuda/include/math_functions.h"
static inline float exp10(float a)
# 756 "/usr/local/cuda/include/math_functions.h"
{
# 757 "/usr/local/cuda/include/math_functions.h"
return exp10f(a);
# 758 "/usr/local/cuda/include/math_functions.h"
}
# 760 "/usr/local/cuda/include/math_functions.h"
static inline float expm1(float a)
# 761 "/usr/local/cuda/include/math_functions.h"
{
# 762 "/usr/local/cuda/include/math_functions.h"
return expm1f(a);
# 763 "/usr/local/cuda/include/math_functions.h"
}
# 765 "/usr/local/cuda/include/math_functions.h"
static inline float log2(float a)
# 766 "/usr/local/cuda/include/math_functions.h"
{
# 767 "/usr/local/cuda/include/math_functions.h"
return log2f(a);
# 768 "/usr/local/cuda/include/math_functions.h"
}
# 770 "/usr/local/cuda/include/math_functions.h"
static inline float log1p(float a)
# 771 "/usr/local/cuda/include/math_functions.h"
{
# 772 "/usr/local/cuda/include/math_functions.h"
return log1pf(a);
# 773 "/usr/local/cuda/include/math_functions.h"
}
# 775 "/usr/local/cuda/include/math_functions.h"
static inline float rsqrt(float a)
# 776 "/usr/local/cuda/include/math_functions.h"
{
# 777 "/usr/local/cuda/include/math_functions.h"
return rsqrtf(a);
# 778 "/usr/local/cuda/include/math_functions.h"
}
# 780 "/usr/local/cuda/include/math_functions.h"
static inline float acosh(float a)
# 781 "/usr/local/cuda/include/math_functions.h"
{
# 782 "/usr/local/cuda/include/math_functions.h"
return acoshf(a);
# 783 "/usr/local/cuda/include/math_functions.h"
}
# 785 "/usr/local/cuda/include/math_functions.h"
static inline float asinh(float a)
# 786 "/usr/local/cuda/include/math_functions.h"
{
# 787 "/usr/local/cuda/include/math_functions.h"
return asinhf(a);
# 788 "/usr/local/cuda/include/math_functions.h"
}
# 790 "/usr/local/cuda/include/math_functions.h"
static inline float atanh(float a)
# 791 "/usr/local/cuda/include/math_functions.h"
{
# 792 "/usr/local/cuda/include/math_functions.h"
return atanhf(a);
# 793 "/usr/local/cuda/include/math_functions.h"
}
# 795 "/usr/local/cuda/include/math_functions.h"
static inline float hypot(float a, float b)
# 796 "/usr/local/cuda/include/math_functions.h"
{
# 797 "/usr/local/cuda/include/math_functions.h"
return hypotf(a, b);
# 798 "/usr/local/cuda/include/math_functions.h"
}
# 800 "/usr/local/cuda/include/math_functions.h"
static inline float cbrt(float a)
# 801 "/usr/local/cuda/include/math_functions.h"
{
# 802 "/usr/local/cuda/include/math_functions.h"
return cbrtf(a);
# 803 "/usr/local/cuda/include/math_functions.h"
}
# 805 "/usr/local/cuda/include/math_functions.h"
static inline float rcbrt(float a)
# 806 "/usr/local/cuda/include/math_functions.h"
{
# 807 "/usr/local/cuda/include/math_functions.h"
return rcbrtf(a);
# 808 "/usr/local/cuda/include/math_functions.h"
}
# 810 "/usr/local/cuda/include/math_functions.h"
static inline float sinpi(float a)
# 811 "/usr/local/cuda/include/math_functions.h"
{
# 812 "/usr/local/cuda/include/math_functions.h"
return sinpif(a);
# 813 "/usr/local/cuda/include/math_functions.h"
}
# 815 "/usr/local/cuda/include/math_functions.h"
static inline float cospi(float a)
# 816 "/usr/local/cuda/include/math_functions.h"
{
# 817 "/usr/local/cuda/include/math_functions.h"
return cospif(a);
# 818 "/usr/local/cuda/include/math_functions.h"
}
# 820 "/usr/local/cuda/include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 821 "/usr/local/cuda/include/math_functions.h"
{
# 822 "/usr/local/cuda/include/math_functions.h"
sincosf(a, sptr, cptr);
# 823 "/usr/local/cuda/include/math_functions.h"
}
# 825 "/usr/local/cuda/include/math_functions.h"
static inline float erf(float a)
# 826 "/usr/local/cuda/include/math_functions.h"
{
# 827 "/usr/local/cuda/include/math_functions.h"
return erff(a);
# 828 "/usr/local/cuda/include/math_functions.h"
}
# 830 "/usr/local/cuda/include/math_functions.h"
static inline float erfinv(float a)
# 831 "/usr/local/cuda/include/math_functions.h"
{
# 832 "/usr/local/cuda/include/math_functions.h"
return erfinvf(a);
# 833 "/usr/local/cuda/include/math_functions.h"
}
# 835 "/usr/local/cuda/include/math_functions.h"
static inline float erfc(float a)
# 836 "/usr/local/cuda/include/math_functions.h"
{
# 837 "/usr/local/cuda/include/math_functions.h"
return erfcf(a);
# 838 "/usr/local/cuda/include/math_functions.h"
}
# 840 "/usr/local/cuda/include/math_functions.h"
static inline float erfcinv(float a)
# 841 "/usr/local/cuda/include/math_functions.h"
{
# 842 "/usr/local/cuda/include/math_functions.h"
return erfcinvf(a);
# 843 "/usr/local/cuda/include/math_functions.h"
}
# 845 "/usr/local/cuda/include/math_functions.h"
static inline float lgamma(float a)
# 846 "/usr/local/cuda/include/math_functions.h"
{
# 847 "/usr/local/cuda/include/math_functions.h"
return lgammaf(a);
# 848 "/usr/local/cuda/include/math_functions.h"
}
# 850 "/usr/local/cuda/include/math_functions.h"
static inline float tgamma(float a)
# 851 "/usr/local/cuda/include/math_functions.h"
{
# 852 "/usr/local/cuda/include/math_functions.h"
return tgammaf(a);
# 853 "/usr/local/cuda/include/math_functions.h"
}
# 855 "/usr/local/cuda/include/math_functions.h"
static inline float copysign(float a, float b)
# 856 "/usr/local/cuda/include/math_functions.h"
{
# 857 "/usr/local/cuda/include/math_functions.h"
return copysignf(a, b);
# 858 "/usr/local/cuda/include/math_functions.h"
}
# 860 "/usr/local/cuda/include/math_functions.h"
static inline double copysign(double a, float b)
# 861 "/usr/local/cuda/include/math_functions.h"
{
# 862 "/usr/local/cuda/include/math_functions.h"
return copysign(a, (double)b);
# 863 "/usr/local/cuda/include/math_functions.h"
}
# 865 "/usr/local/cuda/include/math_functions.h"
static inline float copysign(float a, double b)
# 866 "/usr/local/cuda/include/math_functions.h"
{
# 867 "/usr/local/cuda/include/math_functions.h"
return copysignf(a, (float)b);
# 868 "/usr/local/cuda/include/math_functions.h"
}
# 870 "/usr/local/cuda/include/math_functions.h"
static inline float nextafter(float a, float b)
# 871 "/usr/local/cuda/include/math_functions.h"
{
# 872 "/usr/local/cuda/include/math_functions.h"
return nextafterf(a, b);
# 873 "/usr/local/cuda/include/math_functions.h"
}
# 875 "/usr/local/cuda/include/math_functions.h"
static inline float remainder(float a, float b)
# 876 "/usr/local/cuda/include/math_functions.h"
{
# 877 "/usr/local/cuda/include/math_functions.h"
return remainderf(a, b);
# 878 "/usr/local/cuda/include/math_functions.h"
}
# 880 "/usr/local/cuda/include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 881 "/usr/local/cuda/include/math_functions.h"
{
# 882 "/usr/local/cuda/include/math_functions.h"
return remquof(a, b, quo);
# 883 "/usr/local/cuda/include/math_functions.h"
}
# 885 "/usr/local/cuda/include/math_functions.h"
static inline float round(float a)
# 886 "/usr/local/cuda/include/math_functions.h"
{
# 887 "/usr/local/cuda/include/math_functions.h"
return roundf(a);
# 888 "/usr/local/cuda/include/math_functions.h"
}
# 890 "/usr/local/cuda/include/math_functions.h"
static inline long lround(float a)
# 891 "/usr/local/cuda/include/math_functions.h"
{
# 892 "/usr/local/cuda/include/math_functions.h"
return lroundf(a);
# 893 "/usr/local/cuda/include/math_functions.h"
}
# 895 "/usr/local/cuda/include/math_functions.h"
static inline long long llround(float a)
# 896 "/usr/local/cuda/include/math_functions.h"
{
# 897 "/usr/local/cuda/include/math_functions.h"
return llroundf(a);
# 898 "/usr/local/cuda/include/math_functions.h"
}
# 900 "/usr/local/cuda/include/math_functions.h"
static inline float trunc(float a)
# 901 "/usr/local/cuda/include/math_functions.h"
{
# 902 "/usr/local/cuda/include/math_functions.h"
return truncf(a);
# 903 "/usr/local/cuda/include/math_functions.h"
}
# 905 "/usr/local/cuda/include/math_functions.h"
static inline float rint(float a)
# 906 "/usr/local/cuda/include/math_functions.h"
{
# 907 "/usr/local/cuda/include/math_functions.h"
return rintf(a);
# 908 "/usr/local/cuda/include/math_functions.h"
}
# 910 "/usr/local/cuda/include/math_functions.h"
static inline long lrint(float a)
# 911 "/usr/local/cuda/include/math_functions.h"
{
# 912 "/usr/local/cuda/include/math_functions.h"
return lrintf(a);
# 913 "/usr/local/cuda/include/math_functions.h"
}
# 915 "/usr/local/cuda/include/math_functions.h"
static inline long long llrint(float a)
# 916 "/usr/local/cuda/include/math_functions.h"
{
# 917 "/usr/local/cuda/include/math_functions.h"
return llrintf(a);
# 918 "/usr/local/cuda/include/math_functions.h"
}
# 920 "/usr/local/cuda/include/math_functions.h"
static inline float nearbyint(float a)
# 921 "/usr/local/cuda/include/math_functions.h"
{
# 922 "/usr/local/cuda/include/math_functions.h"
return nearbyintf(a);
# 923 "/usr/local/cuda/include/math_functions.h"
}
# 925 "/usr/local/cuda/include/math_functions.h"
static inline float fdim(float a, float b)
# 926 "/usr/local/cuda/include/math_functions.h"
{
# 927 "/usr/local/cuda/include/math_functions.h"
return fdimf(a, b);
# 928 "/usr/local/cuda/include/math_functions.h"
}
# 930 "/usr/local/cuda/include/math_functions.h"
static inline float fma(float a, float b, float c)
# 931 "/usr/local/cuda/include/math_functions.h"
{
# 932 "/usr/local/cuda/include/math_functions.h"
return fmaf(a, b, c);
# 933 "/usr/local/cuda/include/math_functions.h"
}
# 935 "/usr/local/cuda/include/math_functions.h"
static inline float fmax(float a, float b)
# 936 "/usr/local/cuda/include/math_functions.h"
{
# 937 "/usr/local/cuda/include/math_functions.h"
return fmaxf(a, b);
# 938 "/usr/local/cuda/include/math_functions.h"
}
# 940 "/usr/local/cuda/include/math_functions.h"
static inline float fmin(float a, float b)
# 941 "/usr/local/cuda/include/math_functions.h"
{
# 942 "/usr/local/cuda/include/math_functions.h"
return fminf(a, b);
# 943 "/usr/local/cuda/include/math_functions.h"
}
# 945 "/usr/local/cuda/include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 946 "/usr/local/cuda/include/math_functions.h"
{
# 947 "/usr/local/cuda/include/math_functions.h"
return umin(a, b);
# 948 "/usr/local/cuda/include/math_functions.h"
}
# 950 "/usr/local/cuda/include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 951 "/usr/local/cuda/include/math_functions.h"
{
# 952 "/usr/local/cuda/include/math_functions.h"
return umin((unsigned)a, b);
# 953 "/usr/local/cuda/include/math_functions.h"
}
# 955 "/usr/local/cuda/include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 956 "/usr/local/cuda/include/math_functions.h"
{
# 957 "/usr/local/cuda/include/math_functions.h"
return umin(a, (unsigned)b);
# 958 "/usr/local/cuda/include/math_functions.h"
}
# 960 "/usr/local/cuda/include/math_functions.h"
static inline long long min(long long a, long long b)
# 961 "/usr/local/cuda/include/math_functions.h"
{
# 962 "/usr/local/cuda/include/math_functions.h"
return llmin(a, b);
# 963 "/usr/local/cuda/include/math_functions.h"
}
# 965 "/usr/local/cuda/include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 966 "/usr/local/cuda/include/math_functions.h"
{
# 967 "/usr/local/cuda/include/math_functions.h"
return ullmin(a, b);
# 968 "/usr/local/cuda/include/math_functions.h"
}
# 970 "/usr/local/cuda/include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 971 "/usr/local/cuda/include/math_functions.h"
{
# 972 "/usr/local/cuda/include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 973 "/usr/local/cuda/include/math_functions.h"
}
# 975 "/usr/local/cuda/include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 976 "/usr/local/cuda/include/math_functions.h"
{
# 977 "/usr/local/cuda/include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 978 "/usr/local/cuda/include/math_functions.h"
}
# 980 "/usr/local/cuda/include/math_functions.h"
static inline float min(float a, float b)
# 981 "/usr/local/cuda/include/math_functions.h"
{
# 982 "/usr/local/cuda/include/math_functions.h"
return fminf(a, b);
# 983 "/usr/local/cuda/include/math_functions.h"
}
# 985 "/usr/local/cuda/include/math_functions.h"
static inline double min(double a, double b)
# 986 "/usr/local/cuda/include/math_functions.h"
{
# 987 "/usr/local/cuda/include/math_functions.h"
return fmin(a, b);
# 988 "/usr/local/cuda/include/math_functions.h"
}
# 990 "/usr/local/cuda/include/math_functions.h"
static inline double min(float a, double b)
# 991 "/usr/local/cuda/include/math_functions.h"
{
# 992 "/usr/local/cuda/include/math_functions.h"
return fmin((double)a, b);
# 993 "/usr/local/cuda/include/math_functions.h"
}
# 995 "/usr/local/cuda/include/math_functions.h"
static inline double min(double a, float b)
# 996 "/usr/local/cuda/include/math_functions.h"
{
# 997 "/usr/local/cuda/include/math_functions.h"
return fmin(a, (double)b);
# 998 "/usr/local/cuda/include/math_functions.h"
}
# 1000 "/usr/local/cuda/include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 1001 "/usr/local/cuda/include/math_functions.h"
{
# 1002 "/usr/local/cuda/include/math_functions.h"
return umax(a, b);
# 1003 "/usr/local/cuda/include/math_functions.h"
}
# 1005 "/usr/local/cuda/include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 1006 "/usr/local/cuda/include/math_functions.h"
{
# 1007 "/usr/local/cuda/include/math_functions.h"
return umax((unsigned)a, b);
# 1008 "/usr/local/cuda/include/math_functions.h"
}
# 1010 "/usr/local/cuda/include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 1011 "/usr/local/cuda/include/math_functions.h"
{
# 1012 "/usr/local/cuda/include/math_functions.h"
return umax(a, (unsigned)b);
# 1013 "/usr/local/cuda/include/math_functions.h"
}
# 1015 "/usr/local/cuda/include/math_functions.h"
static inline long long max(long long a, long long b)
# 1016 "/usr/local/cuda/include/math_functions.h"
{
# 1017 "/usr/local/cuda/include/math_functions.h"
return llmax(a, b);
# 1018 "/usr/local/cuda/include/math_functions.h"
}
# 1020 "/usr/local/cuda/include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 1021 "/usr/local/cuda/include/math_functions.h"
{
# 1022 "/usr/local/cuda/include/math_functions.h"
return ullmax(a, b);
# 1023 "/usr/local/cuda/include/math_functions.h"
}
# 1025 "/usr/local/cuda/include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 1026 "/usr/local/cuda/include/math_functions.h"
{
# 1027 "/usr/local/cuda/include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 1028 "/usr/local/cuda/include/math_functions.h"
}
# 1030 "/usr/local/cuda/include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 1031 "/usr/local/cuda/include/math_functions.h"
{
# 1032 "/usr/local/cuda/include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 1033 "/usr/local/cuda/include/math_functions.h"
}
# 1035 "/usr/local/cuda/include/math_functions.h"
static inline float max(float a, float b)
# 1036 "/usr/local/cuda/include/math_functions.h"
{
# 1037 "/usr/local/cuda/include/math_functions.h"
return fmaxf(a, b);
# 1038 "/usr/local/cuda/include/math_functions.h"
}
# 1040 "/usr/local/cuda/include/math_functions.h"
static inline double max(double a, double b)
# 1041 "/usr/local/cuda/include/math_functions.h"
{
# 1042 "/usr/local/cuda/include/math_functions.h"
return fmax(a, b);
# 1043 "/usr/local/cuda/include/math_functions.h"
}
# 1045 "/usr/local/cuda/include/math_functions.h"
static inline double max(float a, double b)
# 1046 "/usr/local/cuda/include/math_functions.h"
{
# 1047 "/usr/local/cuda/include/math_functions.h"
return fmax((double)a, b);
# 1048 "/usr/local/cuda/include/math_functions.h"
}
# 1050 "/usr/local/cuda/include/math_functions.h"
static inline double max(double a, float b)
# 1051 "/usr/local/cuda/include/math_functions.h"
{
# 1052 "/usr/local/cuda/include/math_functions.h"
return fmax(a, (double)b);
# 1053 "/usr/local/cuda/include/math_functions.h"
}
# 74 "/usr/local/cuda/include/cuda_surface_types.h"
template< class T, int dim = 1>
# 75 "/usr/local/cuda/include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 77 "/usr/local/cuda/include/cuda_surface_types.h"
surface()
# 78 "/usr/local/cuda/include/cuda_surface_types.h"
{
# 79 "/usr/local/cuda/include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 80 "/usr/local/cuda/include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 83 "/usr/local/cuda/include/cuda_surface_types.h"
{
# 84 "/usr/local/cuda/include/cuda_surface_types.h"
(channelDesc) = desc;
# 85 "/usr/local/cuda/include/cuda_surface_types.h"
}
# 86 "/usr/local/cuda/include/cuda_surface_types.h"
};
# 89 "/usr/local/cuda/include/cuda_surface_types.h"
template< int dim>
# 90 "/usr/local/cuda/include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 92 "/usr/local/cuda/include/cuda_surface_types.h"
surface()
# 93 "/usr/local/cuda/include/cuda_surface_types.h"
{
# 94 "/usr/local/cuda/include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 95 "/usr/local/cuda/include/cuda_surface_types.h"
}
# 96 "/usr/local/cuda/include/cuda_surface_types.h"
};
# 74 "/usr/local/cuda/include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 75 "/usr/local/cuda/include/cuda_texture_types.h"
struct texture : public textureReference {
# 77 "/usr/local/cuda/include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 78 "/usr/local/cuda/include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 79 "/usr/local/cuda/include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 80 "/usr/local/cuda/include/cuda_texture_types.h"
{
# 81 "/usr/local/cuda/include/cuda_texture_types.h"
(normalized) = norm;
# 82 "/usr/local/cuda/include/cuda_texture_types.h"
(filterMode) = fMode;
# 83 "/usr/local/cuda/include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 84 "/usr/local/cuda/include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 85 "/usr/local/cuda/include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 86 "/usr/local/cuda/include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 87 "/usr/local/cuda/include/cuda_texture_types.h"
(sRGB) = 0;
# 88 "/usr/local/cuda/include/cuda_texture_types.h"
}
# 90 "/usr/local/cuda/include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 91 "/usr/local/cuda/include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 92 "/usr/local/cuda/include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 93 "/usr/local/cuda/include/cuda_texture_types.h"
desc)
# 94 "/usr/local/cuda/include/cuda_texture_types.h"
{
# 95 "/usr/local/cuda/include/cuda_texture_types.h"
(normalized) = norm;
# 96 "/usr/local/cuda/include/cuda_texture_types.h"
(filterMode) = fMode;
# 97 "/usr/local/cuda/include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 98 "/usr/local/cuda/include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 99 "/usr/local/cuda/include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 100 "/usr/local/cuda/include/cuda_texture_types.h"
(channelDesc) = desc;
# 101 "/usr/local/cuda/include/cuda_texture_types.h"
(sRGB) = 0;
# 102 "/usr/local/cuda/include/cuda_texture_types.h"
}
# 103 "/usr/local/cuda/include/cuda_texture_types.h"
};
# 338 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 339 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 341 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 343 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 344 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 346 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 348 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 349 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 351 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 353 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 354 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 356 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 358 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 359 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 361 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 363 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 364 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 366 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 368 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 369 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 371 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 373 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 374 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 376 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 378 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 379 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 381 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 383 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 384 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 386 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 388 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 389 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 391 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 393 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 394 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 396 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 398 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 399 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 401 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 403 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 404 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;
# 406 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 409 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c = 0)
# 410 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)c;
# 412 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 414 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 415 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;
# 417 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 419 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 420 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)e;
# 437 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 439 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 440 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)global;
# 442 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 444 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 445 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 450 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 452 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 453 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 458 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 460 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 461 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 466 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 468 "/usr/local/cuda/include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 469 "/usr/local/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 474 "/usr/local/cuda/include/device_functions.h"
exit(___);}
# 116 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 117 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 119 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 121 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 122 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 124 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 126 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 127 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 129 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 131 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 132 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 134 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 136 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 137 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 139 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 141 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 142 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 144 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 146 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 147 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 149 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 151 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 152 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 154 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 156 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 157 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 159 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 161 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 162 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 164 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 166 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 167 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 169 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 171 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 172 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 174 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 176 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 177 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 179 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 181 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 182 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 184 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 186 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 187 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 189 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 191 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 192 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 194 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 196 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 197 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 199 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 201 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 202 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 204 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 206 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 207 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 209 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 211 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 212 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 214 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 216 "/usr/local/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 217 "/usr/local/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 219 "/usr/local/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 89 "/usr/local/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 90 "/usr/local/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 92 "/usr/local/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 94 "/usr/local/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 95 "/usr/local/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 97 "/usr/local/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 99 "/usr/local/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 100 "/usr/local/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 102 "/usr/local/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 104 "/usr/local/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 105 "/usr/local/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 107 "/usr/local/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 109 "/usr/local/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 110 "/usr/local/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 112 "/usr/local/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 184 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 185 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 190 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 192 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 193 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 198 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 200 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 201 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 206 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 208 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 209 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 214 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 216 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 217 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 222 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 224 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 225 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 230 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 232 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 233 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 238 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 240 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 241 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 246 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 248 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 249 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 254 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 256 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 257 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 259 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 261 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 262 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 264 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 266 "/usr/local/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 267 "/usr/local/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 269 "/usr/local/cuda/include/sm_13_double_functions.h"
exit(___);}
# 80 "/usr/local/cuda/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 81 "/usr/local/cuda/include/sm_20_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 83 "/usr/local/cuda/include/sm_20_atomic_functions.h"
exit(___);}
# 138 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 139 "/usr/local/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 141 "/usr/local/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 143 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 144 "/usr/local/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 146 "/usr/local/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 148 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 149 "/usr/local/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 151 "/usr/local/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 153 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 154 "/usr/local/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 156 "/usr/local/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 111 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 112 "/usr/local/cuda/include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 113 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 120 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 122 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 123 "/usr/local/cuda/include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 124 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 130 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 132 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 133 "/usr/local/cuda/include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 134 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 136 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 139 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 140 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 142 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 145 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 146 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 148 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 151 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 152 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 154 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 157 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 158 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 160 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 166 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 174 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 180 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 188 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 191 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 192 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 194 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 197 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 198 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 200 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 203 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 204 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 206 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 209 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 210 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 212 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 218 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 226 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 232 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 240 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 243 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 244 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 246 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 249 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 250 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 252 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 255 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 256 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 258 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 261 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 262 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 264 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 270 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 278 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 284 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 292 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 295 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 296 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 298 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 301 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 302 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 304 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 307 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 308 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 310 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 313 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 314 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 316 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 322 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 325 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 326 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 330 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 333 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 334 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 336 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 399 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 400 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 402 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 408 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 411 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 412 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 416 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 419 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 420 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 424 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 471 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 472 "/usr/local/cuda/include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 473 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 480 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 482 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 483 "/usr/local/cuda/include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 484 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 490 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 492 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 493 "/usr/local/cuda/include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 494 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 496 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 499 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 500 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 502 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 505 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 506 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 508 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 511 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 512 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 514 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 517 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 518 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 520 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 526 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 534 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 540 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 548 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 551 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 552 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 554 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 557 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 558 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 560 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 563 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 564 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 566 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 569 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 570 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 572 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 578 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 586 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 592 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 600 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 603 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 604 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 606 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 609 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 610 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 612 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 615 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 616 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 618 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 621 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 622 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 624 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 630 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 638 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 644 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 652 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 655 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 656 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 658 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 661 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 662 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 664 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 667 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 668 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 670 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 673 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 674 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 676 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 682 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 685 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 686 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 690 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 693 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 694 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 696 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 759 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 760 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 762 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 768 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 771 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 772 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 776 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 779 "/usr/local/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 780 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 784 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 831 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 832 "/usr/local/cuda/include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 833 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 851 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 853 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 854 "/usr/local/cuda/include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 855 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 857 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 860 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 861 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 863 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 865 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 866 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 868 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 870 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 871 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 873 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 875 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 876 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 878 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 880 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 881 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 883 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 885 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 886 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 888 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 890 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 891 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 893 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 895 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 896 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 898 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 900 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 901 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 903 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 905 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 906 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 908 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 910 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 911 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 913 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 915 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 916 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 918 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 920 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 921 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 923 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 925 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 926 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 928 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 930 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 931 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 933 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 935 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 936 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 938 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 940 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 941 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 943 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 945 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 946 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 948 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 950 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 951 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 953 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 955 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 956 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 958 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 960 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 961 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 963 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 965 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 966 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 968 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 970 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 971 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 973 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 975 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 976 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 978 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 980 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 981 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 983 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 985 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 986 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 988 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 990 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 991 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 993 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 995 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 996 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 998 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1000 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1001 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1003 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1005 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1006 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1008 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1010 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1011 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1013 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1059 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1060 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1062 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1065 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1067 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1069 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1070 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1072 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1074 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1075 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1077 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1124 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1125 "/usr/local/cuda/include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1126 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 1144 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1146 "/usr/local/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1147 "/usr/local/cuda/include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1148 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1150 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1153 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1154 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1156 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1158 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1159 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1161 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1163 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1164 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1166 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1169 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1171 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1173 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1174 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1176 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1178 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1179 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1181 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1183 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1184 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1186 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1188 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1189 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1191 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1193 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1194 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1196 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1198 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1199 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1201 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1203 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1204 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1206 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1208 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1209 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1211 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1213 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1214 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1216 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1218 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1219 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1221 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1223 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1224 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1226 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1228 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1229 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1231 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1233 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1234 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1236 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1238 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1239 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1241 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1243 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1244 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1246 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1248 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1249 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1251 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1253 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1254 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1256 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1258 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1259 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1261 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1263 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1264 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1266 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1269 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1271 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1273 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1274 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1276 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1278 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1279 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1281 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1283 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1284 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1286 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1288 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1289 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1291 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1294 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1296 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1298 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1299 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1301 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1303 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1304 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1306 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1352 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1353 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1355 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1357 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1358 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1360 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1362 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1363 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1365 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 1367 "/usr/local/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1368 "/usr/local/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1370 "/usr/local/cuda/include/surface_functions.h"
exit(___);}
# 75 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4 );
# 77 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4 );
# 79 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4 );
# 82 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, texType, readMode> , float4 , int = texType);
# 84 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, texType, readMode> , float4 , int = texType);
# 86 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, texType, readMode> , float4 , int = texType);
# 89 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchl(texture< T, texType, readMode> , float4 , int , int = (texType & 15));
# 91 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchl(texture< T, texType, readMode> , float4 , int , int = (texType & 15));
# 93 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchl(texture< T, texType, readMode> , float4 , int , int = (texType & 15));
# 101 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 102 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 110 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 117 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 124 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 131 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 138 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 145 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 147 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 148 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 152 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 154 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 155 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 159 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 161 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 162 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 166 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 179 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 186 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 193 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 200 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 207 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 209 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 210 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 214 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 216 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 217 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 221 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 223 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 224 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 228 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 241 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 248 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 255 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 262 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 269 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 271 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 272 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 276 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 278 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 279 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 283 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 285 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 286 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 290 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 369 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 371 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 372 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 376 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 378 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 379 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 383 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 385 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 386 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 390 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 398 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 399 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 408 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 410 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 411 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 416 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 418 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 419 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 424 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 426 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 427 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 432 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 434 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 435 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 440 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 442 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 443 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 448 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 450 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 451 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 456 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 458 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 459 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 464 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 466 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 467 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 472 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 480 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 481 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 486 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 488 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 489 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 494 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 496 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 497 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 502 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 504 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 505 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 510 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 512 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 513 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 518 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 520 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 521 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 526 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 528 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 529 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 534 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 536 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 537 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 542 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 550 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 551 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 559 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 566 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 573 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 580 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 587 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 594 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 596 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 597 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 601 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 603 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 604 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 608 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 610 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 611 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 615 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 628 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 635 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 642 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 649 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 656 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 658 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 659 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 663 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 665 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 666 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 670 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 672 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 673 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 677 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 690 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 697 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 704 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 711 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 718 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 720 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 721 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 725 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 727 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 728 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 732 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 734 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 735 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 739 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 824 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 826 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 827 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 831 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 833 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 834 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 838 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 840 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 841 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 845 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 853 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 854 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 863 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 865 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 866 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 871 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 873 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 874 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 879 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 881 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 882 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 887 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 889 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 890 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 895 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 897 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 898 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 903 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 905 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 906 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 911 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 913 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 914 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 919 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 921 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 922 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 927 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 935 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 936 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 941 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 943 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 944 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 949 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 951 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 952 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 957 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 959 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 960 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 965 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 967 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 968 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 973 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 975 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 976 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 981 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 983 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 984 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 989 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 991 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 992 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 997 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1005 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 1006 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1014 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1021 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1028 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1035 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1042 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1049 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1051 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1052 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1056 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1058 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1059 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1063 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1065 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1066 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1070 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1083 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1090 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1097 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1104 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1111 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1113 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1114 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1118 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1120 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1121 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1125 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1127 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1128 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1132 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1145 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1152 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1159 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1166 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1173 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1175 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1176 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1180 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1182 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1183 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1187 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1190 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1194 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1273 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1275 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1276 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1280 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1282 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1283 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1287 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1290 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1294 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1302 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1303 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1312 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1314 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1315 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1320 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1322 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1323 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1328 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1330 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1331 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1336 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1339 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1344 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1346 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1347 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1352 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1354 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1355 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1360 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1362 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1363 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1368 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1370 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1371 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1376 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1384 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1385 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1390 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1392 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1393 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1398 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1400 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1401 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1406 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1408 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1409 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1414 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1416 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1417 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1422 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1424 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1425 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1430 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1432 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1433 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1438 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1440 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1441 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1446 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1454 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1DLayered(texture< char, 241, cudaReadModeElementType> t, float x, int layer)
# 1455 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1463 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1DLayered(texture< signed char, 241, cudaReadModeElementType> t, float x, int layer)
# 1466 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1470 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1DLayered(texture< unsigned char, 241, cudaReadModeElementType> t, float x, int layer)
# 1473 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1477 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1DLayered(texture< char1, 241, cudaReadModeElementType> t, float x, int layer)
# 1480 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1484 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1DLayered(texture< uchar1, 241, cudaReadModeElementType> t, float x, int layer)
# 1487 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1491 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1DLayered(texture< char2, 241, cudaReadModeElementType> t, float x, int layer)
# 1494 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1498 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1500 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1DLayered(texture< uchar2, 241, cudaReadModeElementType> t, float x, int layer)
# 1501 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1505 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1507 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1DLayered(texture< char4, 241, cudaReadModeElementType> t, float x, int layer)
# 1508 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1512 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1514 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1DLayered(texture< uchar4, 241, cudaReadModeElementType> t, float x, int layer)
# 1515 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1519 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1DLayered(texture< short, 241, cudaReadModeElementType> t, float x, int layer)
# 1528 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1532 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1DLayered(texture< unsigned short, 241, cudaReadModeElementType> t, float x, int layer)
# 1535 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1539 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1DLayered(texture< short1, 241, cudaReadModeElementType> t, float x, int layer)
# 1542 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1546 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1DLayered(texture< ushort1, 241, cudaReadModeElementType> t, float x, int layer)
# 1549 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1553 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1DLayered(texture< short2, 241, cudaReadModeElementType> t, float x, int layer)
# 1556 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1560 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1562 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1DLayered(texture< ushort2, 241, cudaReadModeElementType> t, float x, int layer)
# 1563 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1567 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1569 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1DLayered(texture< short4, 241, cudaReadModeElementType> t, float x, int layer)
# 1570 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1574 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1576 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1DLayered(texture< ushort4, 241, cudaReadModeElementType> t, float x, int layer)
# 1577 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1581 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1DLayered(texture< int, 241, cudaReadModeElementType> t, float x, int layer)
# 1590 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1594 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1DLayered(texture< unsigned, 241, cudaReadModeElementType> t, float x, int layer)
# 1597 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1601 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1DLayered(texture< int1, 241, cudaReadModeElementType> t, float x, int layer)
# 1604 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1608 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1DLayered(texture< uint1, 241, cudaReadModeElementType> t, float x, int layer)
# 1611 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1615 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1DLayered(texture< int2, 241, cudaReadModeElementType> t, float x, int layer)
# 1618 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1622 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1624 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1DLayered(texture< uint2, 241, cudaReadModeElementType> t, float x, int layer)
# 1625 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1629 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1631 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1DLayered(texture< int4, 241, cudaReadModeElementType> t, float x, int layer)
# 1632 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1636 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1638 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1DLayered(texture< uint4, 241, cudaReadModeElementType> t, float x, int layer)
# 1639 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1643 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< float, 241, cudaReadModeElementType> t, float x, int layer)
# 1718 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1722 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1724 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< float1, 241, cudaReadModeElementType> t, float x, int layer)
# 1725 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1729 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1731 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< float2, 241, cudaReadModeElementType> t, float x, int layer)
# 1732 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1736 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1738 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< float4, 241, cudaReadModeElementType> t, float x, int layer)
# 1739 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1743 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1751 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1752 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1761 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1763 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< signed char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1764 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1769 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1771 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1772 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1777 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1779 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< char1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1780 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1785 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1787 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< uchar1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1788 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1793 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1795 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< char2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1796 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1801 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1803 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< uchar2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1804 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1809 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1811 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< char4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1812 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1817 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1819 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< uchar4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1820 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1825 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1833 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1834 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1839 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1841 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1842 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1847 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1849 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< short1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1850 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1855 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1857 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< ushort1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1858 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1863 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1865 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< short2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1866 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1871 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1873 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< ushort2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1874 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1879 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1881 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< short4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1882 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1887 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1889 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< ushort4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1890 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1895 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1903 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2DLayered(texture< char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1904 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1912 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1914 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2DLayered(texture< signed char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1915 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1919 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1921 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2DLayered(texture< unsigned char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1922 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1926 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1928 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2DLayered(texture< char1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1929 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1933 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1935 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2DLayered(texture< uchar1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1936 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1940 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1942 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2DLayered(texture< char2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1943 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1947 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1949 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2DLayered(texture< uchar2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1950 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1954 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1956 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2DLayered(texture< char4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1957 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1961 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1963 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2DLayered(texture< uchar4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1964 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1968 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1976 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2DLayered(texture< short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1977 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1981 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1983 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2DLayered(texture< unsigned short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1984 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1988 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1990 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2DLayered(texture< short1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1991 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1995 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1997 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2DLayered(texture< ushort1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1998 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2002 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2DLayered(texture< short2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2005 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2009 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2011 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2DLayered(texture< ushort2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2012 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2016 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2018 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2DLayered(texture< short4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2019 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2023 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2025 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2DLayered(texture< ushort4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2026 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2030 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2038 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2DLayered(texture< int, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2039 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2043 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2045 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2DLayered(texture< unsigned, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2046 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2050 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2052 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2DLayered(texture< int1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2053 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2057 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2DLayered(texture< uint1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2060 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2064 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2066 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2DLayered(texture< int2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2067 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2071 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2073 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2DLayered(texture< uint2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2074 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2078 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2080 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2DLayered(texture< int4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2081 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2085 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2087 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2DLayered(texture< uint4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2088 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2092 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2166 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< float, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2167 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2171 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2173 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< float1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2174 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2178 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2180 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< float2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2181 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2185 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2187 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< float4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2188 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2192 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2200 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2201 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2210 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2212 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< signed char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2213 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2218 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2220 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2221 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2226 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2228 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< char1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2229 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2234 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2236 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< uchar1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2237 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2242 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2244 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< char2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2245 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2250 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2252 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< uchar2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2253 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2258 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2260 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< char4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2261 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2266 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2268 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< uchar4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2269 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2274 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2282 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2283 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2288 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2290 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2291 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2296 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2298 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< short1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2299 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2304 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2306 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< ushort1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2307 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2312 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2314 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< short2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2315 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2320 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2322 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< ushort2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2323 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2328 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2330 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< short4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2331 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2336 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2338 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< ushort4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2339 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2344 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2352 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2353 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2361 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2363 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2364 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2368 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2370 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2371 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2375 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2377 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2378 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2382 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2384 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2385 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2389 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2391 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2392 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2396 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2398 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2399 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2403 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2405 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2406 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2410 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2412 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2413 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2417 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2425 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2426 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2430 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2432 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2433 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2437 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2439 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2440 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2444 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2446 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2447 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2451 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2453 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2454 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2458 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2460 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2461 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2465 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2467 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2468 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2472 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2474 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2475 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2479 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2487 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2488 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2492 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2494 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2495 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2499 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2501 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2502 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2506 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2508 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2509 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2513 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2515 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2516 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2520 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2522 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2523 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2527 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2529 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2530 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2534 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2536 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2537 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2541 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2615 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2616 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2620 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2622 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2623 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2627 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2629 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2630 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2634 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2636 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2637 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2641 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2649 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2650 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2659 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2661 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2662 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2667 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2669 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2670 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2675 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2677 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2678 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2683 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2685 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2686 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2691 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2693 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2694 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2699 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2701 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2702 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2707 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2709 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2710 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2715 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2717 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2718 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2723 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2731 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2732 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2737 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2739 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2740 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2745 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2747 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2748 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2753 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2755 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2756 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2761 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2763 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2764 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2769 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2771 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2772 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2777 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2779 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2780 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2785 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2787 "/usr/local/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2788 "/usr/local/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2793 "/usr/local/cuda/include/texture_fetch_functions.h"
exit(___);}
# 67 "/usr/local/cuda/include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 69 "/usr/local/cuda/include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 71 "/usr/local/cuda/include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 73 "/usr/local/cuda/include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 75 "/usr/local/cuda/include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 120 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 121 "/usr/local/cuda/include/cuda_runtime.h"
cudaSetupArgument(T
# 122 "/usr/local/cuda/include/cuda_runtime.h"
arg, size_t
# 123 "/usr/local/cuda/include/cuda_runtime.h"
offset)
# 125 "/usr/local/cuda/include/cuda_runtime.h"
{
# 126 "/usr/local/cuda/include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 127 "/usr/local/cuda/include/cuda_runtime.h"
}
# 159 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 160 "/usr/local/cuda/include/cuda_runtime.h"
event, unsigned
# 161 "/usr/local/cuda/include/cuda_runtime.h"
flags)
# 163 "/usr/local/cuda/include/cuda_runtime.h"
{
# 164 "/usr/local/cuda/include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, flags);
# 165 "/usr/local/cuda/include/cuda_runtime.h"
}
# 222 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 223 "/usr/local/cuda/include/cuda_runtime.h"
ptr, size_t
# 224 "/usr/local/cuda/include/cuda_runtime.h"
size, unsigned
# 225 "/usr/local/cuda/include/cuda_runtime.h"
flags)
# 227 "/usr/local/cuda/include/cuda_runtime.h"
{
# 228 "/usr/local/cuda/include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 229 "/usr/local/cuda/include/cuda_runtime.h"
}
# 231 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 232 "/usr/local/cuda/include/cuda_runtime.h"
cudaHostAlloc(T **
# 233 "/usr/local/cuda/include/cuda_runtime.h"
ptr, size_t
# 234 "/usr/local/cuda/include/cuda_runtime.h"
size, unsigned
# 235 "/usr/local/cuda/include/cuda_runtime.h"
flags)
# 237 "/usr/local/cuda/include/cuda_runtime.h"
{
# 238 "/usr/local/cuda/include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 239 "/usr/local/cuda/include/cuda_runtime.h"
}
# 241 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 242 "/usr/local/cuda/include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 243 "/usr/local/cuda/include/cuda_runtime.h"
pDevice, void *
# 244 "/usr/local/cuda/include/cuda_runtime.h"
pHost, unsigned
# 245 "/usr/local/cuda/include/cuda_runtime.h"
flags)
# 247 "/usr/local/cuda/include/cuda_runtime.h"
{
# 248 "/usr/local/cuda/include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 249 "/usr/local/cuda/include/cuda_runtime.h"
}
# 251 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 252 "/usr/local/cuda/include/cuda_runtime.h"
cudaMalloc(T **
# 253 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, size_t
# 254 "/usr/local/cuda/include/cuda_runtime.h"
size)
# 256 "/usr/local/cuda/include/cuda_runtime.h"
{
# 257 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 258 "/usr/local/cuda/include/cuda_runtime.h"
}
# 260 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 261 "/usr/local/cuda/include/cuda_runtime.h"
cudaMallocHost(T **
# 262 "/usr/local/cuda/include/cuda_runtime.h"
ptr, size_t
# 263 "/usr/local/cuda/include/cuda_runtime.h"
size, unsigned
# 264 "/usr/local/cuda/include/cuda_runtime.h"
flags = (0))
# 266 "/usr/local/cuda/include/cuda_runtime.h"
{
# 267 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 268 "/usr/local/cuda/include/cuda_runtime.h"
}
# 270 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 271 "/usr/local/cuda/include/cuda_runtime.h"
cudaMallocPitch(T **
# 272 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, size_t *
# 273 "/usr/local/cuda/include/cuda_runtime.h"
pitch, size_t
# 274 "/usr/local/cuda/include/cuda_runtime.h"
width, size_t
# 275 "/usr/local/cuda/include/cuda_runtime.h"
height)
# 277 "/usr/local/cuda/include/cuda_runtime.h"
{
# 278 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 279 "/usr/local/cuda/include/cuda_runtime.h"
}
# 289 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 290 "/usr/local/cuda/include/cuda_runtime.h"
symbol, const void *
# 291 "/usr/local/cuda/include/cuda_runtime.h"
src, size_t
# 292 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 293 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 294 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 296 "/usr/local/cuda/include/cuda_runtime.h"
{
# 297 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 298 "/usr/local/cuda/include/cuda_runtime.h"
}
# 300 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 301 "/usr/local/cuda/include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 302 "/usr/local/cuda/include/cuda_runtime.h"
symbol, const void *
# 303 "/usr/local/cuda/include/cuda_runtime.h"
src, size_t
# 304 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 305 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 306 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 308 "/usr/local/cuda/include/cuda_runtime.h"
{
# 309 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 310 "/usr/local/cuda/include/cuda_runtime.h"
}
# 312 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 313 "/usr/local/cuda/include/cuda_runtime.h"
symbol, const void *
# 314 "/usr/local/cuda/include/cuda_runtime.h"
src, size_t
# 315 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 316 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 317 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 318 "/usr/local/cuda/include/cuda_runtime.h"
stream = 0)
# 320 "/usr/local/cuda/include/cuda_runtime.h"
{
# 321 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 322 "/usr/local/cuda/include/cuda_runtime.h"
}
# 324 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 325 "/usr/local/cuda/include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 326 "/usr/local/cuda/include/cuda_runtime.h"
symbol, const void *
# 327 "/usr/local/cuda/include/cuda_runtime.h"
src, size_t
# 328 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 329 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 330 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 331 "/usr/local/cuda/include/cuda_runtime.h"
stream = 0)
# 333 "/usr/local/cuda/include/cuda_runtime.h"
{
# 334 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 335 "/usr/local/cuda/include/cuda_runtime.h"
}
# 343 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 344 "/usr/local/cuda/include/cuda_runtime.h"
dst, char *
# 345 "/usr/local/cuda/include/cuda_runtime.h"
symbol, size_t
# 346 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 347 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 348 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 350 "/usr/local/cuda/include/cuda_runtime.h"
{
# 351 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 352 "/usr/local/cuda/include/cuda_runtime.h"
}
# 354 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 355 "/usr/local/cuda/include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 356 "/usr/local/cuda/include/cuda_runtime.h"
dst, const T &
# 357 "/usr/local/cuda/include/cuda_runtime.h"
symbol, size_t
# 358 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 359 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 360 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 362 "/usr/local/cuda/include/cuda_runtime.h"
{
# 363 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 364 "/usr/local/cuda/include/cuda_runtime.h"
}
# 366 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 367 "/usr/local/cuda/include/cuda_runtime.h"
dst, char *
# 368 "/usr/local/cuda/include/cuda_runtime.h"
symbol, size_t
# 369 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 370 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 371 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 372 "/usr/local/cuda/include/cuda_runtime.h"
stream = 0)
# 374 "/usr/local/cuda/include/cuda_runtime.h"
{
# 375 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 376 "/usr/local/cuda/include/cuda_runtime.h"
}
# 378 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 379 "/usr/local/cuda/include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 380 "/usr/local/cuda/include/cuda_runtime.h"
dst, const T &
# 381 "/usr/local/cuda/include/cuda_runtime.h"
symbol, size_t
# 382 "/usr/local/cuda/include/cuda_runtime.h"
count, size_t
# 383 "/usr/local/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 384 "/usr/local/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 385 "/usr/local/cuda/include/cuda_runtime.h"
stream = 0)
# 387 "/usr/local/cuda/include/cuda_runtime.h"
{
# 388 "/usr/local/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 389 "/usr/local/cuda/include/cuda_runtime.h"
}
# 391 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 392 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, char *
# 393 "/usr/local/cuda/include/cuda_runtime.h"
symbol)
# 395 "/usr/local/cuda/include/cuda_runtime.h"
{
# 396 "/usr/local/cuda/include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 397 "/usr/local/cuda/include/cuda_runtime.h"
}
# 424 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 425 "/usr/local/cuda/include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 426 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, const T &
# 427 "/usr/local/cuda/include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 431 "/usr/local/cuda/include/cuda_runtime.h"
}
# 439 "/usr/local/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 440 "/usr/local/cuda/include/cuda_runtime.h"
size, char *
# 441 "/usr/local/cuda/include/cuda_runtime.h"
symbol)
# 443 "/usr/local/cuda/include/cuda_runtime.h"
{
# 444 "/usr/local/cuda/include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 445 "/usr/local/cuda/include/cuda_runtime.h"
}
# 472 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 473 "/usr/local/cuda/include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 474 "/usr/local/cuda/include/cuda_runtime.h"
size, const T &
# 475 "/usr/local/cuda/include/cuda_runtime.h"
symbol)
# 477 "/usr/local/cuda/include/cuda_runtime.h"
{
# 478 "/usr/local/cuda/include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 479 "/usr/local/cuda/include/cuda_runtime.h"
}
# 521 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 522 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindTexture(size_t *
# 523 "/usr/local/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 524 "/usr/local/cuda/include/cuda_runtime.h"
tex, const void *
# 525 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 526 "/usr/local/cuda/include/cuda_runtime.h"
desc, size_t
# 527 "/usr/local/cuda/include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 529 "/usr/local/cuda/include/cuda_runtime.h"
{
# 530 "/usr/local/cuda/include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 531 "/usr/local/cuda/include/cuda_runtime.h"
}
# 566 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 567 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindTexture(size_t *
# 568 "/usr/local/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 569 "/usr/local/cuda/include/cuda_runtime.h"
tex, const void *
# 570 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, size_t
# 571 "/usr/local/cuda/include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 573 "/usr/local/cuda/include/cuda_runtime.h"
{
# 574 "/usr/local/cuda/include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 575 "/usr/local/cuda/include/cuda_runtime.h"
}
# 622 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 623 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 624 "/usr/local/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 625 "/usr/local/cuda/include/cuda_runtime.h"
tex, const void *
# 626 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 627 "/usr/local/cuda/include/cuda_runtime.h"
desc, size_t
# 628 "/usr/local/cuda/include/cuda_runtime.h"
width, size_t
# 629 "/usr/local/cuda/include/cuda_runtime.h"
height, size_t
# 630 "/usr/local/cuda/include/cuda_runtime.h"
pitch)
# 632 "/usr/local/cuda/include/cuda_runtime.h"
{
# 633 "/usr/local/cuda/include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 634 "/usr/local/cuda/include/cuda_runtime.h"
}
# 680 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 681 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 682 "/usr/local/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 683 "/usr/local/cuda/include/cuda_runtime.h"
tex, const void *
# 684 "/usr/local/cuda/include/cuda_runtime.h"
devPtr, size_t
# 685 "/usr/local/cuda/include/cuda_runtime.h"
width, size_t
# 686 "/usr/local/cuda/include/cuda_runtime.h"
height, size_t
# 687 "/usr/local/cuda/include/cuda_runtime.h"
pitch)
# 689 "/usr/local/cuda/include/cuda_runtime.h"
{
# 690 "/usr/local/cuda/include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 691 "/usr/local/cuda/include/cuda_runtime.h"
}
# 722 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 723 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 724 "/usr/local/cuda/include/cuda_runtime.h"
tex, const cudaArray *
# 725 "/usr/local/cuda/include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 726 "/usr/local/cuda/include/cuda_runtime.h"
desc)
# 728 "/usr/local/cuda/include/cuda_runtime.h"
{
# 729 "/usr/local/cuda/include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 730 "/usr/local/cuda/include/cuda_runtime.h"
}
# 760 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 761 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 762 "/usr/local/cuda/include/cuda_runtime.h"
tex, const cudaArray *
# 763 "/usr/local/cuda/include/cuda_runtime.h"
array)
# 765 "/usr/local/cuda/include/cuda_runtime.h"
{
# 766 "/usr/local/cuda/include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 767 "/usr/local/cuda/include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 769 "/usr/local/cuda/include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 770 "/usr/local/cuda/include/cuda_runtime.h"
}
# 799 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 800 "/usr/local/cuda/include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 801 "/usr/local/cuda/include/cuda_runtime.h"
tex)
# 803 "/usr/local/cuda/include/cuda_runtime.h"
{
# 804 "/usr/local/cuda/include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 805 "/usr/local/cuda/include/cuda_runtime.h"
}
# 839 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 840 "/usr/local/cuda/include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 841 "/usr/local/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 842 "/usr/local/cuda/include/cuda_runtime.h"
tex)
# 844 "/usr/local/cuda/include/cuda_runtime.h"
{
# 845 "/usr/local/cuda/include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 846 "/usr/local/cuda/include/cuda_runtime.h"
}
# 900 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 901 "/usr/local/cuda/include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 902 "/usr/local/cuda/include/cuda_runtime.h"
func, cudaFuncCache
# 903 "/usr/local/cuda/include/cuda_runtime.h"
cacheConfig)
# 905 "/usr/local/cuda/include/cuda_runtime.h"
{
# 906 "/usr/local/cuda/include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 907 "/usr/local/cuda/include/cuda_runtime.h"
}
# 944 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 945 "/usr/local/cuda/include/cuda_runtime.h"
cudaLaunch(T *
# 946 "/usr/local/cuda/include/cuda_runtime.h"
entry)
# 948 "/usr/local/cuda/include/cuda_runtime.h"
{
# 949 "/usr/local/cuda/include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 950 "/usr/local/cuda/include/cuda_runtime.h"
}
# 984 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 985 "/usr/local/cuda/include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 986 "/usr/local/cuda/include/cuda_runtime.h"
attr, T *
# 987 "/usr/local/cuda/include/cuda_runtime.h"
entry)
# 989 "/usr/local/cuda/include/cuda_runtime.h"
{
# 990 "/usr/local/cuda/include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 991 "/usr/local/cuda/include/cuda_runtime.h"
}
# 1013 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1014 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1015 "/usr/local/cuda/include/cuda_runtime.h"
surf, const cudaArray *
# 1016 "/usr/local/cuda/include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1017 "/usr/local/cuda/include/cuda_runtime.h"
desc)
# 1019 "/usr/local/cuda/include/cuda_runtime.h"
{
# 1020 "/usr/local/cuda/include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1021 "/usr/local/cuda/include/cuda_runtime.h"
}
# 1042 "/usr/local/cuda/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1043 "/usr/local/cuda/include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1044 "/usr/local/cuda/include/cuda_runtime.h"
surf, const cudaArray *
# 1045 "/usr/local/cuda/include/cuda_runtime.h"
array)
# 1047 "/usr/local/cuda/include/cuda_runtime.h"
{
# 1048 "/usr/local/cuda/include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1049 "/usr/local/cuda/include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1051 "/usr/local/cuda/include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1052 "/usr/local/cuda/include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t __attribute((__mode__(__HI__))); }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t __attribute((__mode__(__SI__))); }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t __attribute((__mode__(__HI__))); }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t __attribute((__mode__(__SI__))); }
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.5/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[(((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t)];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void * , char * , size_t ); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void * , const char * , size_t ); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void * , __off64_t * , int ); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void * ); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file * , int , void * , _IO_cookie_io_functions_t );
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE * );
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int , _IO_FILE * );
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE * ) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE * ) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE * );
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char * ) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char * , const char * ) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int , const char * , int , const char * ) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char * ) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char * ) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char * , const char * ) throw()
# 225 "/usr/include/stdio.h" 3
 __attribute((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE * );
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE * );
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE * );
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__ , const char *__restrict__ );
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ );
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__ , const char *__restrict__ );
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ );
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int , const char * ) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__ , const char *__restrict__ , _IO_cookie_io_functions_t ) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void * , size_t , const char * ) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char ** , size_t * ) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__ , char *__restrict__ ) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__ , char *__restrict__ , int , size_t ) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__ , char *__restrict__ , size_t ) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE * ) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__ , const char *__restrict__ , ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__ , ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__ , const char *__restrict__ , ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list );
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__ , __gnuc_va_list );
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__ , size_t , const char *__restrict__ , ...) throw()
# 385 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 3, 4)));
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__ , size_t , const char *__restrict__ , __gnuc_va_list ) throw()
# 389 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 3, 0)));
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 398 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 401 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 404 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int , const char *__restrict__ , __gnuc_va_list )
# 416 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int , const char *__restrict__ , ...)
# 418 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__ , const char *__restrict__ , ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__ , ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__ , const char *__restrict__ , ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list )
# 475 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 2, 0)));
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__ , __gnuc_va_list )
# 482 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 1, 0)));
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 487 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 2, 0)));
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE * );
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE * );
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE * );
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE * );
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int , FILE * );
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int , FILE * );
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int );
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int , FILE * );
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int , FILE * );
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int );
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE * );
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int , FILE * );
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__ , int , FILE *__restrict__ );
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char * );
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__ , int , FILE *__restrict__ );
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ );
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ );
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__ , size_t *__restrict__ , FILE *__restrict__ );
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__ , FILE *__restrict__ );
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char * );
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int , FILE * );
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__ , FILE *__restrict__ );
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE * , long , int );
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE * );
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE * );
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE * , __off_t , int );
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE * );
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__ , fpos_t *__restrict__ );
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE * , const fpos_t * );
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE * , __off64_t , int );
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE * );
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__ , fpos64_t *__restrict__ );
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE * , const fpos64_t * );
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE * ) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE * ) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE * ) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE * ) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE * ) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE * ) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char * );
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE * ) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE * ) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char * , const char * );
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE * );
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char * ) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char * );
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__ , const char *__restrict__ , ...) throw()
# 894 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 898 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE * ) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE * ) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE * ) throw();
# 60 "/usr/local/cuda/include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }
# 62 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline float cuCrealf(cuFloatComplex x)
# 63 "/usr/local/cuda/include/cuComplex.h"
{
# 64 "/usr/local/cuda/include/cuComplex.h"
return x.x;
# 65 "/usr/local/cuda/include/cuComplex.h"
} }
# 67 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline float cuCimagf(cuFloatComplex x)
# 68 "/usr/local/cuda/include/cuComplex.h"
{
# 69 "/usr/local/cuda/include/cuComplex.h"
return x.y;
# 70 "/usr/local/cuda/include/cuComplex.h"
} }
# 72 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
# 73 "/usr/local/cuda/include/cuComplex.h"
r, float i)
# 74 "/usr/local/cuda/include/cuComplex.h"
{
# 75 "/usr/local/cuda/include/cuComplex.h"
cuFloatComplex res;
# 76 "/usr/local/cuda/include/cuComplex.h"
(res.x) = r;
# 77 "/usr/local/cuda/include/cuComplex.h"
(res.y) = i;
# 78 "/usr/local/cuda/include/cuComplex.h"
return res;
# 79 "/usr/local/cuda/include/cuComplex.h"
} }
# 81 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
# 82 "/usr/local/cuda/include/cuComplex.h"
{
# 83 "/usr/local/cuda/include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
# 84 "/usr/local/cuda/include/cuComplex.h"
} }
# 85 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
# 86 "/usr/local/cuda/include/cuComplex.h"
y)
# 87 "/usr/local/cuda/include/cuComplex.h"
{
# 88 "/usr/local/cuda/include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));
# 90 "/usr/local/cuda/include/cuComplex.h"
} }
# 92 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
# 93 "/usr/local/cuda/include/cuComplex.h"
y)
# 94 "/usr/local/cuda/include/cuComplex.h"
{
# 95 "/usr/local/cuda/include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));
# 97 "/usr/local/cuda/include/cuComplex.h"
} }
# 104 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
# 105 "/usr/local/cuda/include/cuComplex.h"
y)
# 106 "/usr/local/cuda/include/cuComplex.h"
{
# 107 "/usr/local/cuda/include/cuComplex.h"
cuFloatComplex prod;
# 108 "/usr/local/cuda/include/cuComplex.h"
prod = make_cuFloatComplex((cuCrealf(x) * cuCrealf(y)) - (cuCimagf(x) * cuCimagf(y)), (cuCrealf(x) * cuCimagf(y)) + (cuCimagf(x) * cuCrealf(y)));
# 112 "/usr/local/cuda/include/cuComplex.h"
return prod;
# 113 "/usr/local/cuda/include/cuComplex.h"
} }
# 120 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
# 121 "/usr/local/cuda/include/cuComplex.h"
y)
# 122 "/usr/local/cuda/include/cuComplex.h"
{
# 123 "/usr/local/cuda/include/cuComplex.h"
cuFloatComplex quot;
# 124 "/usr/local/cuda/include/cuComplex.h"
float s = (fabsf(cuCrealf(y)) + fabsf(cuCimagf(y)));
# 125 "/usr/local/cuda/include/cuComplex.h"
float oos = ((1.0F) / s);
# 126 "/usr/local/cuda/include/cuComplex.h"
float ars = (cuCrealf(x) * oos);
# 127 "/usr/local/cuda/include/cuComplex.h"
float ais = (cuCimagf(x) * oos);
# 128 "/usr/local/cuda/include/cuComplex.h"
float brs = (cuCrealf(y) * oos);
# 129 "/usr/local/cuda/include/cuComplex.h"
float bis = (cuCimagf(y) * oos);
# 130 "/usr/local/cuda/include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 131 "/usr/local/cuda/include/cuComplex.h"
oos = ((1.0F) / s);
# 132 "/usr/local/cuda/include/cuComplex.h"
quot = make_cuFloatComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 134 "/usr/local/cuda/include/cuComplex.h"
return quot;
# 135 "/usr/local/cuda/include/cuComplex.h"
} }
# 145 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
# 146 "/usr/local/cuda/include/cuComplex.h"
{
# 147 "/usr/local/cuda/include/cuComplex.h"
float a = cuCrealf(x);
# 148 "/usr/local/cuda/include/cuComplex.h"
float b = cuCimagf(x);
# 149 "/usr/local/cuda/include/cuComplex.h"
float v, w, t;
# 150 "/usr/local/cuda/include/cuComplex.h"
a = fabsf(a);
# 151 "/usr/local/cuda/include/cuComplex.h"
b = fabsf(b);
# 152 "/usr/local/cuda/include/cuComplex.h"
if (a > b) {
# 153 "/usr/local/cuda/include/cuComplex.h"
v = a;
# 154 "/usr/local/cuda/include/cuComplex.h"
w = b;
# 155 "/usr/local/cuda/include/cuComplex.h"
} else {
# 156 "/usr/local/cuda/include/cuComplex.h"
v = b;
# 157 "/usr/local/cuda/include/cuComplex.h"
w = a;
# 158 "/usr/local/cuda/include/cuComplex.h"
}
# 159 "/usr/local/cuda/include/cuComplex.h"
t = (w / v);
# 160 "/usr/local/cuda/include/cuComplex.h"
t = ((1.0F) + (t * t));
# 161 "/usr/local/cuda/include/cuComplex.h"
t = (v * sqrtf(t));
# 162 "/usr/local/cuda/include/cuComplex.h"
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
# 163 "/usr/local/cuda/include/cuComplex.h"
t = (v + w);
# 164 "/usr/local/cuda/include/cuComplex.h"
}
# 165 "/usr/local/cuda/include/cuComplex.h"
return t;
# 166 "/usr/local/cuda/include/cuComplex.h"
} }
# 169 "/usr/local/cuda/include/cuComplex.h"
extern "C" { typedef double2 cuDoubleComplex; }
# 171 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline double cuCreal(cuDoubleComplex x)
# 172 "/usr/local/cuda/include/cuComplex.h"
{
# 173 "/usr/local/cuda/include/cuComplex.h"
return x.x;
# 174 "/usr/local/cuda/include/cuComplex.h"
} }
# 176 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline double cuCimag(cuDoubleComplex x)
# 177 "/usr/local/cuda/include/cuComplex.h"
{
# 178 "/usr/local/cuda/include/cuComplex.h"
return x.y;
# 179 "/usr/local/cuda/include/cuComplex.h"
} }
# 181 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
# 182 "/usr/local/cuda/include/cuComplex.h"
r, double i)
# 183 "/usr/local/cuda/include/cuComplex.h"
{
# 184 "/usr/local/cuda/include/cuComplex.h"
cuDoubleComplex res;
# 185 "/usr/local/cuda/include/cuComplex.h"
(res.x) = r;
# 186 "/usr/local/cuda/include/cuComplex.h"
(res.y) = i;
# 187 "/usr/local/cuda/include/cuComplex.h"
return res;
# 188 "/usr/local/cuda/include/cuComplex.h"
} }
# 190 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
# 191 "/usr/local/cuda/include/cuComplex.h"
{
# 192 "/usr/local/cuda/include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
# 193 "/usr/local/cuda/include/cuComplex.h"
} }
# 195 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
# 196 "/usr/local/cuda/include/cuComplex.h"
y)
# 197 "/usr/local/cuda/include/cuComplex.h"
{
# 198 "/usr/local/cuda/include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));
# 200 "/usr/local/cuda/include/cuComplex.h"
} }
# 202 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
# 203 "/usr/local/cuda/include/cuComplex.h"
y)
# 204 "/usr/local/cuda/include/cuComplex.h"
{
# 205 "/usr/local/cuda/include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));
# 207 "/usr/local/cuda/include/cuComplex.h"
} }
# 214 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
# 215 "/usr/local/cuda/include/cuComplex.h"
y)
# 216 "/usr/local/cuda/include/cuComplex.h"
{
# 217 "/usr/local/cuda/include/cuComplex.h"
cuDoubleComplex prod;
# 218 "/usr/local/cuda/include/cuComplex.h"
prod = make_cuDoubleComplex((cuCreal(x) * cuCreal(y)) - (cuCimag(x) * cuCimag(y)), (cuCreal(x) * cuCimag(y)) + (cuCimag(x) * cuCreal(y)));
# 222 "/usr/local/cuda/include/cuComplex.h"
return prod;
# 223 "/usr/local/cuda/include/cuComplex.h"
} }
# 230 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
# 231 "/usr/local/cuda/include/cuComplex.h"
y)
# 232 "/usr/local/cuda/include/cuComplex.h"
{
# 233 "/usr/local/cuda/include/cuComplex.h"
cuDoubleComplex quot;
# 234 "/usr/local/cuda/include/cuComplex.h"
double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
# 235 "/usr/local/cuda/include/cuComplex.h"
double oos = ((1.0) / s);
# 236 "/usr/local/cuda/include/cuComplex.h"
double ars = (cuCreal(x) * oos);
# 237 "/usr/local/cuda/include/cuComplex.h"
double ais = (cuCimag(x) * oos);
# 238 "/usr/local/cuda/include/cuComplex.h"
double brs = (cuCreal(y) * oos);
# 239 "/usr/local/cuda/include/cuComplex.h"
double bis = (cuCimag(y) * oos);
# 240 "/usr/local/cuda/include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 241 "/usr/local/cuda/include/cuComplex.h"
oos = ((1.0) / s);
# 242 "/usr/local/cuda/include/cuComplex.h"
quot = make_cuDoubleComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 244 "/usr/local/cuda/include/cuComplex.h"
return quot;
# 245 "/usr/local/cuda/include/cuComplex.h"
} }
# 253 "/usr/local/cuda/include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
# 254 "/usr/local/cuda/include/cuComplex.h"
{
# 255 "/usr/local/cuda/include/cuComplex.h"
double a = cuCreal(x);
# 256 "/usr/local/cuda/include/cuComplex.h"
double b = cuCimag(x);
# 257 "/usr/local/cuda/include/cuComplex.h"
double v, w, t;
# 258 "/usr/local/cuda/include/cuComplex.h"
a = fabs(a);
# 259 "/usr/local/cuda/include/cuComplex.h"
b = fabs(b);
# 260 "/usr/local/cuda/include/cuComplex.h"
if (a > b) {
# 261 "/usr/local/cuda/include/cuComplex.h"
v = a;
# 262 "/usr/local/cuda/include/cuComplex.h"
w = b;
# 263 "/usr/local/cuda/include/cuComplex.h"
} else {
# 264 "/usr/local/cuda/include/cuComplex.h"
v = b;
# 265 "/usr/local/cuda/include/cuComplex.h"
w = a;
# 266 "/usr/local/cuda/include/cuComplex.h"
}
# 267 "/usr/local/cuda/include/cuComplex.h"
t = (w / v);
# 268 "/usr/local/cuda/include/cuComplex.h"
t = ((1.0) + (t * t));
# 269 "/usr/local/cuda/include/cuComplex.h"
t = (v * sqrt(t));
# 270 "/usr/local/cuda/include/cuComplex.h"
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
# 271 "/usr/local/cuda/include/cuComplex.h"
{
# 272 "/usr/local/cuda/include/cuComplex.h"
t = (v + w);
# 273 "/usr/local/cuda/include/cuComplex.h"
}
# 274 "/usr/local/cuda/include/cuComplex.h"
return t;
# 275 "/usr/local/cuda/include/cuComplex.h"
} }
# 282 "/usr/local/cuda/include/cuComplex.h"
typedef cuFloatComplex cuComplex;
# 283 "/usr/local/cuda/include/cuComplex.h"
static inline cuComplex make_cuComplex(float x, float
# 284 "/usr/local/cuda/include/cuComplex.h"
y)
# 285 "/usr/local/cuda/include/cuComplex.h"
{
# 286 "/usr/local/cuda/include/cuComplex.h"
return make_cuFloatComplex(x, y);
# 287 "/usr/local/cuda/include/cuComplex.h"
}
# 290 "/usr/local/cuda/include/cuComplex.h"
static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
# 291 "/usr/local/cuda/include/cuComplex.h"
c)
# 292 "/usr/local/cuda/include/cuComplex.h"
{
# 293 "/usr/local/cuda/include/cuComplex.h"
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
# 294 "/usr/local/cuda/include/cuComplex.h"
}
# 296 "/usr/local/cuda/include/cuComplex.h"
static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
# 297 "/usr/local/cuda/include/cuComplex.h"
c)
# 298 "/usr/local/cuda/include/cuComplex.h"
{
# 299 "/usr/local/cuda/include/cuComplex.h"
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
# 300 "/usr/local/cuda/include/cuComplex.h"
}
# 303 "/usr/local/cuda/include/cuComplex.h"
static inline cuComplex cuCfmaf(cuComplex x, cuComplex y, cuComplex d)
# 304 "/usr/local/cuda/include/cuComplex.h"
{
# 305 "/usr/local/cuda/include/cuComplex.h"
float real_res;
# 306 "/usr/local/cuda/include/cuComplex.h"
float imag_res;
# 308 "/usr/local/cuda/include/cuComplex.h"
real_res = ((cuCrealf(x) * cuCrealf(y)) + cuCrealf(d));
# 309 "/usr/local/cuda/include/cuComplex.h"
imag_res = ((cuCrealf(x) * cuCimagf(y)) + cuCimagf(d));
# 311 "/usr/local/cuda/include/cuComplex.h"
real_res = ((-(cuCimagf(x) * cuCimagf(y))) + real_res);
# 312 "/usr/local/cuda/include/cuComplex.h"
imag_res = ((cuCimagf(x) * cuCrealf(y)) + imag_res);
# 314 "/usr/local/cuda/include/cuComplex.h"
return make_cuComplex(real_res, imag_res);
# 315 "/usr/local/cuda/include/cuComplex.h"
}
# 317 "/usr/local/cuda/include/cuComplex.h"
static inline cuDoubleComplex cuCfma(cuDoubleComplex x, cuDoubleComplex y, cuDoubleComplex d)
# 318 "/usr/local/cuda/include/cuComplex.h"
{
# 319 "/usr/local/cuda/include/cuComplex.h"
double real_res;
# 320 "/usr/local/cuda/include/cuComplex.h"
double imag_res;
# 322 "/usr/local/cuda/include/cuComplex.h"
real_res = ((cuCreal(x) * cuCreal(y)) + cuCreal(d));
# 323 "/usr/local/cuda/include/cuComplex.h"
imag_res = ((cuCreal(x) * cuCimag(y)) + cuCimag(d));
# 325 "/usr/local/cuda/include/cuComplex.h"
real_res = ((-(cuCimag(x) * cuCimag(y))) + real_res);
# 326 "/usr/local/cuda/include/cuComplex.h"
imag_res = ((cuCimag(x) * cuCreal(y)) + imag_res);
# 328 "/usr/local/cuda/include/cuComplex.h"
return make_cuDoubleComplex(real_res, imag_res);
# 329 "/usr/local/cuda/include/cuComplex.h"
}
# 86 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef
# 75 "/usr/local/cuda/include/cufft.h"
enum cufftResult_t {
# 76 "/usr/local/cuda/include/cufft.h"
CUFFT_SUCCESS,
# 77 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_PLAN,
# 78 "/usr/local/cuda/include/cufft.h"
CUFFT_ALLOC_FAILED,
# 79 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_TYPE,
# 80 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_VALUE,
# 81 "/usr/local/cuda/include/cufft.h"
CUFFT_INTERNAL_ERROR,
# 82 "/usr/local/cuda/include/cufft.h"
CUFFT_EXEC_FAILED,
# 83 "/usr/local/cuda/include/cufft.h"
CUFFT_SETUP_FAILED,
# 84 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_SIZE,
# 85 "/usr/local/cuda/include/cufft.h"
CUFFT_UNALIGNED_DATA
# 86 "/usr/local/cuda/include/cufft.h"
} cufftResult; }
# 91 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef unsigned cufftHandle; }
# 95 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef float cufftReal; }
# 96 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef double cufftDoubleReal; }
# 101 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef cuComplex cufftComplex; }
# 102 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef cuDoubleComplex cufftDoubleComplex; }
# 116 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef
# 109 "/usr/local/cuda/include/cufft.h"
enum cufftType_t {
# 110 "/usr/local/cuda/include/cufft.h"
CUFFT_R2C = 42,
# 111 "/usr/local/cuda/include/cufft.h"
CUFFT_C2R = 44,
# 112 "/usr/local/cuda/include/cufft.h"
CUFFT_C2C = 41,
# 113 "/usr/local/cuda/include/cufft.h"
CUFFT_D2Z = 106,
# 114 "/usr/local/cuda/include/cufft.h"
CUFFT_Z2D = 108,
# 115 "/usr/local/cuda/include/cufft.h"
CUFFT_Z2Z = 105
# 116 "/usr/local/cuda/include/cufft.h"
} cufftType; }
# 145 "/usr/local/cuda/include/cufft.h"
extern "C" { typedef
# 140 "/usr/local/cuda/include/cufft.h"
enum cufftCompatibility_t {
# 141 "/usr/local/cuda/include/cufft.h"
CUFFT_COMPATIBILITY_NATIVE,
# 142 "/usr/local/cuda/include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_PADDING,
# 143 "/usr/local/cuda/include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ASYMMETRIC,
# 144 "/usr/local/cuda/include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ALL
# 145 "/usr/local/cuda/include/cufft.h"
} cufftCompatibility; }
# 149 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftPlan1d(cufftHandle * , int , cufftType , int );
# 154 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftPlan2d(cufftHandle * , int , int , cufftType );
# 158 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftPlan3d(cufftHandle * , int , int , int , cufftType );
# 162 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftPlanMany(cufftHandle * , int , int * , int * , int , int , int * , int , int , cufftType , int );
# 170 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftDestroy(cufftHandle );
# 172 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftExecC2C(cufftHandle , cufftComplex * , cufftComplex * , int );
# 177 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftExecR2C(cufftHandle , cufftReal * , cufftComplex * );
# 181 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftExecC2R(cufftHandle , cufftComplex * , cufftReal * );
# 185 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftExecZ2Z(cufftHandle , cufftDoubleComplex * , cufftDoubleComplex * , int );
# 190 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftExecD2Z(cufftHandle , cufftDoubleReal * , cufftDoubleComplex * );
# 194 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftExecZ2D(cufftHandle , cufftDoubleComplex * , cufftDoubleReal * );
# 198 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftSetStream(cufftHandle , cudaStream_t );
# 201 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftSetCompatibilityMode(cufftHandle , cufftCompatibility );
# 204 "/usr/local/cuda/include/cufft.h"
extern "C" cufftResult cufftGetVersion(int * );
# 60 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
enum CUTBoolean {
# 62 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
CUTFalse,
# 63 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
CUTTrue
# 64 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
};
# 72 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" void cutFree(void * );
# 90 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" void cutCheckBankAccess(unsigned , unsigned , unsigned , unsigned , unsigned , unsigned , const char * , const int , const char * , const int );
# 103 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" char *cutFindFilePath(const char * , const char * );
# 118 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char * , float ** , unsigned * , bool = false);
# 134 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char * , double ** , unsigned * , bool = false);
# 150 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char * , int ** , unsigned * , bool = false);
# 165 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char * , unsigned ** , unsigned * , bool = false);
# 181 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char * , char ** , unsigned * , bool = false);
# 197 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char * , unsigned char ** , unsigned * , bool = false);
# 211 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char * , const float * , unsigned , const float , bool = false);
# 225 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char * , const float * , unsigned , const double , bool = false);
# 237 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char * , const int * , unsigned , bool = false);
# 249 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char * , const unsigned * , unsigned , bool = false);
# 261 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char * , const char * , unsigned , bool = false);
# 273 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char * , const unsigned char * , unsigned , bool = false);
# 289 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char * , unsigned char ** , unsigned * , unsigned * );
# 302 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char * , unsigned char ** , unsigned * , unsigned * );
# 316 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char * , unsigned char ** , unsigned * , unsigned * );
# 332 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char * , unsigned ** , unsigned * , unsigned * );
# 348 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char * , unsigned short ** , unsigned * , unsigned * );
# 363 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char * , float ** , unsigned * , unsigned * );
# 375 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char * , unsigned char * , unsigned , unsigned );
# 387 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char * , unsigned char * , unsigned , unsigned );
# 400 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char * , unsigned char * , unsigned , unsigned );
# 412 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char * , unsigned * , unsigned , unsigned );
# 424 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char * , unsigned short * , unsigned , unsigned );
# 436 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char * , float * , unsigned , unsigned );
# 457 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int , const char ** , const char * );
# 471 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int , const char ** , const char * , int * );
# 485 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int , const char ** , const char * , float * );
# 499 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int , const char ** , const char * , char ** );
# 514 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int , const char ** , const char * , char ** , unsigned * );
# 528 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int , const char * , const int );
# 540 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutComparef(const float * , const float * , const unsigned );
# 553 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutComparei(const int * , const int * , const unsigned );
# 567 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned * , const unsigned * , const unsigned , const float , const float );
# 580 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char * , const unsigned char * , const unsigned );
# 595 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char * , const unsigned char * , const unsigned , const float , const float );
# 609 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char * , const unsigned char * , const unsigned , const float );
# 623 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutComparefe(const float * , const float * , const unsigned , const float );
# 638 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutComparefet(const float * , const float * , const unsigned , const float , const float );
# 653 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float * , const float * , const unsigned , const float );
# 668 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char * , const char * , const float , const float , bool = false);
# 681 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned * );
# 690 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned );
# 698 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned );
# 706 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned );
# 714 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned );
# 723 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" float cutGetTimerValue(const unsigned );
# 734 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned );
# 56 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef struct impl_info_tag *MEX_impl_info;
# 86 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned char uchar_T;
# 87 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned short ushort_T;
# 88 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned long ulong_T;
# 210 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef signed char int8_T;
# 225 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned char uint8_T;
# 241 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef short int16_T;
# 257 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned short uint16_T;
# 273 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef int int32_T;
# 289 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned uint32_T;
# 350 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef float real32_T;
# 364 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef double real64_T;
# 408 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef long int64_T;
# 444 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned long uint64_T;
# 500 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef real64_T real_T;
# 509 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef real_T time_T;
# 521 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned char boolean_T;
# 527 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef char char_T;
# 533 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef int int_T;
# 539 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned uint_T;
# 545 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef unsigned char byte_T;
# 557 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 555 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 556 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
real32_T re, im;
# 557 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} creal32_T;
# 566 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 564 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 565 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
real64_T re, im;
# 566 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} creal64_T;
# 575 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 573 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 574 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
real_T re, im;
# 575 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} creal_T;
# 586 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 584 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 585 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
int8_T re, im;
# 586 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cint8_T;
# 595 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 593 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 594 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
uint8_T re, im;
# 595 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cuint8_T;
# 604 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 602 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 603 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
int16_T re, im;
# 604 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cint16_T;
# 613 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 611 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 612 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
uint16_T re, im;
# 613 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cuint16_T;
# 622 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 620 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 621 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
int32_T re, im;
# 622 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cint32_T;
# 631 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 629 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 630 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
uint32_T re, im;
# 631 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cuint32_T;
# 640 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 638 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 639 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
int64_T re, im;
# 640 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cint64_T;
# 649 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef
# 647 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
struct {
# 648 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
uint64_T re, im;
# 649 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
} cuint64_T;
# 796 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef size_t mwSize;
# 797 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef size_t mwIndex;
# 798 "/usr/local/MATLAB/R2011a/extern/include/tmwtypes.h"
typedef ptrdiff_t mwSignedIndex;
# 298 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
typedef struct mxArray_tag mxArray;
# 303 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
typedef void (*mxFunctionPtr)(int , mxArray * [], int , mxArray * []);
# 313 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
typedef bool mxLogical;
# 326 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
typedef unsigned short char16_t;
# 335 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
typedef char16_t mxChar;
# 373 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
typedef
# 345 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
enum {
# 346 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxUNKNOWN_CLASS,
# 347 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxCELL_CLASS,
# 348 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxSTRUCT_CLASS,
# 349 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxLOGICAL_CLASS,
# 350 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxCHAR_CLASS,
# 351 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxVOID_CLASS,
# 352 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxDOUBLE_CLASS,
# 353 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxSINGLE_CLASS,
# 354 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxINT8_CLASS,
# 355 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxUINT8_CLASS,
# 356 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxINT16_CLASS,
# 357 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxUINT16_CLASS,
# 358 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxINT32_CLASS,
# 359 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxUINT32_CLASS,
# 360 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxINT64_CLASS,
# 361 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxUINT64_CLASS,
# 362 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxFUNCTION_CLASS,
# 363 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxOPAQUE_CLASS,
# 364 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxOBJECT_CLASS,
# 366 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxINDEX_CLASS = 15,
# 371 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxSPARSE_CLASS = 5
# 373 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
} mxClassID;
# 383 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
typedef
# 379 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
enum {
# 380 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxREAL,
# 381 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
mxCOMPLEX
# 383 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
} mxComplexity;
# 394 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void *mxMalloc(size_t );
# 402 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void *mxCalloc(size_t , size_t );
# 411 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxFree(void * );
# 417 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void *mxRealloc(void * , size_t );
# 423 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxClassID mxGetClassID(const mxArray * );
# 429 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void *mxGetData(const mxArray * );
# 437 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetData(mxArray * , void * );
# 447 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsNumeric(const mxArray * );
# 453 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsCell(const mxArray * );
# 459 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsLogical(const mxArray * );
# 465 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsChar(const mxArray * );
# 471 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsStruct(const mxArray * );
# 477 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsOpaque(const mxArray * );
# 483 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsFunctionHandle(const mxArray * );
# 491 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsObject(const mxArray * );
# 499 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void *mxGetImagData(const mxArray * );
# 507 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetImagData(mxArray * , void * );
# 516 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsComplex(const mxArray * );
# 522 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsSparse(const mxArray * );
# 529 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsDouble(const mxArray * );
# 536 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsSingle(const mxArray * );
# 543 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsInt8(const mxArray * );
# 550 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsUint8(const mxArray * );
# 557 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsInt16(const mxArray * );
# 564 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsUint16(const mxArray * );
# 571 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsInt32(const mxArray * );
# 578 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsUint32(const mxArray * );
# 585 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsInt64(const mxArray * );
# 592 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsUint64(const mxArray * );
# 598 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mwSize mxGetNumberOfDimensions(const mxArray * );
# 604 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" const mwSize *mxGetDimensions(const mxArray * );
# 610 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" size_t mxGetNumberOfElements(const mxArray * );
# 618 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" double *mxGetPr(const mxArray * );
# 626 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetPr(mxArray * , double * );
# 635 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" double *mxGetPi(const mxArray * );
# 643 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetPi(mxArray * , double * );
# 652 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxChar *mxGetChars(const mxArray * );
# 662 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" int mxGetUserBits(const mxArray * );
# 672 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetUserBits(mxArray * , int );
# 681 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" double mxGetScalar(const mxArray * );
# 696 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsFromGlobalWS(const mxArray * );
# 702 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetFromGlobalWS(mxArray * , bool );
# 708 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" size_t mxGetM(const mxArray * );
# 714 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetM(mxArray * , mwSize );
# 720 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" size_t mxGetN(const mxArray * );
# 726 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsEmpty(const mxArray * );
# 734 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mwIndex *mxGetIr(const mxArray * );
# 740 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetIr(mxArray * , mwIndex * );
# 746 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mwIndex *mxGetJc(const mxArray * );
# 752 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetJc(mxArray * , mwIndex * );
# 758 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mwSize mxGetNzmax(const mxArray * );
# 764 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetNzmax(mxArray * , mwSize );
# 770 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" size_t mxGetElementSize(const mxArray * );
# 777 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mwIndex mxCalcSingleSubscript(const mxArray * , mwSize , const mwIndex * );
# 784 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" int mxGetNumberOfFields(const mxArray * );
# 792 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxGetCell(const mxArray * , mwIndex );
# 798 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetCell(mxArray * , mwIndex , mxArray * );
# 804 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" const char *mxGetFieldNameByNumber(const mxArray * , int );
# 810 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" int mxGetFieldNumber(const mxArray * , const char * );
# 817 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxGetFieldByNumber(const mxArray * , mwIndex , int );
# 823 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetFieldByNumber(mxArray * , mwIndex , int , mxArray * );
# 831 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxGetField(const mxArray * , mwIndex , const char * );
# 838 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetField(mxArray * , mwIndex , const char * , mxArray * );
# 848 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxGetProperty(const mxArray * , const mwIndex , const char * );
# 856 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetProperty(mxArray * , mwIndex , const char * , const mxArray * );
# 862 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" const char *mxGetClassName(const mxArray * );
# 868 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsClass(const mxArray * , const char * );
# 880 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateNumericMatrix(mwSize , mwSize , mxClassID , mxComplexity );
# 889 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxSetN(mxArray * , mwSize );
# 896 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" int mxSetDimensions(mxArray * , const mwSize * , mwSize );
# 902 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxDestroyArray(mxArray * );
# 911 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateNumericArray(mwSize , const mwSize * , mxClassID , mxComplexity );
# 918 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateCharArray(mwSize , const mwSize * );
# 925 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateDoubleMatrix(mwSize , mwSize , mxComplexity );
# 931 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxLogical *mxGetLogicals(const mxArray * );
# 937 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateLogicalArray(mwSize , const mwSize * );
# 947 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateLogicalMatrix(mwSize , mwSize );
# 956 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateLogicalScalar(bool );
# 962 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsLogicalScalar(const mxArray * );
# 968 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsLogicalScalarTrue(const mxArray * );
# 975 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateDoubleScalar(double );
# 981 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateSparse(mwSize , mwSize , mwSize , mxComplexity );
# 987 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateSparseLogicalMatrix(mwSize , mwSize , mwSize );
# 995 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxGetNChars(const mxArray * , char * , mwSize );
# 1006 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" int mxGetString(const mxArray * , char * , mwSize );
# 1014 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" char *mxArrayToString(const mxArray * );
# 1022 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateStringFromNChars(const char * , mwSize );
# 1029 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateString(const char * );
# 1035 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateCharMatrixFromStrings(mwSize , const char ** );
# 1042 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateCellMatrix(mwSize , mwSize );
# 1049 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateCellArray(mwSize , const mwSize * );
# 1056 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateStructMatrix(size_t , size_t , int , const char ** );
# 1063 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxCreateStructArray(mwSize , const mwSize * , int , const char ** );
# 1070 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" mxArray *mxDuplicateArray(const mxArray * );
# 1078 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" int mxSetClassName(mxArray * , const char * );
# 1085 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" int mxAddField(mxArray * , const char * );
# 1092 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" void mxRemoveField(mxArray * , int );
# 1098 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" double mxGetEps();
# 1104 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" double mxGetInf();
# 1110 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" double mxGetNaN();
# 1127 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsFinite(double );
# 1135 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsInf(double );
# 1143 "/usr/local/MATLAB/R2011a/extern/include/matrix.h"
extern "C" bool mxIsNaN(double );
# 71 "/usr/include/assert.h" 3
extern "C" void __assert_fail(const char * , const char * , unsigned , const char * ) throw()
# 73 "/usr/include/assert.h" 3
 __attribute((__noreturn__));
# 76 "/usr/include/assert.h" 3
extern "C" void __assert_perror_fail(int , const char * , unsigned , const char * ) throw()
# 79 "/usr/include/assert.h" 3
 __attribute((__noreturn__));
# 84 "/usr/include/assert.h" 3
extern "C" void __assert(const char * , const char * , int ) throw()
# 85 "/usr/include/assert.h" 3
 __attribute((__noreturn__));
# 64 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" { typedef void (*mex_exit_fn)(void); }
# 73 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef
# 69 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
struct mexGlobalTableEntry_Tag {
# 71 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
const char *name;
# 72 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
mxArray **variable;
# 73 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
} mexGlobalTableEntry, *mexGlobalTable;
# 88 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef
# 82 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
struct mexFunctionTableEntry_tag {
# 83 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
const char *name;
# 84 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
mxFunctionPtr f;
# 85 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
int nargin;
# 86 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
int nargout;
# 87 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
struct _mexLocalFunctionTable *local_function_table;
# 88 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
} mexFunctionTableEntry, *mexFunctionTable;
# 93 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef
# 90 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
struct _mexLocalFunctionTable {
# 91 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
size_t length;
# 92 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
mexFunctionTable entries;
# 93 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
} _mexLocalFunctionTable, *mexLocalFunctionTable;
# 98 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef
# 95 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
struct {
# 96 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
void (*initialize)(void);
# 97 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
void (*terminate)(void);
# 98 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
} _mexInitTermTableEntry, *mexInitTermTableEntry;
# 112 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef
# 102 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
struct {
# 103 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
int version;
# 104 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
int file_function_table_length;
# 105 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
mexFunctionTable file_function_table;
# 106 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
int global_variable_table_length;
# 107 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
mexGlobalTable global_variable_table;
# 108 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
int npaths;
# 109 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
const char **paths;
# 110 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
int init_term_table_length;
# 111 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
mexInitTermTableEntry init_term_table;
# 112 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
} _mex_information, *mex_information;
# 114 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef mex_information (*fn_mex_file)(void);
# 116 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef void (*fn_clean_up_after_error)(void);
# 117 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr );
# 119 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef void (*fn_mex_enter_mex_library)(mex_information );
# 120 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef fn_mex_enter_mex_library fn_mex_exit_mex_library;
# 122 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void);
# 123 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable);
# 145 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexFunction(int , mxArray * [], int , const mxArray * []);
# 168 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexErrMsgTxt(const char * );
# 177 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexErrMsgIdAndTxt(const char * , const char * , ...);
# 188 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexWarnMsgTxt(const char * );
# 199 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexWarnMsgIdAndTxt(const char * , const char * , ...);
# 209 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" int mexPrintf(const char * , ...);
# 224 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexMakeArrayPersistent(mxArray * );
# 234 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexMakeMemoryPersistent(void * );
# 240 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" int mexSet(double , const char * , mxArray * );
# 244 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" const mxArray *mexGet(double , const char * );
# 250 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" int mexCallMATLAB(int , mxArray * [], int , mxArray * [], const char * );
# 262 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" mxArray *mexCallMATLABWithTrap(int , mxArray * [], int , mxArray * [], const char * );
# 276 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexSetTrapFlag(int );
# 283 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexPrintAssertion(const char * , const char * , int , const char * );
# 293 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" bool mexIsGlobal(const mxArray * );
# 300 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" int mexPutVariable(const char * , const char * , const mxArray * );
# 311 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" const mxArray *mexGetVariablePtr(const char * , const char * );
# 321 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" mxArray *mexGetVariable(const char * , const char * );
# 330 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexLock();
# 336 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" void mexUnlock();
# 342 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" bool mexIsLocked();
# 348 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" const char *mexFunctionName();
# 355 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" int mexEvalString(const char * );
# 364 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" mxArray *mexEvalStringWithTrap(const char * );
# 372 "/usr/local/MATLAB/R2011a/extern/include/mex.h"
extern "C" int mexAtExit(mex_exit_fn );
# 149 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef unsigned long long CUdeviceptr; }
# 156 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef int CUdevice; }
# 157 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 158 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 159 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 160 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 161 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 162 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef struct CUsurfref_st *CUsurfref; }
# 163 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef CUevent_st *CUevent; }
# 164 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef CUstream_st *CUstream; }
# 165 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef struct CUgraphicsResource_st *CUgraphicsResource; }
# 169 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 167 "/usr/local/cuda/include/cuda.h"
struct CUuuid_st {
# 168 "/usr/local/cuda/include/cuda.h"
char bytes[16];
# 169 "/usr/local/cuda/include/cuda.h"
} CUuuid; }
# 184 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 174 "/usr/local/cuda/include/cuda.h"
enum CUctx_flags_enum {
# 175 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_AUTO,
# 176 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_SPIN,
# 177 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_YIELD,
# 178 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_BLOCKING_SYNC = 4,
# 179 "/usr/local/cuda/include/cuda.h"
CU_CTX_BLOCKING_SYNC = 4,
# 180 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_MASK = 7,
# 181 "/usr/local/cuda/include/cuda.h"
CU_CTX_MAP_HOST,
# 182 "/usr/local/cuda/include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 183 "/usr/local/cuda/include/cuda.h"
CU_CTX_FLAGS_MASK = 31
# 184 "/usr/local/cuda/include/cuda.h"
} CUctx_flags; }
# 193 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 189 "/usr/local/cuda/include/cuda.h"
enum CUevent_flags_enum {
# 190 "/usr/local/cuda/include/cuda.h"
CU_EVENT_DEFAULT,
# 191 "/usr/local/cuda/include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 192 "/usr/local/cuda/include/cuda.h"
CU_EVENT_DISABLE_TIMING
# 193 "/usr/local/cuda/include/cuda.h"
} CUevent_flags; }
# 207 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 198 "/usr/local/cuda/include/cuda.h"
enum CUarray_format_enum {
# 199 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 200 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 201 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 202 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 203 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 204 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 205 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 206 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 207 "/usr/local/cuda/include/cuda.h"
} CUarray_format; }
# 217 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 212 "/usr/local/cuda/include/cuda.h"
enum CUaddress_mode_enum {
# 213 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 214 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 215 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 216 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER
# 217 "/usr/local/cuda/include/cuda.h"
} CUaddress_mode; }
# 225 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 222 "/usr/local/cuda/include/cuda.h"
enum CUfilter_mode_enum {
# 223 "/usr/local/cuda/include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 224 "/usr/local/cuda/include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 225 "/usr/local/cuda/include/cuda.h"
} CUfilter_mode; }
# 280 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 230 "/usr/local/cuda/include/cuda.h"
enum CUdevice_attribute_enum {
# 231 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 232 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 233 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 234 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 235 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 236 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 237 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 238 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 239 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 240 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 241 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 242 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 243 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 244 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 245 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 246 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 247 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 248 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 249 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 250 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 251 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 252 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 253 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 254 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 255 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 256 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 257 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 258 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 259 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH,
# 260 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT,
# 261 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS,
# 262 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27,
# 263 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 264 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 265 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 266 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 267 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 268 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 269 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 270 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER,
# 271 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE,
# 272 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH,
# 273 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE,
# 274 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR,
# 275 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT,
# 276 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING,
# 277 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH,
# 278 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS,
# 279 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID = 50
# 280 "/usr/local/cuda/include/cuda.h"
} CUdevice_attribute; }
# 296 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 285 "/usr/local/cuda/include/cuda.h"
struct CUdevprop_st {
# 286 "/usr/local/cuda/include/cuda.h"
int maxThreadsPerBlock;
# 287 "/usr/local/cuda/include/cuda.h"
int maxThreadsDim[3];
# 288 "/usr/local/cuda/include/cuda.h"
int maxGridSize[3];
# 289 "/usr/local/cuda/include/cuda.h"
int sharedMemPerBlock;
# 290 "/usr/local/cuda/include/cuda.h"
int totalConstantMemory;
# 291 "/usr/local/cuda/include/cuda.h"
int SIMDWidth;
# 292 "/usr/local/cuda/include/cuda.h"
int memPitch;
# 293 "/usr/local/cuda/include/cuda.h"
int regsPerBlock;
# 294 "/usr/local/cuda/include/cuda.h"
int clockRate;
# 295 "/usr/local/cuda/include/cuda.h"
int textureAlign;
# 296 "/usr/local/cuda/include/cuda.h"
} CUdevprop; }
# 306 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 301 "/usr/local/cuda/include/cuda.h"
enum CUpointer_attribute_enum {
# 302 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_CONTEXT = 1,
# 303 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_MEMORY_TYPE,
# 304 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_DEVICE_POINTER,
# 305 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_HOST_POINTER
# 306 "/usr/local/cuda/include/cuda.h"
} CUpointer_attribute; }
# 361 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 311 "/usr/local/cuda/include/cuda.h"
enum CUfunction_attribute_enum {
# 317 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 324 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 330 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 335 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 340 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 349 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 358 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 360 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX
# 361 "/usr/local/cuda/include/cuda.h"
} CUfunction_attribute; }
# 370 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 366 "/usr/local/cuda/include/cuda.h"
enum CUfunc_cache_enum {
# 367 "/usr/local/cuda/include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 368 "/usr/local/cuda/include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 369 "/usr/local/cuda/include/cuda.h"
CU_FUNC_CACHE_PREFER_L1
# 370 "/usr/local/cuda/include/cuda.h"
} CUfunc_cache; }
# 380 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 375 "/usr/local/cuda/include/cuda.h"
enum CUmemorytype_enum {
# 376 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 377 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 378 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_ARRAY,
# 379 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_UNIFIED
# 380 "/usr/local/cuda/include/cuda.h"
} CUmemorytype; }
# 390 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 385 "/usr/local/cuda/include/cuda.h"
enum CUcomputemode_enum {
# 386 "/usr/local/cuda/include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 387 "/usr/local/cuda/include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE,
# 388 "/usr/local/cuda/include/cuda.h"
CU_COMPUTEMODE_PROHIBITED,
# 389 "/usr/local/cuda/include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE_PROCESS
# 390 "/usr/local/cuda/include/cuda.h"
} CUcomputemode; }
# 482 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 395 "/usr/local/cuda/include/cuda.h"
enum CUjit_option_enum {
# 401 "/usr/local/cuda/include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 414 "/usr/local/cuda/include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 421 "/usr/local/cuda/include/cuda.h"
CU_JIT_WALL_TIME,
# 429 "/usr/local/cuda/include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 437 "/usr/local/cuda/include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 445 "/usr/local/cuda/include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 453 "/usr/local/cuda/include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 460 "/usr/local/cuda/include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 467 "/usr/local/cuda/include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 473 "/usr/local/cuda/include/cuda.h"
CU_JIT_TARGET,
# 480 "/usr/local/cuda/include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 482 "/usr/local/cuda/include/cuda.h"
} CUjit_option; }
# 495 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 487 "/usr/local/cuda/include/cuda.h"
enum CUjit_target_enum {
# 489 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_10,
# 490 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_11,
# 491 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_12,
# 492 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_13,
# 493 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_20,
# 494 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_21
# 495 "/usr/local/cuda/include/cuda.h"
} CUjit_target; }
# 506 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 500 "/usr/local/cuda/include/cuda.h"
enum CUjit_fallback_enum {
# 502 "/usr/local/cuda/include/cuda.h"
CU_PREFER_PTX,
# 504 "/usr/local/cuda/include/cuda.h"
CU_PREFER_BINARY
# 506 "/usr/local/cuda/include/cuda.h"
} CUjit_fallback; }
# 516 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 511 "/usr/local/cuda/include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 512 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE,
# 513 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY,
# 514 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD,
# 515 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4
# 516 "/usr/local/cuda/include/cuda.h"
} CUgraphicsRegisterFlags; }
# 525 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 521 "/usr/local/cuda/include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 522 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 523 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 524 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 525 "/usr/local/cuda/include/cuda.h"
} CUgraphicsMapResourceFlags; }
# 537 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 530 "/usr/local/cuda/include/cuda.h"
enum CUarray_cubemap_face_enum {
# 531 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 532 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 533 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 534 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 535 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 536 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z
# 537 "/usr/local/cuda/include/cuda.h"
} CUarray_cubemap_face; }
# 546 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 542 "/usr/local/cuda/include/cuda.h"
enum CUlimit_enum {
# 543 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 544 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 545 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_MALLOC_HEAP_SIZE
# 546 "/usr/local/cuda/include/cuda.h"
} CUlimit; }
# 828 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 551 "/usr/local/cuda/include/cuda.h"
enum cudaError_enum {
# 557 "/usr/local/cuda/include/cuda.h"
CUDA_SUCCESS,
# 563 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 569 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 575 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 580 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 586 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_DISABLED,
# 591 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_NOT_INITIALIZED,
# 596 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STARTED,
# 601 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STOPPED,
# 606 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 612 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 619 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 629 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 638 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 643 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 648 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 654 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 659 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 667 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 672 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 677 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 683 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 689 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 695 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 701 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 708 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_IN_USE,
# 713 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 718 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 723 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 728 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 733 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_OPERATING_SYSTEM,
# 740 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 747 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 756 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 767 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 778 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 789 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 795 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 802 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED,
# 809 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PEER_ACCESS_NOT_ENABLED,
# 815 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE = 708,
# 822 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_CONTEXT_IS_DESTROYED,
# 827 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 828 "/usr/local/cuda/include/cuda.h"
} CUresult; }
# 890 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 869 "/usr/local/cuda/include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 870 "/usr/local/cuda/include/cuda.h"
size_t srcXInBytes;
# 871 "/usr/local/cuda/include/cuda.h"
size_t srcY;
# 873 "/usr/local/cuda/include/cuda.h"
CUmemorytype srcMemoryType;
# 874 "/usr/local/cuda/include/cuda.h"
const void *srcHost;
# 875 "/usr/local/cuda/include/cuda.h"
CUdeviceptr srcDevice;
# 876 "/usr/local/cuda/include/cuda.h"
CUarray srcArray;
# 877 "/usr/local/cuda/include/cuda.h"
size_t srcPitch;
# 879 "/usr/local/cuda/include/cuda.h"
size_t dstXInBytes;
# 880 "/usr/local/cuda/include/cuda.h"
size_t dstY;
# 882 "/usr/local/cuda/include/cuda.h"
CUmemorytype dstMemoryType;
# 883 "/usr/local/cuda/include/cuda.h"
void *dstHost;
# 884 "/usr/local/cuda/include/cuda.h"
CUdeviceptr dstDevice;
# 885 "/usr/local/cuda/include/cuda.h"
CUarray dstArray;
# 886 "/usr/local/cuda/include/cuda.h"
size_t dstPitch;
# 888 "/usr/local/cuda/include/cuda.h"
size_t WidthInBytes;
# 889 "/usr/local/cuda/include/cuda.h"
size_t Height;
# 890 "/usr/local/cuda/include/cuda.h"
} CUDA_MEMCPY2D; }
# 923 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 895 "/usr/local/cuda/include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 896 "/usr/local/cuda/include/cuda.h"
size_t srcXInBytes;
# 897 "/usr/local/cuda/include/cuda.h"
size_t srcY;
# 898 "/usr/local/cuda/include/cuda.h"
size_t srcZ;
# 899 "/usr/local/cuda/include/cuda.h"
size_t srcLOD;
# 900 "/usr/local/cuda/include/cuda.h"
CUmemorytype srcMemoryType;
# 901 "/usr/local/cuda/include/cuda.h"
const void *srcHost;
# 902 "/usr/local/cuda/include/cuda.h"
CUdeviceptr srcDevice;
# 903 "/usr/local/cuda/include/cuda.h"
CUarray srcArray;
# 904 "/usr/local/cuda/include/cuda.h"
void *reserved0;
# 905 "/usr/local/cuda/include/cuda.h"
size_t srcPitch;
# 906 "/usr/local/cuda/include/cuda.h"
size_t srcHeight;
# 908 "/usr/local/cuda/include/cuda.h"
size_t dstXInBytes;
# 909 "/usr/local/cuda/include/cuda.h"
size_t dstY;
# 910 "/usr/local/cuda/include/cuda.h"
size_t dstZ;
# 911 "/usr/local/cuda/include/cuda.h"
size_t dstLOD;
# 912 "/usr/local/cuda/include/cuda.h"
CUmemorytype dstMemoryType;
# 913 "/usr/local/cuda/include/cuda.h"
void *dstHost;
# 914 "/usr/local/cuda/include/cuda.h"
CUdeviceptr dstDevice;
# 915 "/usr/local/cuda/include/cuda.h"
CUarray dstArray;
# 916 "/usr/local/cuda/include/cuda.h"
void *reserved1;
# 917 "/usr/local/cuda/include/cuda.h"
size_t dstPitch;
# 918 "/usr/local/cuda/include/cuda.h"
size_t dstHeight;
# 920 "/usr/local/cuda/include/cuda.h"
size_t WidthInBytes;
# 921 "/usr/local/cuda/include/cuda.h"
size_t Height;
# 922 "/usr/local/cuda/include/cuda.h"
size_t Depth;
# 923 "/usr/local/cuda/include/cuda.h"
} CUDA_MEMCPY3D; }
# 956 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 928 "/usr/local/cuda/include/cuda.h"
struct CUDA_MEMCPY3D_PEER_st {
# 929 "/usr/local/cuda/include/cuda.h"
size_t srcXInBytes;
# 930 "/usr/local/cuda/include/cuda.h"
size_t srcY;
# 931 "/usr/local/cuda/include/cuda.h"
size_t srcZ;
# 932 "/usr/local/cuda/include/cuda.h"
size_t srcLOD;
# 933 "/usr/local/cuda/include/cuda.h"
CUmemorytype srcMemoryType;
# 934 "/usr/local/cuda/include/cuda.h"
const void *srcHost;
# 935 "/usr/local/cuda/include/cuda.h"
CUdeviceptr srcDevice;
# 936 "/usr/local/cuda/include/cuda.h"
CUarray srcArray;
# 937 "/usr/local/cuda/include/cuda.h"
CUcontext srcContext;
# 938 "/usr/local/cuda/include/cuda.h"
size_t srcPitch;
# 939 "/usr/local/cuda/include/cuda.h"
size_t srcHeight;
# 941 "/usr/local/cuda/include/cuda.h"
size_t dstXInBytes;
# 942 "/usr/local/cuda/include/cuda.h"
size_t dstY;
# 943 "/usr/local/cuda/include/cuda.h"
size_t dstZ;
# 944 "/usr/local/cuda/include/cuda.h"
size_t dstLOD;
# 945 "/usr/local/cuda/include/cuda.h"
CUmemorytype dstMemoryType;
# 946 "/usr/local/cuda/include/cuda.h"
void *dstHost;
# 947 "/usr/local/cuda/include/cuda.h"
CUdeviceptr dstDevice;
# 948 "/usr/local/cuda/include/cuda.h"
CUarray dstArray;
# 949 "/usr/local/cuda/include/cuda.h"
CUcontext dstContext;
# 950 "/usr/local/cuda/include/cuda.h"
size_t dstPitch;
# 951 "/usr/local/cuda/include/cuda.h"
size_t dstHeight;
# 953 "/usr/local/cuda/include/cuda.h"
size_t WidthInBytes;
# 954 "/usr/local/cuda/include/cuda.h"
size_t Height;
# 955 "/usr/local/cuda/include/cuda.h"
size_t Depth;
# 956 "/usr/local/cuda/include/cuda.h"
} CUDA_MEMCPY3D_PEER; }
# 968 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 961 "/usr/local/cuda/include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR_st {
# 963 "/usr/local/cuda/include/cuda.h"
size_t Width;
# 964 "/usr/local/cuda/include/cuda.h"
size_t Height;
# 966 "/usr/local/cuda/include/cuda.h"
CUarray_format Format;
# 967 "/usr/local/cuda/include/cuda.h"
unsigned NumChannels;
# 968 "/usr/local/cuda/include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 982 "/usr/local/cuda/include/cuda.h"
extern "C" { typedef
# 973 "/usr/local/cuda/include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR_st {
# 975 "/usr/local/cuda/include/cuda.h"
size_t Width;
# 976 "/usr/local/cuda/include/cuda.h"
size_t Height;
# 977 "/usr/local/cuda/include/cuda.h"
size_t Depth;
# 979 "/usr/local/cuda/include/cuda.h"
CUarray_format Format;
# 980 "/usr/local/cuda/include/cuda.h"
unsigned NumChannels;
# 981 "/usr/local/cuda/include/cuda.h"
unsigned Flags;
# 982 "/usr/local/cuda/include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 1095 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuInit(unsigned );
# 1122 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDriverGetVersion(int * );
# 1160 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice * , int );
# 1186 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int * );
# 1215 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceGetName(char * , int , CUdevice );
# 1244 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int * , int * , CUdevice );
# 1272 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceTotalMem_v2(size_t * , CUdevice );
# 1332 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop * , CUdevice );
# 1444 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int * , CUdevice_attribute , CUdevice );
# 1544 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxCreate_v2(CUcontext * , unsigned , CUdevice );
# 1583 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxDestroy_v2(CUcontext );
# 1633 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext * , unsigned );
# 1668 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext );
# 1704 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxPushCurrent_v2(CUcontext );
# 1737 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxPopCurrent_v2(CUcontext * );
# 1763 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxSetCurrent(CUcontext );
# 1782 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxGetCurrent(CUcontext * );
# 1811 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice * );
# 1839 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 1900 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxSetLimit(CUlimit , size_t );
# 1933 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxGetLimit(size_t * , CUlimit );
# 1974 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxGetCacheConfig(CUfunc_cache * );
# 2022 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxSetCacheConfig(CUfunc_cache );
# 2057 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxGetApiVersion(CUcontext , unsigned * );
# 2106 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule * , const char * );
# 2140 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule * , const void * );
# 2219 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule * , const void * , unsigned , CUjit_option * , void ** );
# 2259 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule * , const void * );
# 2284 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule );
# 2314 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction * , CUmodule , const char * );
# 2348 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleGetGlobal_v2(CUdeviceptr * , size_t * , CUmodule , const char * );
# 2382 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref * , CUmodule , const char * );
# 2413 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuModuleGetSurfRef(CUsurfref * , CUmodule , const char * );
# 2456 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemGetInfo_v2(size_t * , size_t * );
# 2489 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemAlloc_v2(CUdeviceptr * , size_t );
# 2550 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemAllocPitch_v2(CUdeviceptr * , size_t * , size_t , size_t , unsigned );
# 2579 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemFree_v2(CUdeviceptr );
# 2612 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemGetAddressRange_v2(CUdeviceptr * , size_t * , CUdeviceptr );
# 2658 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemAllocHost_v2(void ** , size_t );
# 2688 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemFreeHost(void * );
# 2770 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemHostAlloc(void ** , size_t , unsigned );
# 2808 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr * , void * , unsigned );
# 2833 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemHostGetFlags(unsigned * , void * );
# 2896 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemHostRegister(void * , size_t , unsigned );
# 2919 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemHostUnregister(void * );
# 2955 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy(CUdeviceptr , CUdeviceptr , size_t );
# 2988 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyPeer(CUdeviceptr , CUcontext , CUdeviceptr , CUcontext , size_t );
# 3026 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyHtoD_v2(CUdeviceptr , const void * , size_t );
# 3059 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyDtoH_v2(void * , CUdeviceptr , size_t );
# 3092 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyDtoD_v2(CUdeviceptr , CUdeviceptr , size_t );
# 3126 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyDtoA_v2(CUarray , size_t , CUdeviceptr , size_t );
# 3162 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyAtoD_v2(CUdeviceptr , CUarray , size_t , size_t );
# 3196 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyHtoA_v2(CUarray , size_t , const void * , size_t );
# 3230 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyAtoH_v2(void * , CUarray , size_t , size_t );
# 3268 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyAtoA_v2(CUarray , size_t , CUarray , size_t , size_t );
# 3428 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D * );
# 3586 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D * );
# 3753 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D * );
# 3784 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy3DPeer(const CUDA_MEMCPY3D_PEER * );
# 3824 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyAsync(CUdeviceptr , CUdeviceptr , size_t , CUstream );
# 3855 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyPeerAsync(CUdeviceptr , CUcontext , CUdeviceptr , CUcontext , size_t , CUstream );
# 3897 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr , const void * , size_t , CUstream );
# 3937 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync_v2(void * , CUdeviceptr , size_t , CUstream );
# 3974 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr , CUdeviceptr , size_t , CUstream );
# 4016 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync_v2(CUarray , size_t , const void * , size_t , CUstream );
# 4058 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync_v2(void * , CUarray , size_t , size_t , CUstream );
# 4229 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D * , CUstream );
# 4404 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D * , CUstream );
# 4429 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemcpy3DPeerAsync(const CUDA_MEMCPY3D_PEER * , CUstream );
# 4464 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD8_v2(CUdeviceptr , unsigned char , size_t );
# 4497 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD16_v2(CUdeviceptr , unsigned short , size_t );
# 4530 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD32_v2(CUdeviceptr , unsigned , size_t );
# 4568 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD2D8_v2(CUdeviceptr , size_t , unsigned char , size_t , size_t );
# 4606 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD2D16_v2(CUdeviceptr , size_t , unsigned short , size_t , size_t );
# 4644 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD2D32_v2(CUdeviceptr , size_t , unsigned , size_t , size_t );
# 4681 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD8Async(CUdeviceptr , unsigned char , size_t , CUstream );
# 4718 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD16Async(CUdeviceptr , unsigned short , size_t , CUstream );
# 4754 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD32Async(CUdeviceptr , unsigned , size_t , CUstream );
# 4796 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD2D8Async(CUdeviceptr , size_t , unsigned char , size_t , size_t , CUstream );
# 4838 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD2D16Async(CUdeviceptr , size_t , unsigned short , size_t , size_t , CUstream );
# 4880 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuMemsetD2D32Async(CUdeviceptr , size_t , unsigned , size_t , size_t , CUstream );
# 4983 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuArrayCreate_v2(CUarray * , const CUDA_ARRAY_DESCRIPTOR * );
# 5016 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR * , CUarray );
# 5047 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray );
# 5155 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuArray3DCreate_v2(CUarray * , const CUDA_ARRAY3D_DESCRIPTOR * );
# 5191 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR * , CUarray );
# 5398 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuPointerGetAttribute(void * , CUpointer_attribute , CUdeviceptr );
# 5435 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream * , unsigned );
# 5477 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuStreamWaitEvent(CUstream , CUevent , unsigned );
# 5501 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream );
# 5526 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream );
# 5554 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuStreamDestroy_v2(CUstream );
# 5603 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent * , unsigned );
# 5641 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent , CUstream );
# 5672 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent );
# 5706 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent );
# 5735 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuEventDestroy_v2(CUevent );
# 5779 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float * , CUevent , CUevent );
# 5842 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuFuncGetAttribute(int * , CUfunction_attribute , CUfunction );
# 5883 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuFuncSetCacheConfig(CUfunction , CUfunc_cache );
# 5999 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuLaunchKernel(CUfunction , unsigned , unsigned , unsigned , unsigned , unsigned , unsigned , unsigned , CUstream , void ** , void ** );
# 6055 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction , int , int , int );
# 6089 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction , unsigned );
# 6121 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction , unsigned );
# 6154 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction , int , unsigned );
# 6187 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction , int , float );
# 6222 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction , int , void * , unsigned );
# 6259 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction );
# 6298 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction , int , int );
# 6342 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction , int , int , CUstream );
# 6367 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction , int , CUtexref );
# 6408 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref , CUarray , unsigned );
# 6446 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefSetAddress_v2(size_t * , CUtexref , CUdeviceptr , size_t );
# 6487 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefSetAddress2D_v2(CUtexref , const CUDA_ARRAY_DESCRIPTOR * , CUdeviceptr , size_t );
# 6516 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref , CUarray_format , int );
# 6556 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref , int , CUaddress_mode );
# 6589 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref , CUfilter_mode );
# 6621 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref , unsigned );
# 6647 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefGetAddress_v2(CUdeviceptr * , CUtexref );
# 6673 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray * , CUtexref );
# 6699 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode * , CUtexref , int );
# 6723 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode * , CUtexref );
# 6749 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format * , int * , CUtexref );
# 6772 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned * , CUtexref );
# 6806 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref * );
# 6826 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref );
# 6864 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuSurfRefSetArray(CUsurfref , CUarray , unsigned );
# 6885 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuSurfRefGetArray(CUarray * , CUsurfref );
# 6923 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuDeviceCanAccessPeer(int * , CUdevice , CUdevice );
# 6966 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxEnablePeerAccess(CUcontext , unsigned );
# 6991 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuCtxDisablePeerAccess(CUcontext );
# 7032 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuGraphicsUnregisterResource(CUgraphicsResource );
# 7070 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuGraphicsSubResourceGetMappedArray(CUarray * , CUgraphicsResource , unsigned , unsigned );
# 7104 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr * , size_t * , CUgraphicsResource );
# 7145 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource , unsigned );
# 7183 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuGraphicsMapResources(unsigned , CUgraphicsResource * , CUstream );
# 7218 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuGraphicsUnmapResources(unsigned , CUgraphicsResource * , CUstream );
# 7222 "/usr/local/cuda/include/cuda.h"
extern "C" CUresult cuGetExportTable(const void ** , const CUuuid * );
# 30 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
# 31 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_bankchecker.h"
bdimx, unsigned bdimy, unsigned bdimz, char *
# 32 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_bankchecker.h"
aname, int index, char *file, int line)
# 33 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_bankchecker.h"
{
# 34 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_bankchecker.h"
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
# 35 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_bankchecker.h"
}
# 44 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline cudaError cutilDeviceSynchronize()
# 45 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 47 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return cudaDeviceSynchronize();
# 51 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 53 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline cudaError cutilDeviceReset()
# 54 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 56 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return cudaDeviceReset();
# 60 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 62 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
# 63 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 64 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
# 65 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(1);
# 66 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 67 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 69 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cutilExit(int argc, char **argv)
# 70 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 71 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
# 72 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("\nPress ENTER to exit...\n");
# 73 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fflush(stdout);
# 74 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fflush(stderr);
# 75 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
getchar();
# 76 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 77 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(0);
# 78 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 84 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline int _ConvertSMVer2Cores(int major, int minor)
# 85 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 90 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
typedef
# 87 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
struct {
# 88 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int SM;
# 89 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int Cores;
# 90 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} sSMtoCores;
# 92 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
sSMtoCores nGpuArchCoresPerSM[] = {{16, 8}, {17, 8}, {18, 8}, {19, 8}, {32, 32}, {33, 48}, {(-1), (-1)}};
# 102 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int index = 0;
# 103 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
while ((((nGpuArchCoresPerSM)[index]).SM) != (-1)) {
# 104 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((((nGpuArchCoresPerSM)[index]).SM) == ((major << 4) + minor)) {
# 105 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return ((nGpuArchCoresPerSM)[index]).Cores;
# 106 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 107 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
index++;
# 108 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 109 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("MapSMtoCores undefined SMversion %d.%d!\n", major, minor);
# 110 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return -1;
# 111 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 115 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline int cutGetMaxGflopsDeviceId()
# 116 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 117 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int current_device = 0, sm_per_multiproc = 0;
# 118 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int max_compute_perf = 0, max_perf_device = 0;
# 119 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int device_count = 0, best_SM_arch = 0;
# 120 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 122 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaGetDeviceCount(&device_count);
# 124 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
while (current_device < device_count) {
# 125 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&deviceProp, current_device);
# 126 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (((deviceProp.major) > 0) && ((deviceProp.major) < 9999)) {
# 127 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
best_SM_arch = ((best_SM_arch > (deviceProp.major)) ? best_SM_arch : (deviceProp.major));
# 128 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 129 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
current_device++;
# 130 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 133 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
current_device = 0;
# 134 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
while (current_device < device_count) {
# 135 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&deviceProp, current_device);
# 136 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (((deviceProp.major) == 9999) && ((deviceProp.minor) == 9999)) {
# 137 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
sm_per_multiproc = 1;
# 138 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} else {
# 139 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
sm_per_multiproc = _ConvertSMVer2Cores(deviceProp.major, deviceProp.minor);
# 140 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 142 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int compute_perf = (((deviceProp.multiProcessorCount) * sm_per_multiproc) * (deviceProp.clockRate));
# 143 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (compute_perf > max_compute_perf) {
# 145 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (best_SM_arch > 2) {
# 147 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((deviceProp.major) == best_SM_arch) {
# 148 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_compute_perf = compute_perf;
# 149 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_perf_device = current_device;
# 150 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 151 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} else {
# 152 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_compute_perf = compute_perf;
# 153 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_perf_device = current_device;
# 154 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 155 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 156 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
++current_device;
# 157 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 158 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return max_perf_device;
# 159 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 162 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline int cutGetMaxGflopsGraphicsDeviceId()
# 163 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 164 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int current_device = 0, sm_per_multiproc = 0;
# 165 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int max_compute_perf = 0, max_perf_device = 0;
# 166 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int device_count = 0, best_SM_arch = 0;
# 167 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int bTCC = 0;
# 168 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 170 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaGetDeviceCount(&device_count);
# 172 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
while (current_device < device_count) {
# 173 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&deviceProp, current_device);
# 176 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (deviceProp.tccDriver) { bTCC = 1; }
# 182 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (!(bTCC)) {
# 183 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (((deviceProp.major) > 0) && ((deviceProp.major) < 9999)) {
# 184 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
best_SM_arch = ((best_SM_arch > (deviceProp.major)) ? best_SM_arch : (deviceProp.major));
# 185 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 186 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 187 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
current_device++;
# 188 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 191 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
current_device = 0;
# 192 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
while (current_device < device_count) {
# 193 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&deviceProp, current_device);
# 194 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (((deviceProp.major) == 9999) && ((deviceProp.minor) == 9999)) {
# 195 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
sm_per_multiproc = 1;
# 196 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} else {
# 197 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
sm_per_multiproc = _ConvertSMVer2Cores(deviceProp.major, deviceProp.minor);
# 198 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 201 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (deviceProp.tccDriver) { bTCC = 1; }
# 207 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (!(bTCC))
# 208 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 209 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int compute_perf = (((deviceProp.multiProcessorCount) * sm_per_multiproc) * (deviceProp.clockRate));
# 210 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (compute_perf > max_compute_perf) {
# 212 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (best_SM_arch > 2) {
# 214 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((deviceProp.major) == best_SM_arch) {
# 215 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_compute_perf = compute_perf;
# 216 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_perf_device = current_device;
# 217 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 218 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} else {
# 219 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_compute_perf = compute_perf;
# 220 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
max_perf_device = current_device;
# 221 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 222 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 223 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 224 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
++current_device;
# 225 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 226 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return max_perf_device;
# 227 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 265 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
# 266 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 267 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 268 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cudaSafeCallNoSync() Runtime API error %d : %s.\n", file, line, (int)err, cudaGetErrorString(err));
# 270 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 271 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 272 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 274 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeCall(cudaError err, const char *file, const int line)
# 275 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 276 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 277 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cudaSafeCall() Runtime API error %d: %s.\n", file, line, (int)err, cudaGetErrorString(err));
# 279 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 280 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 281 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 283 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeThreadSync(const char *file, const int line)
# 284 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 285 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaError err = cutilDeviceSynchronize();
# 286 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 287 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cudaDeviceSynchronize() Runtime API error %d: %s.\n", file, line, (int)err, cudaGetErrorString(err));
# 289 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 290 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 291 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 293 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
# 294 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 295 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((CUFFT_SUCCESS) != err) {
# 296 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cufftSafeCall() CUFFT error %d: ", file, line, (int)err);
# 298 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
switch (err) {
# 299 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_INVALID_PLAN: fprintf(stderr, "CUFFT_INVALID_PLAN\n");
# 300 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_ALLOC_FAILED: fprintf(stderr, "CUFFT_ALLOC_FAILED\n");
# 301 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_INVALID_TYPE: fprintf(stderr, "CUFFT_INVALID_TYPE\n");
# 302 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_INVALID_VALUE: fprintf(stderr, "CUFFT_INVALID_VALUE\n");
# 303 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_INTERNAL_ERROR: fprintf(stderr, "CUFFT_INTERNAL_ERROR\n");
# 304 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_EXEC_FAILED: fprintf(stderr, "CUFFT_EXEC_FAILED\n");
# 305 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_SETUP_FAILED: fprintf(stderr, "CUFFT_SETUP_FAILED\n");
# 306 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_INVALID_SIZE: fprintf(stderr, "CUFFT_INVALID_SIZE\n");
# 307 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
case CUFFT_UNALIGNED_DATA: fprintf(stderr, "CUFFT_UNALIGNED_DATA\n");
# 308 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
default: fprintf(stderr, "CUFFT Unknown error code\n");
# 309 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 310 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 311 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 312 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 314 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
# 315 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 316 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((CUTTrue) != err) {
# 317 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : CUTIL CUDA error.\n", file, line);
# 319 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 320 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 321 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 323 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cutilGetLastError(const char *errorMessage, const char *file, const int line)
# 324 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 325 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 326 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 327 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cutilCheckMsg() CUTIL CUDA error : %s : (%d) %s.\n", file, line, errorMessage, (int)err, cudaGetErrorString(err));
# 329 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 330 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 331 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 333 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cutilGetLastErrorAndSync(const char *errorMessage, const char *file, const int line)
# 334 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 335 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 336 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 337 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cutilCheckMsg() CUTIL CUDA error : %s : (%d) %s.\n", file, line, errorMessage, (int)err, cudaGetErrorString(err));
# 339 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 340 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 342 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
err = cutilDeviceSynchronize();
# 343 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 344 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cutilCheckMsg cudaDeviceSynchronize error: %s : (%d) %s.\n", file, line, errorMessage, (int)err, cudaGetErrorString(err));
# 346 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 347 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 348 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 350 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
# 351 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 352 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (!(pointer)) {
# 353 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : cutilSafeMalloc host malloc failure\n", file, line);
# 355 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 356 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 357 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 363 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline int cutilDeviceInit(int ARGC, char **ARGV)
# 364 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 365 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int deviceCount;
# 366 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceCount(&deviceCount), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h", 366);
# 367 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (deviceCount == 0) {
# 368 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error: no devices supporting CUDA.\n");
# 369 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 370 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 371 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int dev = 0;
# 372 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 373 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (dev < 0) {
# 374 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
dev = 0; }
# 375 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (dev > (deviceCount - 1)) {
# 376 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "\n");
# 377 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, ">> %d CUDA capable GPU device(s) detected. <<\n", deviceCount);
# 378 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, ">> cutilDeviceInit (-device=%d) is not a valid GPU device. <<\n", dev);
# 379 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "\n");
# 380 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return -dev;
# 381 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 382 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 383 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, dev), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h", 383);
# 384 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((deviceProp.major) < 1) {
# 385 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cutil error: GPU device does not support CUDA.\n");
# 386 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1); }
# 388 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("> Using CUDA device [%d]: %s\n", dev, deviceProp.name);
# 389 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cudaSafeCall(cudaSetDevice(dev), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h", 389);
# 391 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return dev;
# 392 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 395 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline int cutilChooseCudaDevice(int argc, char **argv)
# 396 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 397 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 398 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int devID = 0;
# 400 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (cutCheckCmdLineFlag(argc, (const char **)argv, "device")) {
# 401 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
devID = cutilDeviceInit(argc, argv);
# 402 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (devID < 0) {
# 403 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("exiting...\n");
# 404 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cutilExit(argc, argv);
# 405 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(0);
# 406 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 407 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} else {
# 409 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
devID = cutGetMaxGflopsDeviceId();
# 410 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaSetDevice(devID), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h", 410);
# 411 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, devID), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h", 411);
# 412 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("> Using CUDA device [%d]: %s\n", devID, deviceProp.name);
# 413 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 414 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return devID;
# 415 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 420 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 421 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 422 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 423 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 424 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : CUDA error: %s : (%d) %s.\n", file, line, errorMessage, (int)err, cudaGetErrorString(err));
# 426 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 427 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 428 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
err = cutilDeviceSynchronize();
# 429 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 430 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "%s(%i) : CUDA error: %s : (%d) %s.\n", file, line, errorMessage, (int)err, cudaGetErrorString(err));
# 432 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
exit(-1);
# 433 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 434 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 452 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline void __cutilQAFinish(int argc, char **argv, bool bStatus)
# 453 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 454 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
const char *sStatus[] = {("FAILED"), ("PASSED"), ("WAIVED"), (__null)};
# 456 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
bool bFlag = false;
# 457 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
for (int i = 1; i < argc; i++) {
# 458 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if ((!(strcasecmp(argv[i], "-qatest"))) || (!(strcasecmp(argv[i], "-noprompt")))) {
# 459 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
bFlag |= (true);
# 460 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 461 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 463 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (bFlag) {
# 464 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("&&&& %s %s", (sStatus)[bStatus], argv[0]);
# 465 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
for (int i = 1; i < argc; i++) { mexPrintf(" %s", argv[i]); }
# 466 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} else {
# 467 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("[%s] test result\n%s\n", argv[0], (sStatus)[bStatus]);
# 468 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 469 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 472 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
inline bool cutilCudaCapabilities(int major_version, int minor_version, int argc, char **argv)
# 473 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 474 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 475 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
(deviceProp.major) = 0;
# 476 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
(deviceProp.minor) = 0;
# 477 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
int dev;
# 483 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cudaSafeCall(cudaGetDevice(&dev), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h", 483);
# 484 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
__cudaSafeCall(cudaGetDeviceProperties(&deviceProp, dev), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h", 484);
# 486 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
if (((deviceProp.major) > major_version) || (((deviceProp.major) == major_version) && ((deviceProp.minor) >= minor_version)))
# 488 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 489 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("> Device %d: <%16s >, Compute SM %d.%d detected\n", dev, deviceProp.name, deviceProp.major, deviceProp.minor);
# 490 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return true;
# 491 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
} else
# 493 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
{
# 494 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
mexPrintf("There is no device supporting CUDA compute capability %d.%d.\n", major_version, minor_version);
# 496 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
return false;
# 497 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 498 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_runtime.h"
}
# 25 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
typedef
# 22 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
struct {
# 23 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
const char *error_string;
# 24 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int error_id;
# 25 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} s_CudaErrorStr;
# 30 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
static s_CudaErrorStr sCudaDrvErrorString[] = {{("CUDA_SUCCESS"), 0}, {("CUDA_ERROR_INVALID_VALUE"), 1}, {("CUDA_ERROR_OUT_OF_MEMORY"), 2}, {("CUDA_ERROR_NOT_INITIALIZED"), 3}, {("CUDA_ERROR_DEINITIALIZED"), 4}, {("CUDA_ERROR_PROFILER_DISABLED"), 5}, {("CUDA_ERROR_PROFILER_NOT_INITIALIZED"), 6}, {("CUDA_ERROR_PROFILER_ALREADY_STARTED"), 7}, {("CUDA_ERROR_PROFILER_ALREADY_STOPPED"), 8}, {("CUDA_ERROR_NO_DEVICE (no CUDA-capable devices were detected)"), 100}, {("CUDA_ERROR_INVALID_DEVICE (device specified is not a valid CUDA device)"), 101}, {("CUDA_ERROR_INVALID_IMAGE"), 200}, {("CUDA_ERROR_INVALID_CONTEXT"), 201}, {("CUDA_ERROR_CONTEXT_ALREADY_CURRENT"), 202}, {("CUDA_ERROR_MAP_FAILED"), 205}, {("CUDA_ERROR_UNMAP_FAILED"), 206}, {("CUDA_ERROR_ARRAY_IS_MAPPED"), 207}, {("CUDA_ERROR_ALREADY_MAPPED"), 208}, {("CUDA_ERROR_NO_BINARY_FOR_GPU"), 209}, {("CUDA_ERROR_ALREADY_ACQUIRED"), 210}, {("CUDA_ERROR_NOT_MAPPED"), 211}, {("CUDA_ERROR_NOT_MAPPED_AS_ARRAY"), 212}, {("CUDA_ERROR_NOT_MAPPED_AS_POINTER"), 213}, {("CUDA_ERROR_ECC_UNCORRECTABLE"), 214}, {("CUDA_ERROR_UNSUPPORTED_LIMIT"), 215}, {("CUDA_ERROR_CONTEXT_ALREADY_IN_USE"), 216}, {("CUDA_ERROR_INVALID_SOURCE"), 300}, {("CUDA_ERROR_FILE_NOT_FOUND"), 301}, {("CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND"), 302}, {("CUDA_ERROR_SHARED_OBJECT_INIT_FAILED"), 303}, {("CUDA_ERROR_OPERATING_SYSTEM"), 304}, {("CUDA_ERROR_INVALID_HANDLE"), 400}, {("CUDA_ERROR_NOT_FOUND"), 500}, {("CUDA_ERROR_NOT_READY"), 600}, {("CUDA_ERROR_LAUNCH_FAILED"), 700}, {("CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES"), 701}, {("CUDA_ERROR_LAUNCH_TIMEOUT"), 702}, {("CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING"), 703}, {("CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED"), 704}, {("CUDA_ERROR_PEER_ACCESS_NOT_ENABLED"), 705}, {("CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE"), 708}, {("CUDA_ERROR_CONTEXT_IS_DESTROYED"), 709}, {("CUDA_ERROR_ASSERT"), 710}, {("CUDA_ERROR_UNKNOWN"), 999}, {(__null), (-1)}};
# 321 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline const char *getCudaDrvErrorString(CUresult error_id)
# 322 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 323 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int index = 0;
# 324 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
while (((((sCudaDrvErrorString)[index]).error_id) != error_id) && ((((sCudaDrvErrorString)[index]).error_id) != (-1)))
# 326 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 327 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
index++;
# 328 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return (const char *)(((sCudaDrvErrorString)[index]).error_string);
# 329 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 330 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return (const char *)("CUDA_ERROR not found!");
# 331 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 342 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
# 343 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 344 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 345 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d \"%s\" from file <%s>, line %i.\n", err, getCudaDrvErrorString(err), file, line);
# 347 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 348 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 349 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 350 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline void __cuSafeCall(CUresult err, const char *file, const int line)
# 351 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 352 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(err, file, line);
# 353 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 355 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline void __cuCtxSync(const char *file, const int line)
# 356 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 357 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 358 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 359 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cuCtxSynchronize() API error = %04d \"%s\" from file <%s>, line %i.\n", err, getCudaDrvErrorString(err), file, line);
# 361 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 362 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 363 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 369 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline int _ConvertSMVer2CoresDrvApi(int major, int minor)
# 370 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 375 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
typedef
# 372 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
struct {
# 373 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int SM;
# 374 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int Cores;
# 375 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} sSMtoCores;
# 377 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
sSMtoCores nGpuArchCoresPerSM[] = {{16, 8}, {17, 8}, {18, 8}, {19, 8}, {32, 32}, {33, 48}, {(-1), (-1)}};
# 387 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int index = 0;
# 388 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
while ((((nGpuArchCoresPerSM)[index]).SM) != (-1)) {
# 389 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((((nGpuArchCoresPerSM)[index]).SM) == ((major << 4) + minor)) {
# 390 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return ((nGpuArchCoresPerSM)[index]).Cores;
# 391 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 392 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
index++;
# 393 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 394 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("MapSMtoCores undefined SMversion %d.%d!\n", major, minor);
# 395 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return -1;
# 396 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 400 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline int cutilDrvGetMaxGflopsDeviceId()
# 401 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 402 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
CUdevice current_device = 0, max_perf_device = 0;
# 403 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int device_count = 0, sm_per_multiproc = 0;
# 404 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int max_compute_perf = 0, best_SM_arch = 0;
# 405 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int major = 0, minor = 0, multiProcessorCount, clockRate;
# 407 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
cuInit(0);
# 408 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&device_count), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 408);
# 411 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
while (current_device < device_count) {
# 412 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceComputeCapability(&major, &minor, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 412);
# 413 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((major > 0) && (major < 9999)) {
# 414 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
best_SM_arch = ((best_SM_arch > major) ? best_SM_arch : major);
# 415 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 416 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
current_device++;
# 417 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 420 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
current_device = 0;
# 421 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
while (current_device < device_count) {
# 422 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetAttribute(&multiProcessorCount, CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 424);
# 425 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetAttribute(&clockRate, CU_DEVICE_ATTRIBUTE_CLOCK_RATE, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 427);
# 428 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceComputeCapability(&major, &minor, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 428);
# 430 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((major == 9999) && (minor == 9999)) {
# 431 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
sm_per_multiproc = 1;
# 432 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} else {
# 433 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
sm_per_multiproc = _ConvertSMVer2CoresDrvApi(major, minor);
# 434 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 436 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int compute_perf = ((multiProcessorCount * sm_per_multiproc) * clockRate);
# 437 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (compute_perf > max_compute_perf) {
# 439 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (best_SM_arch > 2) {
# 441 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (major == best_SM_arch) {
# 442 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_compute_perf = compute_perf;
# 443 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_perf_device = current_device;
# 444 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 445 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} else {
# 446 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_compute_perf = compute_perf;
# 447 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_perf_device = current_device;
# 448 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 449 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 450 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
++current_device;
# 451 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 452 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return max_perf_device;
# 453 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 456 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline int cutilDrvGetMaxGflopsGraphicsDeviceId()
# 457 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 458 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
CUdevice current_device = 0, max_perf_device = 0;
# 459 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int device_count = 0, sm_per_multiproc = 0;
# 460 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int max_compute_perf = 0, best_SM_arch = 0;
# 461 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int major = 0, minor = 0, multiProcessorCount, clockRate;
# 462 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int bTCC = 0;
# 463 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
char deviceName[256];
# 465 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
cuInit(0);
# 466 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&device_count), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 466);
# 469 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
while (current_device < device_count) {
# 470 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetName(deviceName, 256, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 470);
# 471 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceComputeCapability(&major, &minor, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 471);
# 474 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetAttribute(&bTCC, CU_DEVICE_ATTRIBUTE_TCC_DRIVER, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 474);
# 479 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (!(bTCC)) {
# 480 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((major > 0) && (major < 9999)) {
# 481 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
best_SM_arch = ((best_SM_arch > major) ? best_SM_arch : major);
# 482 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 483 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 484 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
current_device++;
# 485 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 488 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
current_device = 0;
# 489 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
while (current_device < device_count) {
# 490 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetAttribute(&multiProcessorCount, CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 492);
# 493 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetAttribute(&clockRate, CU_DEVICE_ATTRIBUTE_CLOCK_RATE, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 495);
# 496 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceComputeCapability(&major, &minor, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 496);
# 499 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetAttribute(&bTCC, CU_DEVICE_ATTRIBUTE_TCC_DRIVER, current_device), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 499);
# 505 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((major == 9999) && (minor == 9999)) {
# 506 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
sm_per_multiproc = 1;
# 507 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} else {
# 508 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
sm_per_multiproc = _ConvertSMVer2CoresDrvApi(major, minor);
# 509 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 512 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (!(bTCC))
# 513 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 514 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int compute_perf = ((multiProcessorCount * sm_per_multiproc) * clockRate);
# 515 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (compute_perf > max_compute_perf) {
# 517 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (best_SM_arch > 2) {
# 519 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (major == best_SM_arch) {
# 520 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_compute_perf = compute_perf;
# 521 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_perf_device = current_device;
# 522 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 523 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} else {
# 524 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_compute_perf = compute_perf;
# 525 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
max_perf_device = current_device;
# 526 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 527 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 528 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 529 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
++current_device;
# 530 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 531 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return max_perf_device;
# 532 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 534 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline void __cuCheckMsg(const char *msg, const char *file, const int line)
# 535 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 536 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 537 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 538 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
# 539 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d \"%s\" in file <%s>, line %i.\n", err, getCudaDrvErrorString(err), file, line);
# 541 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 542 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 543 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 549 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline int cutilDeviceInitDrv(int ARGC, char **ARGV)
# 550 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 551 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int cuDevice = 0;
# 552 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int deviceCount = 0;
# 553 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
CUresult err = cuInit(0);
# 554 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) == err) {
# 555 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&deviceCount), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 555); }
# 556 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (deviceCount == 0) {
# 557 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "CUTIL DeviceInitDrv error: no devices supporting CUDA\n");
# 558 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 559 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 560 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int dev = 0;
# 561 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 562 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (dev < 0) { dev = 0; }
# 563 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (dev > (deviceCount - 1)) {
# 564 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "\n");
# 565 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, ">> %d CUDA capable GPU device(s) detected. <<\n", deviceCount);
# 566 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, ">> cutilDeviceInit (-device=%d) is not a valid GPU device. <<\n", dev);
# 567 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "\n");
# 568 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return -dev;
# 569 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 570 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, dev), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 570);
# 571 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
char name[100];
# 572 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
cuDeviceGetName(name, 100, cuDevice);
# 573 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 574 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("> Using CUDA Device [%d]: %s\n", dev, name);
# 575 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 576 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return dev;
# 577 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 584 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline CUdevice cutilChooseCudaDeviceDrv(int argc, char **argv, int *p_devID)
# 585 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 586 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
CUdevice cuDevice;
# 587 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int devID = 0;
# 589 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (cutCheckCmdLineFlag(argc, (const char **)argv, "device")) {
# 590 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
devID = cutilDeviceInitDrv(argc, argv);
# 591 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (devID < 0) {
# 592 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("exiting...\n");
# 593 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
exit(0);
# 594 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 595 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} else {
# 597 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
char name[100];
# 598 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
devID = cutilDrvGetMaxGflopsDeviceId();
# 599 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, devID), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 599);
# 600 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
cuDeviceGetName(name, 100, cuDevice);
# 601 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("> Using CUDA Device [%d]: %s\n", devID, name);
# 602 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 603 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
cuDeviceGet(&cuDevice, devID);
# 604 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (p_devID) { (*p_devID) = devID; }
# 605 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return cuDevice;
# 606 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 611 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 612 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 613 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 614 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
# 615 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 617 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 618 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 619 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
err = cuCtxSynchronize();
# 620 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 621 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 623 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 624 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 625 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 643 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline void __cutilDrvQAFinish(int argc, char **argv, bool bStatus)
# 644 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 645 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
const char *sStatus[] = {("FAILED"), ("PASSED"), ("WAIVED"), (__null)};
# 647 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
bool bFlag = false;
# 648 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
for (int i = 1; i < argc; i++) {
# 649 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((!(strcasecmp(argv[i], "-qatest"))) || (!(strcasecmp(argv[i], "-noprompt")))) {
# 650 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
bFlag |= (true);
# 651 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 652 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 654 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if (bFlag) {
# 655 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("&&&& %s %s", (sStatus)[bStatus], argv[0]);
# 656 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
for (int i = 1; i < argc; i++) { mexPrintf(" %s", argv[i]); }
# 657 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} else {
# 658 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("[%s] test result\n%s\n", argv[0], (sStatus)[bStatus]);
# 659 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 660 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 663 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline bool cutilDrvCudaDevCapabilities(int major_version, int minor_version, int deviceNum)
# 664 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 665 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
int major, minor, dev;
# 666 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
char device_name[256];
# 672 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&dev, deviceNum), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 672);
# 673 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceComputeCapability(&major, &minor, dev), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 673);
# 674 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetName(device_name, 256, dev), "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h", 674);
# 676 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
if ((major > major_version) || ((major == major_version) && (minor >= minor_version)))
# 678 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 679 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("> Device %d: < %s >, Compute SM %d.%d detected\n", dev, device_name, major, minor);
# 680 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return true;
# 681 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
} else
# 683 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 684 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
mexPrintf("There is no device supporting CUDA compute capability %d.%d.\n", major_version, minor_version);
# 685 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return false;
# 686 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 687 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 690 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
inline bool cutilDrvCudaCapabilities(int major_version, int minor_version)
# 691 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
{
# 692 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
return cutilDrvCudaDevCapabilities(major_version, minor_version, 0);
# 693 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline_drvapi.h"
}
# 23 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
# 24 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline.h"
{
# 25 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline.h"
mexPrintf("CUDA %d.%02d Toolkit built this project.\n", 4000 / 1000, 4000 % 100);
# 26 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline.h"
mexPrintf("  [ %s ] requirements:\n", sSDKsample);
# 27 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline.h"
mexPrintf(" -> CUDA %s Toolkit\n", sNVCCReq);
# 28 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline.h"
mexPrintf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
# 29 "/home/rmontagne/NVIDIA_GPU_Computing_SDK/C/common/inc/cutil_inline.h"
}
# 37 "./code/internal/version.cu"
const char *ciVersion = ("CUDA Cubic B-Spline Interpolation (CI) Version 1.0");
# 38 "./code/internal/version.cu"
const char *ciDate = ("5 Oct 2010");
# 39 "./code/internal/version.cu"
const char *ciAuthors = ("Danny Ruijters");
# 40 "./code/internal/version.cu"
const char *ciCopyright = ("(C) Copyright 2008-2010 Danny Ruijters.");
# 39 "./code/internal/math_func.cu"
extern "C" { typedef unsigned uint; }
# 40 "./code/internal/math_func.cu"
extern "C" { typedef unsigned short ushort; }
# 41 "./code/internal/math_func.cu"
typedef unsigned char uchar;
# 42 "./code/internal/math_func.cu"
typedef signed char schar;
# 44 "./code/internal/math_func.cu"
inline uint UMIN(uint a, uint b)
# 45 "./code/internal/math_func.cu"
{
# 46 "./code/internal/math_func.cu"
return (a < b) ? a : b;
# 47 "./code/internal/math_func.cu"
}
# 49 "./code/internal/math_func.cu"
inline uint PowTwoDivider(uint n)
# 50 "./code/internal/math_func.cu"
{
# 51 "./code/internal/math_func.cu"
if (n == (0)) { return 0; }
# 52 "./code/internal/math_func.cu"
uint divider = (1);
# 53 "./code/internal/math_func.cu"
while ((n & divider) == (0)) { divider <<= 1; }
# 54 "./code/internal/math_func.cu"
return divider;
# 55 "./code/internal/math_func.cu"
}
# 57 "./code/internal/math_func.cu"
inline float2 operator-(float a, float2 b)
# 58 "./code/internal/math_func.cu"
{
# 59 "./code/internal/math_func.cu"
return make_float2(a - (b.x), a - (b.y));
# 60 "./code/internal/math_func.cu"
}
# 62 "./code/internal/math_func.cu"
inline float3 operator-(float a, float3 b)
# 63 "./code/internal/math_func.cu"
{
# 64 "./code/internal/math_func.cu"
return make_float3(a - (b.x), a - (b.y), a - (b.z));
# 65 "./code/internal/math_func.cu"
}
# 44 "./code/memcpy.cu"
template< class T> __attribute__((unused)) float Multiplier() {int volatile ___ = 1;exit(___);}
# 45 "./code/memcpy.cu"
template<> __attribute__((unused)) float Multiplier< unsigned char> () {int volatile ___ = 1;exit(___);}
# 46 "./code/memcpy.cu"
template<> __attribute__((unused)) float Multiplier< signed char> () {int volatile ___ = 1;exit(___);}
# 47 "./code/memcpy.cu"
template<> __attribute__((unused)) float Multiplier< unsigned short> () {int volatile ___ = 1;exit(___);}
# 48 "./code/memcpy.cu"
template<> __attribute__((unused)) float Multiplier< short> () {int volatile ___ = 1;exit(___);}
# 50 "./code/memcpy.cu"
template< class T> static void __wrapper__device_stub_CopyCast(uchar *&destination, const T *&source, uint &pitch, uint &width) {exit(1);}
# 50 "./code/memcpy.cu"
template< class T> void CopyCast(uchar *destination, const T *source, uint pitch, uint width)
# 51 "./code/memcpy.cu"
{__wrapper__device_stub_CopyCast<T>(destination,source,pitch,width);
# 58 "./code/memcpy.cu"
return;}
# 60 "./code/memcpy.cu"
template< class T> static void __wrapper__device_stub_CopyCastBack(T *&destination, const uchar *&source, uint &pitch, uint &width) {exit(1);}
# 60 "./code/memcpy.cu"
template< class T> void CopyCastBack(T *destination, const uchar *source, uint pitch, uint width)
# 61 "./code/memcpy.cu"
{__wrapper__device_stub_CopyCastBack<T>(destination,source,pitch,width);
# 68 "./code/memcpy.cu"
return;}
# 83 "./code/memcpy.cu"
template< class T> cudaPitchedPtr CastVolumeHostToDevice(const T *host, uint width, uint height, uint depth)
# 84 "./code/memcpy.cu"
{
# 85 "./code/memcpy.cu"
cudaPitchedPtr device = {(0)};
# 86 "./code/memcpy.cu"
const cudaExtent extent = (make_cudaExtent(width * sizeof(float), height, depth));
# 87 "./code/memcpy.cu"
{ cudaError err = cudaMalloc3D(&device, extent); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 87, cudaGetErrorString(err)); exit(1); } } ; ;
# 88 "./code/memcpy.cu"
const size_t pitchedBytesPerSlice = ((device.pitch) * (device.ysize));
# 90 "./code/memcpy.cu"
T *temp = (0);
# 91 "./code/memcpy.cu"
const uint voxelsPerSlice = (width * height);
# 92 "./code/memcpy.cu"
const size_t nrOfBytesTemp = (voxelsPerSlice * sizeof(T));
# 93 "./code/memcpy.cu"
{ cudaError err = cudaMalloc((void **)(&temp), nrOfBytesTemp); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 93, cudaGetErrorString(err)); exit(1); } } ; ;
# 95 "./code/memcpy.cu"
uint dimX = min(PowTwoDivider(width), 64);
# 96 "./code/memcpy.cu"
dim3 dimBlock(dimX, min(PowTwoDivider(height), (512) / dimX));
# 97 "./code/memcpy.cu"
dim3 dimGrid(width / (dimBlock.x), height / (dimBlock.y));
# 98 "./code/memcpy.cu"
size_t offsetHost = (0);
# 99 "./code/memcpy.cu"
size_t offsetDevice = (0);
# 101 "./code/memcpy.cu"
for (uint slice = (0); slice < depth; slice++)
# 102 "./code/memcpy.cu"
{
# 103 "./code/memcpy.cu"
{ cudaError err = (cudaMemcpy(temp, host + offsetHost, nrOfBytesTemp, cudaMemcpyHostToDevice)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 103, cudaGetErrorString(err)); exit(1); } } ; ;
# 104 "./code/memcpy.cu"
cudaConfigureCall(dimGrid, dimBlock) ? ((void)0) : (CopyCast< T> )(((uchar *)(device.ptr)) + offsetDevice, temp, (uint)(device.pitch), width);
# 105 "./code/memcpy.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "Cast kernel failed", "./code/memcpy.cu", 105, cudaGetErrorString(err)); exit(1); } } ;
# 106 "./code/memcpy.cu"
offsetHost += voxelsPerSlice;
# 107 "./code/memcpy.cu"
offsetDevice += pitchedBytesPerSlice;
# 108 "./code/memcpy.cu"
}
# 110 "./code/memcpy.cu"
{ cudaError err = (cudaFree(temp)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 110, cudaGetErrorString(err)); exit(1); } } ; ;
# 111 "./code/memcpy.cu"
return device;
# 112 "./code/memcpy.cu"
}
# 122 "./code/memcpy.cu"
template< class T> void CastVolumeDeviceToHost(T *host, const cudaPitchedPtr device, uint width, uint height, uint depth)
# 123 "./code/memcpy.cu"
{
# 124 "./code/memcpy.cu"
T *temp = (0);
# 125 "./code/memcpy.cu"
const uint voxelsPerSlice = (width * height);
# 126 "./code/memcpy.cu"
const size_t nrOfBytesTemp = (voxelsPerSlice * sizeof(T));
# 127 "./code/memcpy.cu"
{ cudaError err = cudaMalloc((void **)(&temp), nrOfBytesTemp); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 127, cudaGetErrorString(err)); exit(1); } } ; ;
# 129 "./code/memcpy.cu"
uint dimX = min(PowTwoDivider(width), 64);
# 130 "./code/memcpy.cu"
dim3 dimBlock(dimX, min(PowTwoDivider(height), (512) / dimX));
# 131 "./code/memcpy.cu"
dim3 dimGrid(width / (dimBlock.x), height / (dimBlock.y));
# 132 "./code/memcpy.cu"
const size_t pitchedBytesPerSlice = ((device.pitch) * (device.ysize));
# 133 "./code/memcpy.cu"
size_t offsetHost = (0);
# 134 "./code/memcpy.cu"
size_t offsetDevice = (0);
# 136 "./code/memcpy.cu"
for (uint slice = (0); slice < depth; slice++)
# 137 "./code/memcpy.cu"
{
# 138 "./code/memcpy.cu"
cudaConfigureCall(dimGrid, dimBlock) ? ((void)0) : (CopyCastBack< T> )(temp, ((const uchar *)(device.ptr)) + offsetDevice, (uint)(device.pitch), width);
# 139 "./code/memcpy.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "Cast kernel failed", "./code/memcpy.cu", 139, cudaGetErrorString(err)); exit(1); } } ;
# 140 "./code/memcpy.cu"
{ cudaError err = (cudaMemcpy(host + offsetHost, temp, nrOfBytesTemp, cudaMemcpyDeviceToHost)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 140, cudaGetErrorString(err)); exit(1); } } ; ;
# 141 "./code/memcpy.cu"
offsetHost += voxelsPerSlice;
# 142 "./code/memcpy.cu"
offsetDevice += pitchedBytesPerSlice;
# 143 "./code/memcpy.cu"
}
# 145 "./code/memcpy.cu"
{ cudaError err = (cudaFree(temp)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 145, cudaGetErrorString(err)); exit(1); } } ; ;
# 146 "./code/memcpy.cu"
}
# 159 "./code/memcpy.cu"
extern "C" cudaPitchedPtr CopyVolumeHostToDevice(const float *host, uint width, uint height, uint depth)
# 160 "./code/memcpy.cu"
{
# 161 "./code/memcpy.cu"
cudaPitchedPtr device = {(0)};
# 162 "./code/memcpy.cu"
const cudaExtent extent = (make_cudaExtent(width * sizeof(float), height, depth));
# 163 "./code/memcpy.cu"
{ cudaError err = cudaMalloc3D(&device, extent); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 163, cudaGetErrorString(err)); exit(1); } } ; ;
# 164 "./code/memcpy.cu"
cudaMemcpy3DParms p = {(0)};
# 165 "./code/memcpy.cu"
(p.srcPtr) = make_cudaPitchedPtr((void *)host, width * sizeof(float), width, height);
# 166 "./code/memcpy.cu"
(p.dstPtr) = device;
# 167 "./code/memcpy.cu"
(p.extent) = extent;
# 168 "./code/memcpy.cu"
(p.kind) = cudaMemcpyHostToDevice;
# 169 "./code/memcpy.cu"
{ cudaError err = cudaMemcpy3D(&p); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 169, cudaGetErrorString(err)); exit(1); } } ; ;
# 170 "./code/memcpy.cu"
return device;
# 171 "./code/memcpy.cu"
}
# 181 "./code/memcpy.cu"
extern "C" void CopyVolumeDeviceToHost(float *host, const cudaPitchedPtr device, uint width, uint height, uint depth)
# 182 "./code/memcpy.cu"
{
# 183 "./code/memcpy.cu"
const cudaExtent extent = (make_cudaExtent(width * sizeof(float), height, depth));
# 184 "./code/memcpy.cu"
cudaMemcpy3DParms p = {(0)};
# 185 "./code/memcpy.cu"
(p.srcPtr) = device;
# 186 "./code/memcpy.cu"
(p.dstPtr) = make_cudaPitchedPtr((void *)host, width * sizeof(float), width, height);
# 187 "./code/memcpy.cu"
(p.extent) = extent;
# 188 "./code/memcpy.cu"
(p.kind) = cudaMemcpyDeviceToHost;
# 189 "./code/memcpy.cu"
{ cudaError err = cudaMemcpy3D(&p); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 189, cudaGetErrorString(err)); exit(1); } } ; ;
# 190 "./code/memcpy.cu"
{ cudaError err = cudaFree(device.ptr); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 190, cudaGetErrorString(err)); exit(1); } } ; ;
# 191 "./code/memcpy.cu"
}
# 200 "./code/memcpy.cu"
template< class T, cudaTextureReadMode mode> void CreateTextureFromVolume(texture< T, 3, mode> *
# 201 "./code/memcpy.cu"
tex, cudaArray **texArray, const cudaPitchedPtr
# 202 "./code/memcpy.cu"
volume, cudaExtent extent, bool onDevice)
# 203 "./code/memcpy.cu"
{
# 204 "./code/memcpy.cu"
cudaChannelFormatDesc channelDesc = cudaCreateChannelDesc< T> ();
# 205 "./code/memcpy.cu"
if ((*texArray) == (0)) { cudaError err = cudaMalloc3DArray(texArray, &channelDesc, extent); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 205, cudaGetErrorString(err)); exit(1); } } ; ;
# 207 "./code/memcpy.cu"
cudaMemcpy3DParms p = {(0)};
# 208 "./code/memcpy.cu"
(p.extent) = extent;
# 209 "./code/memcpy.cu"
(p.srcPtr) = volume;
# 210 "./code/memcpy.cu"
(p.dstArray) = (*texArray);
# 211 "./code/memcpy.cu"
(p.kind) = (onDevice ? cudaMemcpyDeviceToDevice : cudaMemcpyHostToDevice);
# 212 "./code/memcpy.cu"
{ cudaError err = cudaMemcpy3D(&p); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 212, cudaGetErrorString(err)); exit(1); } } ; ;
# 214 "./code/memcpy.cu"
{ cudaError err = (cudaBindTextureToArray(*tex, *texArray, channelDesc)); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error in file \'%s\' in line %i : %s.\n", "./code/memcpy.cu", 214, cudaGetErrorString(err)); exit(1); } } ; ;
# 215 "./code/memcpy.cu"
(tex->normalized) = false;
# 216 "./code/memcpy.cu"
(tex->filterMode) = cudaFilterModeLinear;
# 217 "./code/memcpy.cu"
}
# 226 "./code/memcpy.cu"
template< class T, cudaTextureReadMode mode> void CreateTextureFromVolume(texture< T, 3, mode> *
# 227 "./code/memcpy.cu"
tex, cudaArray **texArray, const T *
# 228 "./code/memcpy.cu"
volume, cudaExtent extent, bool onDevice)
# 229 "./code/memcpy.cu"
{
# 230 "./code/memcpy.cu"
cudaPitchedPtr ptr = make_cudaPitchedPtr((void *)volume, (extent.width) * sizeof(T), extent.width, extent.height);
# 231 "./code/memcpy.cu"
CreateTextureFromVolume(tex, texArray, ptr, extent, onDevice);
# 232 "./code/memcpy.cu"
}
# 47 "./code/internal/cubicPrefilter_kernel.cu"
template< class floatN> __attribute__((unused)) floatN
# 48 "./code/internal/cubicPrefilter_kernel.cu"
InitialCausalCoefficient(floatN *
# 49 "./code/internal/cubicPrefilter_kernel.cu"
c, uint
# 50 "./code/internal/cubicPrefilter_kernel.cu"
DataLength, int
# 51 "./code/internal/cubicPrefilter_kernel.cu"
step)
# 52 "./code/internal/cubicPrefilter_kernel.cu"
{int volatile ___ = 1;(void)c;(void)DataLength;(void)step;
# 65 "./code/internal/cubicPrefilter_kernel.cu"
exit(___);}
# 67 "./code/internal/cubicPrefilter_kernel.cu"
template< class floatN> __attribute__((unused)) floatN
# 68 "./code/internal/cubicPrefilter_kernel.cu"
InitialAntiCausalCoefficient(floatN *
# 69 "./code/internal/cubicPrefilter_kernel.cu"
c, uint
# 70 "./code/internal/cubicPrefilter_kernel.cu"
DataLength, int
# 71 "./code/internal/cubicPrefilter_kernel.cu"
step)
# 72 "./code/internal/cubicPrefilter_kernel.cu"
{int volatile ___ = 1;(void)c;(void)DataLength;(void)step;
# 75 "./code/internal/cubicPrefilter_kernel.cu"
exit(___);}
# 77 "./code/internal/cubicPrefilter_kernel.cu"
template< class floatN> __attribute__((unused)) void
# 78 "./code/internal/cubicPrefilter_kernel.cu"
ConvertToInterpolationCoefficients(floatN *
# 79 "./code/internal/cubicPrefilter_kernel.cu"
coeffs, uint
# 80 "./code/internal/cubicPrefilter_kernel.cu"
DataLength, int
# 81 "./code/internal/cubicPrefilter_kernel.cu"
step)
# 82 "./code/internal/cubicPrefilter_kernel.cu"
{int volatile ___ = 1;(void)coeffs;(void)DataLength;(void)step;
# 102 "./code/internal/cubicPrefilter_kernel.cu"
exit(___);}
# 44 "./code/cubicPrefilter3D.cu"
template< class floatN> static void
# 45 "./code/cubicPrefilter3D.cu"
__wrapper__device_stub_SamplesToCoefficients3DX(floatN *&
# 46 "./code/cubicPrefilter3D.cu"
volume, uint &
# 47 "./code/cubicPrefilter3D.cu"
pitch, uint &
# 48 "./code/cubicPrefilter3D.cu"
width, uint &
# 49 "./code/cubicPrefilter3D.cu"
height, uint &
# 50 "./code/cubicPrefilter3D.cu"
depth) {exit(1);}
# 44 "./code/cubicPrefilter3D.cu"
template< class floatN> void
# 45 "./code/cubicPrefilter3D.cu"
SamplesToCoefficients3DX(floatN *
# 46 "./code/cubicPrefilter3D.cu"
volume, uint
# 47 "./code/cubicPrefilter3D.cu"
pitch, uint
# 48 "./code/cubicPrefilter3D.cu"
width, uint
# 49 "./code/cubicPrefilter3D.cu"
height, uint
# 50 "./code/cubicPrefilter3D.cu"
depth)
# 51 "./code/cubicPrefilter3D.cu"
{__wrapper__device_stub_SamplesToCoefficients3DX<floatN>(volume,pitch,width,height,depth);
# 59 "./code/cubicPrefilter3D.cu"
return;}
# 61 "./code/cubicPrefilter3D.cu"
template< class floatN> static void
# 62 "./code/cubicPrefilter3D.cu"
__wrapper__device_stub_SamplesToCoefficients3DY(floatN *&
# 63 "./code/cubicPrefilter3D.cu"
volume, uint &
# 64 "./code/cubicPrefilter3D.cu"
pitch, uint &
# 65 "./code/cubicPrefilter3D.cu"
width, uint &
# 66 "./code/cubicPrefilter3D.cu"
height, uint &
# 67 "./code/cubicPrefilter3D.cu"
depth) {exit(1);}
# 61 "./code/cubicPrefilter3D.cu"
template< class floatN> void
# 62 "./code/cubicPrefilter3D.cu"
SamplesToCoefficients3DY(floatN *
# 63 "./code/cubicPrefilter3D.cu"
volume, uint
# 64 "./code/cubicPrefilter3D.cu"
pitch, uint
# 65 "./code/cubicPrefilter3D.cu"
width, uint
# 66 "./code/cubicPrefilter3D.cu"
height, uint
# 67 "./code/cubicPrefilter3D.cu"
depth)
# 68 "./code/cubicPrefilter3D.cu"
{__wrapper__device_stub_SamplesToCoefficients3DY<floatN>(volume,pitch,width,height,depth);
# 76 "./code/cubicPrefilter3D.cu"
return;}
# 78 "./code/cubicPrefilter3D.cu"
template< class floatN> static void
# 79 "./code/cubicPrefilter3D.cu"
__wrapper__device_stub_SamplesToCoefficients3DZ(floatN *&
# 80 "./code/cubicPrefilter3D.cu"
volume, uint &
# 81 "./code/cubicPrefilter3D.cu"
pitch, uint &
# 82 "./code/cubicPrefilter3D.cu"
width, uint &
# 83 "./code/cubicPrefilter3D.cu"
height, uint &
# 84 "./code/cubicPrefilter3D.cu"
depth) {exit(1);}
# 78 "./code/cubicPrefilter3D.cu"
template< class floatN> void
# 79 "./code/cubicPrefilter3D.cu"
SamplesToCoefficients3DZ(floatN *
# 80 "./code/cubicPrefilter3D.cu"
volume, uint
# 81 "./code/cubicPrefilter3D.cu"
pitch, uint
# 82 "./code/cubicPrefilter3D.cu"
width, uint
# 83 "./code/cubicPrefilter3D.cu"
height, uint
# 84 "./code/cubicPrefilter3D.cu"
depth)
# 85 "./code/cubicPrefilter3D.cu"
{__wrapper__device_stub_SamplesToCoefficients3DZ<floatN>(volume,pitch,width,height,depth);
# 94 "./code/cubicPrefilter3D.cu"
return;}
# 106 "./code/cubicPrefilter3D.cu"
template< class floatN> void
# 107 "./code/cubicPrefilter3D.cu"
CubicBSplinePrefilter3D(floatN *volume, uint pitch, uint width, uint height, uint depth)
# 108 "./code/cubicPrefilter3D.cu"
{
# 110 "./code/cubicPrefilter3D.cu"
uint dimX = min(min(PowTwoDivider(width), PowTwoDivider(height)), 64);
# 111 "./code/cubicPrefilter3D.cu"
uint dimY = min(min(PowTwoDivider(depth), PowTwoDivider(height)), (512) / dimX);
# 112 "./code/cubicPrefilter3D.cu"
dim3 dimBlock(dimX, dimY);
# 115 "./code/cubicPrefilter3D.cu"
dim3 dimGridX(height / (dimBlock.x), depth / (dimBlock.y));
# 116 "./code/cubicPrefilter3D.cu"
cudaConfigureCall(dimGridX, dimBlock) ? ((void)0) : (SamplesToCoefficients3DX< floatN> )(volume, pitch, width, height, depth);
# 117 "./code/cubicPrefilter3D.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "SamplesToCoefficients3DX kernel failed", "./code/cubicPrefilter3D.cu", 117, cudaGetErrorString(err)); exit(1); } } ;
# 119 "./code/cubicPrefilter3D.cu"
dim3 dimGridY(width / (dimBlock.x), depth / (dimBlock.y));
# 120 "./code/cubicPrefilter3D.cu"
cudaConfigureCall(dimGridY, dimBlock) ? ((void)0) : (SamplesToCoefficients3DY< floatN> )(volume, pitch, width, height, depth);
# 121 "./code/cubicPrefilter3D.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "SamplesToCoefficients3DY kernel failed", "./code/cubicPrefilter3D.cu", 121, cudaGetErrorString(err)); exit(1); } } ;
# 123 "./code/cubicPrefilter3D.cu"
dim3 dimGridZ(width / (dimBlock.x), height / (dimBlock.y));
# 124 "./code/cubicPrefilter3D.cu"
cudaConfigureCall(dimGridZ, dimBlock) ? ((void)0) : (SamplesToCoefficients3DZ< floatN> )(volume, pitch, width, height, depth);
# 125 "./code/cubicPrefilter3D.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "SamplesToCoefficients3DZ kernel failed", "./code/cubicPrefilter3D.cu", 125, cudaGetErrorString(err)); exit(1); } } ;
# 126 "./code/cubicPrefilter3D.cu"
}
# 135 "./code/cubicPrefilter3D.cu"
template< class floatN> void
# 136 "./code/cubicPrefilter3D.cu"
CubicBSplinePrefilter3DTimer(floatN *volume, uint pitch, uint width, uint height, uint depth)
# 137 "./code/cubicPrefilter3D.cu"
{
# 138 "./code/cubicPrefilter3D.cu"
mexPrintf("\nCubic B-Spline Prefilter timer:\n");
# 139 "./code/cubicPrefilter3D.cu"
uint hTimer;
# 140 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutCreateTimer(&hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 140); exit(1); } ;
# 141 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutResetTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 141); exit(1); } ;
# 142 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutStartTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 142); exit(1); } ;
# 145 "./code/cubicPrefilter3D.cu"
uint dimX = min(min(PowTwoDivider(width), PowTwoDivider(height)), 64);
# 146 "./code/cubicPrefilter3D.cu"
uint dimY = min(min(PowTwoDivider(depth), PowTwoDivider(height)), (512) / dimX);
# 147 "./code/cubicPrefilter3D.cu"
dim3 dimBlock(dimX, dimY);
# 150 "./code/cubicPrefilter3D.cu"
dim3 dimGridX(height / (dimBlock.x), depth / (dimBlock.y));
# 151 "./code/cubicPrefilter3D.cu"
cudaConfigureCall(dimGridX, dimBlock) ? ((void)0) : (SamplesToCoefficients3DX< floatN> )(volume, pitch, width, height, depth);
# 152 "./code/cubicPrefilter3D.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "SamplesToCoefficients3DX kernel failed", "./code/cubicPrefilter3D.cu", 152, cudaGetErrorString(err)); exit(1); } } ;
# 154 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutStopTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 154); exit(1); } ;
# 155 "./code/cubicPrefilter3D.cu"
double timerValueX = (cutGetTimerValue(hTimer));
# 156 "./code/cubicPrefilter3D.cu"
mexPrintf("x-direction : %f msec\n", timerValueX);
# 157 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutResetTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 157); exit(1); } ;
# 158 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutStartTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 158); exit(1); } ;
# 160 "./code/cubicPrefilter3D.cu"
dim3 dimGridY(width / (dimBlock.x), depth / (dimBlock.y));
# 161 "./code/cubicPrefilter3D.cu"
cudaConfigureCall(dimGridY, dimBlock) ? ((void)0) : (SamplesToCoefficients3DY< floatN> )(volume, pitch, width, height, depth);
# 162 "./code/cubicPrefilter3D.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "SamplesToCoefficients3DY kernel failed", "./code/cubicPrefilter3D.cu", 162, cudaGetErrorString(err)); exit(1); } } ;
# 164 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutStopTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 164); exit(1); } ;
# 165 "./code/cubicPrefilter3D.cu"
double timerValueY = (cutGetTimerValue(hTimer));
# 166 "./code/cubicPrefilter3D.cu"
mexPrintf("y-direction : %f msec\n", timerValueY);
# 167 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutResetTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 167); exit(1); } ;
# 168 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutStartTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 168); exit(1); } ;
# 170 "./code/cubicPrefilter3D.cu"
dim3 dimGridZ(width / (dimBlock.x), height / (dimBlock.y));
# 171 "./code/cubicPrefilter3D.cu"
cudaConfigureCall(dimGridZ, dimBlock) ? ((void)0) : (SamplesToCoefficients3DZ< floatN> )(volume, pitch, width, height, depth);
# 172 "./code/cubicPrefilter3D.cu"
{ cudaError_t err = cudaGetLastError(); if ((cudaSuccess) != err) { fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i : %s.\n", "SamplesToCoefficients3DZ kernel failed", "./code/cubicPrefilter3D.cu", 172, cudaGetErrorString(err)); exit(1); } } ;
# 174 "./code/cubicPrefilter3D.cu"
if ((CUTTrue) != (cutStopTimer(hTimer))) { fprintf(stderr, "Cut error in file \'%s\' in line %i.\n", "./code/cubicPrefilter3D.cu", 174); exit(1); } ;
# 175 "./code/cubicPrefilter3D.cu"
double timerValueZ = (cutGetTimerValue(hTimer));
# 176 "./code/cubicPrefilter3D.cu"
mexPrintf("z-direction : %f msec\n", timerValueZ);
# 177 "./code/cubicPrefilter3D.cu"
mexPrintf("total : %f msec\n\n", (timerValueX + timerValueY) + timerValueZ);
# 178 "./code/cubicPrefilter3D.cu"
}
# 60 "./code/internal/cutil_math_bugfixes.h"
extern "C" { typedef unsigned uint; }
# 61 "./code/internal/cutil_math_bugfixes.h"
extern "C" { typedef unsigned short ushort; }
# 91 "./code/internal/cutil_math_bugfixes.h"
inline float lerp(float a, float b, float t)
# 92 "./code/internal/cutil_math_bugfixes.h"
{
# 93 "./code/internal/cutil_math_bugfixes.h"
return a + (t * (b - a));
# 94 "./code/internal/cutil_math_bugfixes.h"
}
# 97 "./code/internal/cutil_math_bugfixes.h"
inline float clamp(float f, float a, float b)
# 98 "./code/internal/cutil_math_bugfixes.h"
{
# 99 "./code/internal/cutil_math_bugfixes.h"
return fmaxf(a, fminf(f, b));
# 100 "./code/internal/cutil_math_bugfixes.h"
}
# 106 "./code/internal/cutil_math_bugfixes.h"
inline int2 operator+(int2 a, int2 b)
# 107 "./code/internal/cutil_math_bugfixes.h"
{
# 108 "./code/internal/cutil_math_bugfixes.h"
return make_int2((a.x) + (b.x), (a.y) + (b.y));
# 109 "./code/internal/cutil_math_bugfixes.h"
}
# 110 "./code/internal/cutil_math_bugfixes.h"
inline void operator+=(int2 &a, int2 b)
# 111 "./code/internal/cutil_math_bugfixes.h"
{
# 112 "./code/internal/cutil_math_bugfixes.h"
(a.x) += (b.x); (a.y) += (b.y);
# 113 "./code/internal/cutil_math_bugfixes.h"
}
# 116 "./code/internal/cutil_math_bugfixes.h"
inline int2 operator-(int2 a, int2 b)
# 117 "./code/internal/cutil_math_bugfixes.h"
{
# 118 "./code/internal/cutil_math_bugfixes.h"
return make_int2((a.x) - (b.x), (a.y) - (b.y));
# 119 "./code/internal/cutil_math_bugfixes.h"
}
# 120 "./code/internal/cutil_math_bugfixes.h"
inline void operator-=(int2 &a, int2 b)
# 121 "./code/internal/cutil_math_bugfixes.h"
{
# 122 "./code/internal/cutil_math_bugfixes.h"
(a.x) -= (b.x); (a.y) -= (b.y);
# 123 "./code/internal/cutil_math_bugfixes.h"
}
# 126 "./code/internal/cutil_math_bugfixes.h"
inline int2 operator*(int2 a, int2 b)
# 127 "./code/internal/cutil_math_bugfixes.h"
{
# 128 "./code/internal/cutil_math_bugfixes.h"
return make_int2((a.x) * (b.x), (a.y) * (b.y));
# 129 "./code/internal/cutil_math_bugfixes.h"
}
# 130 "./code/internal/cutil_math_bugfixes.h"
inline int2 operator*(int2 a, int s)
# 131 "./code/internal/cutil_math_bugfixes.h"
{
# 132 "./code/internal/cutil_math_bugfixes.h"
return make_int2((a.x) * s, (a.y) * s);
# 133 "./code/internal/cutil_math_bugfixes.h"
}
# 134 "./code/internal/cutil_math_bugfixes.h"
inline int2 operator*(int s, int2 a)
# 135 "./code/internal/cutil_math_bugfixes.h"
{
# 136 "./code/internal/cutil_math_bugfixes.h"
return make_int2((a.x) * s, (a.y) * s);
# 137 "./code/internal/cutil_math_bugfixes.h"
}
# 138 "./code/internal/cutil_math_bugfixes.h"
inline void operator*=(int2 &a, int s)
# 139 "./code/internal/cutil_math_bugfixes.h"
{
# 140 "./code/internal/cutil_math_bugfixes.h"
(a.x) *= s; (a.y) *= s;
# 141 "./code/internal/cutil_math_bugfixes.h"
}
# 147 "./code/internal/cutil_math_bugfixes.h"
inline float2 make_float2(float s)
# 148 "./code/internal/cutil_math_bugfixes.h"
{
# 149 "./code/internal/cutil_math_bugfixes.h"
return make_float2(s, s);
# 150 "./code/internal/cutil_math_bugfixes.h"
}
# 151 "./code/internal/cutil_math_bugfixes.h"
inline float2 make_float2(int2 a)
# 152 "./code/internal/cutil_math_bugfixes.h"
{
# 153 "./code/internal/cutil_math_bugfixes.h"
return make_float2((float)(a.x), (float)(a.y));
# 154 "./code/internal/cutil_math_bugfixes.h"
}
# 157 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator+(float2 a, float2 b)
# 158 "./code/internal/cutil_math_bugfixes.h"
{
# 159 "./code/internal/cutil_math_bugfixes.h"
return make_float2((a.x) + (b.x), (a.y) + (b.y));
# 160 "./code/internal/cutil_math_bugfixes.h"
}
# 161 "./code/internal/cutil_math_bugfixes.h"
inline void operator+=(float2 &a, float2 b)
# 162 "./code/internal/cutil_math_bugfixes.h"
{
# 163 "./code/internal/cutil_math_bugfixes.h"
(a.x) += (b.x); (a.y) += (b.y);
# 164 "./code/internal/cutil_math_bugfixes.h"
}
# 167 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator-(float2 a, float2 b)
# 168 "./code/internal/cutil_math_bugfixes.h"
{
# 169 "./code/internal/cutil_math_bugfixes.h"
return make_float2((a.x) - (b.x), (a.y) - (b.y));
# 170 "./code/internal/cutil_math_bugfixes.h"
}
# 171 "./code/internal/cutil_math_bugfixes.h"
inline void operator-=(float2 &a, float2 b)
# 172 "./code/internal/cutil_math_bugfixes.h"
{
# 173 "./code/internal/cutil_math_bugfixes.h"
(a.x) -= (b.x); (a.y) -= (b.y);
# 174 "./code/internal/cutil_math_bugfixes.h"
}
# 177 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator*(float2 a, float2 b)
# 178 "./code/internal/cutil_math_bugfixes.h"
{
# 179 "./code/internal/cutil_math_bugfixes.h"
return make_float2((a.x) * (b.x), (a.y) * (b.y));
# 180 "./code/internal/cutil_math_bugfixes.h"
}
# 181 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator*(float2 a, float s)
# 182 "./code/internal/cutil_math_bugfixes.h"
{
# 183 "./code/internal/cutil_math_bugfixes.h"
return make_float2((a.x) * s, (a.y) * s);
# 184 "./code/internal/cutil_math_bugfixes.h"
}
# 185 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator*(float s, float2 a)
# 186 "./code/internal/cutil_math_bugfixes.h"
{
# 187 "./code/internal/cutil_math_bugfixes.h"
return make_float2((a.x) * s, (a.y) * s);
# 188 "./code/internal/cutil_math_bugfixes.h"
}
# 189 "./code/internal/cutil_math_bugfixes.h"
inline void operator*=(float2 &a, float s)
# 190 "./code/internal/cutil_math_bugfixes.h"
{
# 191 "./code/internal/cutil_math_bugfixes.h"
(a.x) *= s; (a.y) *= s;
# 192 "./code/internal/cutil_math_bugfixes.h"
}
# 195 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator/(float2 a, float2 b)
# 196 "./code/internal/cutil_math_bugfixes.h"
{
# 197 "./code/internal/cutil_math_bugfixes.h"
return make_float2((a.x) / (b.x), (a.y) / (b.y));
# 198 "./code/internal/cutil_math_bugfixes.h"
}
# 199 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator/(float2 a, float s)
# 200 "./code/internal/cutil_math_bugfixes.h"
{
# 201 "./code/internal/cutil_math_bugfixes.h"
float inv = ((1.0F) / s);
# 202 "./code/internal/cutil_math_bugfixes.h"
return (a * inv);
# 203 "./code/internal/cutil_math_bugfixes.h"
}
# 204 "./code/internal/cutil_math_bugfixes.h"
inline float2 operator/(float s, float2 a)
# 205 "./code/internal/cutil_math_bugfixes.h"
{
# 208 "./code/internal/cutil_math_bugfixes.h"
return make_float2(s / (a.x), s / (a.y));
# 209 "./code/internal/cutil_math_bugfixes.h"
}
# 210 "./code/internal/cutil_math_bugfixes.h"
inline void operator/=(float2 &a, float s)
# 211 "./code/internal/cutil_math_bugfixes.h"
{
# 212 "./code/internal/cutil_math_bugfixes.h"
float inv = ((1.0F) / s);
# 213 "./code/internal/cutil_math_bugfixes.h"
((a) *= inv);
# 214 "./code/internal/cutil_math_bugfixes.h"
}
# 217 "./code/internal/cutil_math_bugfixes.h"
inline float2 lerp(float2 a, float2 b, float t)
# 218 "./code/internal/cutil_math_bugfixes.h"
{
# 219 "./code/internal/cutil_math_bugfixes.h"
return (a + ((t * ((b - a)))));
# 220 "./code/internal/cutil_math_bugfixes.h"
}
# 223 "./code/internal/cutil_math_bugfixes.h"
inline float2 clamp(float2 v, float a, float b)
# 224 "./code/internal/cutil_math_bugfixes.h"
{
# 225 "./code/internal/cutil_math_bugfixes.h"
return make_float2(clamp(v.x, a, b), clamp(v.y, a, b));
# 226 "./code/internal/cutil_math_bugfixes.h"
}
# 228 "./code/internal/cutil_math_bugfixes.h"
inline float2 clamp(float2 v, float2 a, float2 b)
# 229 "./code/internal/cutil_math_bugfixes.h"
{
# 230 "./code/internal/cutil_math_bugfixes.h"
return make_float2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
# 231 "./code/internal/cutil_math_bugfixes.h"
}
# 234 "./code/internal/cutil_math_bugfixes.h"
inline float dot(float2 a, float2 b)
# 235 "./code/internal/cutil_math_bugfixes.h"
{
# 236 "./code/internal/cutil_math_bugfixes.h"
return ((a.x) * (b.x)) + ((a.y) * (b.y));
# 237 "./code/internal/cutil_math_bugfixes.h"
}
# 240 "./code/internal/cutil_math_bugfixes.h"
inline float length(float2 v)
# 241 "./code/internal/cutil_math_bugfixes.h"
{
# 242 "./code/internal/cutil_math_bugfixes.h"
return sqrtf(dot(v, v));
# 243 "./code/internal/cutil_math_bugfixes.h"
}
# 246 "./code/internal/cutil_math_bugfixes.h"
inline float2 normalize(float2 v)
# 247 "./code/internal/cutil_math_bugfixes.h"
{
# 248 "./code/internal/cutil_math_bugfixes.h"
float invLen = ((1.0F) / sqrtf(dot(v, v)));
# 249 "./code/internal/cutil_math_bugfixes.h"
return (v * invLen);
# 250 "./code/internal/cutil_math_bugfixes.h"
}
# 253 "./code/internal/cutil_math_bugfixes.h"
inline float2 floor(const float2 v)
# 254 "./code/internal/cutil_math_bugfixes.h"
{
# 255 "./code/internal/cutil_math_bugfixes.h"
return make_float2(floor(v.x), floor(v.y));
# 256 "./code/internal/cutil_math_bugfixes.h"
}
# 259 "./code/internal/cutil_math_bugfixes.h"
inline float2 reflect(float2 i, float2 n)
# 260 "./code/internal/cutil_math_bugfixes.h"
{
# 261 "./code/internal/cutil_math_bugfixes.h"
return (i - ((((((2.0F)) * n)) * (dot(n, i)))));
# 262 "./code/internal/cutil_math_bugfixes.h"
}
# 268 "./code/internal/cutil_math_bugfixes.h"
inline float3 make_float3(float s)
# 269 "./code/internal/cutil_math_bugfixes.h"
{
# 270 "./code/internal/cutil_math_bugfixes.h"
return make_float3(s, s, s);
# 271 "./code/internal/cutil_math_bugfixes.h"
}
# 272 "./code/internal/cutil_math_bugfixes.h"
inline float3 make_float3(float2 a)
# 273 "./code/internal/cutil_math_bugfixes.h"
{
# 274 "./code/internal/cutil_math_bugfixes.h"
return make_float3(a.x, a.y, (0.0F));
# 275 "./code/internal/cutil_math_bugfixes.h"
}
# 276 "./code/internal/cutil_math_bugfixes.h"
inline float3 make_float3(float2 a, float s)
# 277 "./code/internal/cutil_math_bugfixes.h"
{
# 278 "./code/internal/cutil_math_bugfixes.h"
return make_float3(a.x, a.y, s);
# 279 "./code/internal/cutil_math_bugfixes.h"
}
# 280 "./code/internal/cutil_math_bugfixes.h"
inline float3 make_float3(float4 a)
# 281 "./code/internal/cutil_math_bugfixes.h"
{
# 282 "./code/internal/cutil_math_bugfixes.h"
return make_float3(a.x, a.y, a.z);
# 283 "./code/internal/cutil_math_bugfixes.h"
}
# 284 "./code/internal/cutil_math_bugfixes.h"
inline float3 make_float3(int3 a)
# 285 "./code/internal/cutil_math_bugfixes.h"
{
# 286 "./code/internal/cutil_math_bugfixes.h"
return make_float3((float)(a.x), (float)(a.y), (float)(a.z));
# 287 "./code/internal/cutil_math_bugfixes.h"
}
# 290 "./code/internal/cutil_math_bugfixes.h"
static inline float3 fminf(float3 a, float3 b)
# 291 "./code/internal/cutil_math_bugfixes.h"
{
# 292 "./code/internal/cutil_math_bugfixes.h"
return make_float3(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z));
# 293 "./code/internal/cutil_math_bugfixes.h"
}
# 296 "./code/internal/cutil_math_bugfixes.h"
static inline float3 fmaxf(float3 a, float3 b)
# 297 "./code/internal/cutil_math_bugfixes.h"
{
# 298 "./code/internal/cutil_math_bugfixes.h"
return make_float3(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z));
# 299 "./code/internal/cutil_math_bugfixes.h"
}
# 302 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator+(float3 a, float3 b)
# 303 "./code/internal/cutil_math_bugfixes.h"
{
# 304 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) + (b.x), (a.y) + (b.y), (a.z) + (b.z));
# 305 "./code/internal/cutil_math_bugfixes.h"
}
# 306 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator+(float3 a, float b)
# 307 "./code/internal/cutil_math_bugfixes.h"
{
# 308 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) + b, (a.y) + b, (a.z) + b);
# 309 "./code/internal/cutil_math_bugfixes.h"
}
# 310 "./code/internal/cutil_math_bugfixes.h"
inline void operator+=(float3 &a, float3 b)
# 311 "./code/internal/cutil_math_bugfixes.h"
{
# 312 "./code/internal/cutil_math_bugfixes.h"
(a.x) += (b.x); (a.y) += (b.y); (a.z) += (b.z);
# 313 "./code/internal/cutil_math_bugfixes.h"
}
# 316 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator-(float3 a, float3 b)
# 317 "./code/internal/cutil_math_bugfixes.h"
{
# 318 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) - (b.x), (a.y) - (b.y), (a.z) - (b.z));
# 319 "./code/internal/cutil_math_bugfixes.h"
}
# 320 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator-(float3 a, float b)
# 321 "./code/internal/cutil_math_bugfixes.h"
{
# 322 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) - b, (a.y) - b, (a.z) - b);
# 323 "./code/internal/cutil_math_bugfixes.h"
}
# 324 "./code/internal/cutil_math_bugfixes.h"
inline void operator-=(float3 &a, float3 b)
# 325 "./code/internal/cutil_math_bugfixes.h"
{
# 326 "./code/internal/cutil_math_bugfixes.h"
(a.x) -= (b.x); (a.y) -= (b.y); (a.z) -= (b.z);
# 327 "./code/internal/cutil_math_bugfixes.h"
}
# 330 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator*(float3 a, float3 b)
# 331 "./code/internal/cutil_math_bugfixes.h"
{
# 332 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) * (b.x), (a.y) * (b.y), (a.z) * (b.z));
# 333 "./code/internal/cutil_math_bugfixes.h"
}
# 334 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator*(float3 a, float s)
# 335 "./code/internal/cutil_math_bugfixes.h"
{
# 336 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) * s, (a.y) * s, (a.z) * s);
# 337 "./code/internal/cutil_math_bugfixes.h"
}
# 338 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator*(float s, float3 a)
# 339 "./code/internal/cutil_math_bugfixes.h"
{
# 340 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) * s, (a.y) * s, (a.z) * s);
# 341 "./code/internal/cutil_math_bugfixes.h"
}
# 342 "./code/internal/cutil_math_bugfixes.h"
inline void operator*=(float3 &a, float s)
# 343 "./code/internal/cutil_math_bugfixes.h"
{
# 344 "./code/internal/cutil_math_bugfixes.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 345 "./code/internal/cutil_math_bugfixes.h"
}
# 348 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator/(float3 a, float3 b)
# 349 "./code/internal/cutil_math_bugfixes.h"
{
# 350 "./code/internal/cutil_math_bugfixes.h"
return make_float3((a.x) / (b.x), (a.y) / (b.y), (a.z) / (b.z));
# 351 "./code/internal/cutil_math_bugfixes.h"
}
# 352 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator/(float3 a, float s)
# 353 "./code/internal/cutil_math_bugfixes.h"
{
# 354 "./code/internal/cutil_math_bugfixes.h"
float inv = ((1.0F) / s);
# 355 "./code/internal/cutil_math_bugfixes.h"
return (a * inv);
# 356 "./code/internal/cutil_math_bugfixes.h"
}
# 357 "./code/internal/cutil_math_bugfixes.h"
inline float3 operator/(float s, float3 a)
# 358 "./code/internal/cutil_math_bugfixes.h"
{
# 361 "./code/internal/cutil_math_bugfixes.h"
return make_float3(s / (a.x), s / (a.y), s / (a.z));
# 362 "./code/internal/cutil_math_bugfixes.h"
}
# 363 "./code/internal/cutil_math_bugfixes.h"
inline void operator/=(float3 &a, float s)
# 364 "./code/internal/cutil_math_bugfixes.h"
{
# 365 "./code/internal/cutil_math_bugfixes.h"
float inv = ((1.0F) / s);
# 366 "./code/internal/cutil_math_bugfixes.h"
((a) *= inv);
# 367 "./code/internal/cutil_math_bugfixes.h"
}
# 370 "./code/internal/cutil_math_bugfixes.h"
inline float3 lerp(float3 a, float3 b, float t)
# 371 "./code/internal/cutil_math_bugfixes.h"
{
# 372 "./code/internal/cutil_math_bugfixes.h"
return (a + ((t * ((b - a)))));
# 373 "./code/internal/cutil_math_bugfixes.h"
}
# 376 "./code/internal/cutil_math_bugfixes.h"
inline float3 clamp(float3 v, float a, float b)
# 377 "./code/internal/cutil_math_bugfixes.h"
{
# 378 "./code/internal/cutil_math_bugfixes.h"
return make_float3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 379 "./code/internal/cutil_math_bugfixes.h"
}
# 381 "./code/internal/cutil_math_bugfixes.h"
inline float3 clamp(float3 v, float3 a, float3 b)
# 382 "./code/internal/cutil_math_bugfixes.h"
{
# 383 "./code/internal/cutil_math_bugfixes.h"
return make_float3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 384 "./code/internal/cutil_math_bugfixes.h"
}
# 387 "./code/internal/cutil_math_bugfixes.h"
inline float dot(float3 a, float3 b)
# 388 "./code/internal/cutil_math_bugfixes.h"
{
# 389 "./code/internal/cutil_math_bugfixes.h"
return (((a.x) * (b.x)) + ((a.y) * (b.y))) + ((a.z) * (b.z));
# 390 "./code/internal/cutil_math_bugfixes.h"
}
# 393 "./code/internal/cutil_math_bugfixes.h"
inline float3 cross(float3 a, float3 b)
# 394 "./code/internal/cutil_math_bugfixes.h"
{
# 395 "./code/internal/cutil_math_bugfixes.h"
return make_float3(((a.y) * (b.z)) - ((a.z) * (b.y)), ((a.z) * (b.x)) - ((a.x) * (b.z)), ((a.x) * (b.y)) - ((a.y) * (b.x)));
# 396 "./code/internal/cutil_math_bugfixes.h"
}
# 399 "./code/internal/cutil_math_bugfixes.h"
inline float length(float3 v)
# 400 "./code/internal/cutil_math_bugfixes.h"
{
# 401 "./code/internal/cutil_math_bugfixes.h"
return sqrtf(dot(v, v));
# 402 "./code/internal/cutil_math_bugfixes.h"
}
# 405 "./code/internal/cutil_math_bugfixes.h"
inline float3 normalize(float3 v)
# 406 "./code/internal/cutil_math_bugfixes.h"
{
# 407 "./code/internal/cutil_math_bugfixes.h"
float invLen = ((1.0F) / sqrtf(dot(v, v)));
# 408 "./code/internal/cutil_math_bugfixes.h"
return (v * invLen);
# 409 "./code/internal/cutil_math_bugfixes.h"
}
# 412 "./code/internal/cutil_math_bugfixes.h"
inline float3 floor(const float3 v)
# 413 "./code/internal/cutil_math_bugfixes.h"
{
# 414 "./code/internal/cutil_math_bugfixes.h"
return make_float3(floor(v.x), floor(v.y), floor(v.z));
# 415 "./code/internal/cutil_math_bugfixes.h"
}
# 418 "./code/internal/cutil_math_bugfixes.h"
inline float3 reflect(float3 i, float3 n)
# 419 "./code/internal/cutil_math_bugfixes.h"
{
# 420 "./code/internal/cutil_math_bugfixes.h"
return (i - ((((((2.0F)) * n)) * (dot(n, i)))));
# 421 "./code/internal/cutil_math_bugfixes.h"
}
# 427 "./code/internal/cutil_math_bugfixes.h"
inline float4 make_float4(float s)
# 428 "./code/internal/cutil_math_bugfixes.h"
{
# 429 "./code/internal/cutil_math_bugfixes.h"
return make_float4(s, s, s, s);
# 430 "./code/internal/cutil_math_bugfixes.h"
}
# 431 "./code/internal/cutil_math_bugfixes.h"
inline float4 make_float4(float3 a)
# 432 "./code/internal/cutil_math_bugfixes.h"
{
# 433 "./code/internal/cutil_math_bugfixes.h"
return make_float4(a.x, a.y, a.z, (0.0F));
# 434 "./code/internal/cutil_math_bugfixes.h"
}
# 435 "./code/internal/cutil_math_bugfixes.h"
inline float4 make_float4(float3 a, float w)
# 436 "./code/internal/cutil_math_bugfixes.h"
{
# 437 "./code/internal/cutil_math_bugfixes.h"
return make_float4(a.x, a.y, a.z, w);
# 438 "./code/internal/cutil_math_bugfixes.h"
}
# 439 "./code/internal/cutil_math_bugfixes.h"
inline float4 make_float4(int4 a)
# 440 "./code/internal/cutil_math_bugfixes.h"
{
# 441 "./code/internal/cutil_math_bugfixes.h"
return make_float4((float)(a.x), (float)(a.y), (float)(a.z), (float)(a.w));
# 442 "./code/internal/cutil_math_bugfixes.h"
}
# 445 "./code/internal/cutil_math_bugfixes.h"
static inline float4 fminf(float4 a, float4 b)
# 446 "./code/internal/cutil_math_bugfixes.h"
{
# 447 "./code/internal/cutil_math_bugfixes.h"
return make_float4(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z), fminf(a.w, b.w));
# 448 "./code/internal/cutil_math_bugfixes.h"
}
# 451 "./code/internal/cutil_math_bugfixes.h"
static inline float4 fmaxf(float4 a, float4 b)
# 452 "./code/internal/cutil_math_bugfixes.h"
{
# 453 "./code/internal/cutil_math_bugfixes.h"
return make_float4(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z), fmaxf(a.w, b.w));
# 454 "./code/internal/cutil_math_bugfixes.h"
}
# 457 "./code/internal/cutil_math_bugfixes.h"
inline float4 operator+(float4 a, float4 b)
# 458 "./code/internal/cutil_math_bugfixes.h"
{
# 459 "./code/internal/cutil_math_bugfixes.h"
return make_float4((a.x) + (b.x), (a.y) + (b.y), (a.z) + (b.z), (a.w) + (b.w));
# 460 "./code/internal/cutil_math_bugfixes.h"
}
# 461 "./code/internal/cutil_math_bugfixes.h"
inline void operator+=(float4 &a, float4 b)
# 462 "./code/internal/cutil_math_bugfixes.h"
{
# 463 "./code/internal/cutil_math_bugfixes.h"
(a.x) += (b.x); (a.y) += (b.y); (a.z) += (b.z); (a.w) += (b.w);
# 464 "./code/internal/cutil_math_bugfixes.h"
}
# 467 "./code/internal/cutil_math_bugfixes.h"
inline float4 operator-(float4 a, float4 b)
# 468 "./code/internal/cutil_math_bugfixes.h"
{
# 469 "./code/internal/cutil_math_bugfixes.h"
return make_float4((a.x) - (b.x), (a.y) - (b.y), (a.z) - (b.z), (a.w) - (b.w));
# 470 "./code/internal/cutil_math_bugfixes.h"
}
# 471 "./code/internal/cutil_math_bugfixes.h"
inline void operator-=(float4 &a, float4 b)
# 472 "./code/internal/cutil_math_bugfixes.h"
{
# 473 "./code/internal/cutil_math_bugfixes.h"
(a.x) -= (b.x); (a.y) -= (b.y); (a.z) -= (b.z); (a.w) -= (b.w);
# 474 "./code/internal/cutil_math_bugfixes.h"
}
# 477 "./code/internal/cutil_math_bugfixes.h"
inline float4 operator*(float4 a, float s)
# 478 "./code/internal/cutil_math_bugfixes.h"
{
# 479 "./code/internal/cutil_math_bugfixes.h"
return make_float4((a.x) * s, (a.y) * s, (a.z) * s, (a.w) * s);
# 480 "./code/internal/cutil_math_bugfixes.h"
}
# 481 "./code/internal/cutil_math_bugfixes.h"
inline float4 operator*(float s, float4 a)
# 482 "./code/internal/cutil_math_bugfixes.h"
{
# 483 "./code/internal/cutil_math_bugfixes.h"
return make_float4((a.x) * s, (a.y) * s, (a.z) * s, (a.w) * s);
# 484 "./code/internal/cutil_math_bugfixes.h"
}
# 485 "./code/internal/cutil_math_bugfixes.h"
inline void operator*=(float4 &a, float s)
# 486 "./code/internal/cutil_math_bugfixes.h"
{
# 487 "./code/internal/cutil_math_bugfixes.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s; (a.w) *= s;
# 488 "./code/internal/cutil_math_bugfixes.h"
}
# 491 "./code/internal/cutil_math_bugfixes.h"
inline float4 operator/(float4 a, float4 b)
# 492 "./code/internal/cutil_math_bugfixes.h"
{
# 493 "./code/internal/cutil_math_bugfixes.h"
return make_float4((a.x) / (b.x), (a.y) / (b.y), (a.z) / (b.z), (a.w) / (b.w));
# 494 "./code/internal/cutil_math_bugfixes.h"
}
# 495 "./code/internal/cutil_math_bugfixes.h"
inline float4 operator/(float4 a, float s)
# 496 "./code/internal/cutil_math_bugfixes.h"
{
# 497 "./code/internal/cutil_math_bugfixes.h"
float inv = ((1.0F) / s);
# 498 "./code/internal/cutil_math_bugfixes.h"
return (a * inv);
# 499 "./code/internal/cutil_math_bugfixes.h"
}
# 500 "./code/internal/cutil_math_bugfixes.h"
inline float4 operator/(float s, float4 a)
# 501 "./code/internal/cutil_math_bugfixes.h"
{
# 504 "./code/internal/cutil_math_bugfixes.h"
return make_float4(s / (a.x), s / (a.y), s / (a.z), s / (a.w));
# 505 "./code/internal/cutil_math_bugfixes.h"
}
# 506 "./code/internal/cutil_math_bugfixes.h"
inline void operator/=(float4 &a, float s)
# 507 "./code/internal/cutil_math_bugfixes.h"
{
# 508 "./code/internal/cutil_math_bugfixes.h"
float inv = ((1.0F) / s);
# 509 "./code/internal/cutil_math_bugfixes.h"
((a) *= inv);
# 510 "./code/internal/cutil_math_bugfixes.h"
}
# 513 "./code/internal/cutil_math_bugfixes.h"
inline float4 lerp(float4 a, float4 b, float t)
# 514 "./code/internal/cutil_math_bugfixes.h"
{
# 515 "./code/internal/cutil_math_bugfixes.h"
return (a + ((t * ((b - a)))));
# 516 "./code/internal/cutil_math_bugfixes.h"
}
# 519 "./code/internal/cutil_math_bugfixes.h"
inline float4 clamp(float4 v, float a, float b)
# 520 "./code/internal/cutil_math_bugfixes.h"
{
# 521 "./code/internal/cutil_math_bugfixes.h"
return make_float4(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b), clamp(v.w, a, b));
# 522 "./code/internal/cutil_math_bugfixes.h"
}
# 524 "./code/internal/cutil_math_bugfixes.h"
inline float4 clamp(float4 v, float4 a, float4 b)
# 525 "./code/internal/cutil_math_bugfixes.h"
{
# 526 "./code/internal/cutil_math_bugfixes.h"
return make_float4(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z), clamp(v.w, a.w, b.w));
# 527 "./code/internal/cutil_math_bugfixes.h"
}
# 530 "./code/internal/cutil_math_bugfixes.h"
inline float dot(float4 a, float4 b)
# 531 "./code/internal/cutil_math_bugfixes.h"
{
# 532 "./code/internal/cutil_math_bugfixes.h"
return ((((a.x) * (b.x)) + ((a.y) * (b.y))) + ((a.z) * (b.z))) + ((a.w) * (b.w));
# 533 "./code/internal/cutil_math_bugfixes.h"
}
# 536 "./code/internal/cutil_math_bugfixes.h"
inline float length(float4 r)
# 537 "./code/internal/cutil_math_bugfixes.h"
{
# 538 "./code/internal/cutil_math_bugfixes.h"
return sqrtf(dot(r, r));
# 539 "./code/internal/cutil_math_bugfixes.h"
}
# 542 "./code/internal/cutil_math_bugfixes.h"
inline float4 normalize(float4 v)
# 543 "./code/internal/cutil_math_bugfixes.h"
{
# 544 "./code/internal/cutil_math_bugfixes.h"
float invLen = ((1.0F) / sqrtf(dot(v, v)));
# 545 "./code/internal/cutil_math_bugfixes.h"
return (v * invLen);
# 546 "./code/internal/cutil_math_bugfixes.h"
}
# 549 "./code/internal/cutil_math_bugfixes.h"
inline float4 floor(const float4 v)
# 550 "./code/internal/cutil_math_bugfixes.h"
{
# 551 "./code/internal/cutil_math_bugfixes.h"
return make_float4(floor(v.x), floor(v.y), floor(v.z), floor(v.w));
# 552 "./code/internal/cutil_math_bugfixes.h"
}
# 558 "./code/internal/cutil_math_bugfixes.h"
inline int3 make_int3(int s)
# 559 "./code/internal/cutil_math_bugfixes.h"
{
# 560 "./code/internal/cutil_math_bugfixes.h"
return make_int3(s, s, s);
# 561 "./code/internal/cutil_math_bugfixes.h"
}
# 562 "./code/internal/cutil_math_bugfixes.h"
inline int3 make_int3(float3 a)
# 563 "./code/internal/cutil_math_bugfixes.h"
{
# 564 "./code/internal/cutil_math_bugfixes.h"
return make_int3((int)(a.x), (int)(a.y), (int)(a.z));
# 565 "./code/internal/cutil_math_bugfixes.h"
}
# 568 "./code/internal/cutil_math_bugfixes.h"
inline int3 min(int3 a, int3 b)
# 569 "./code/internal/cutil_math_bugfixes.h"
{
# 570 "./code/internal/cutil_math_bugfixes.h"
return make_int3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
# 571 "./code/internal/cutil_math_bugfixes.h"
}
# 574 "./code/internal/cutil_math_bugfixes.h"
inline int3 max(int3 a, int3 b)
# 575 "./code/internal/cutil_math_bugfixes.h"
{
# 576 "./code/internal/cutil_math_bugfixes.h"
return make_int3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
# 577 "./code/internal/cutil_math_bugfixes.h"
}
# 580 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator+(int3 a, int3 b)
# 581 "./code/internal/cutil_math_bugfixes.h"
{
# 582 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) + (b.x), (a.y) + (b.y), (a.z) + (b.z));
# 583 "./code/internal/cutil_math_bugfixes.h"
}
# 584 "./code/internal/cutil_math_bugfixes.h"
inline void operator+=(int3 &a, int3 b)
# 585 "./code/internal/cutil_math_bugfixes.h"
{
# 586 "./code/internal/cutil_math_bugfixes.h"
(a.x) += (b.x); (a.y) += (b.y); (a.z) += (b.z);
# 587 "./code/internal/cutil_math_bugfixes.h"
}
# 590 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator-(int3 a, int3 b)
# 591 "./code/internal/cutil_math_bugfixes.h"
{
# 592 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) - (b.x), (a.y) - (b.y), (a.z) - (b.z));
# 593 "./code/internal/cutil_math_bugfixes.h"
}
# 595 "./code/internal/cutil_math_bugfixes.h"
inline void operator-=(int3 &a, int3 b)
# 596 "./code/internal/cutil_math_bugfixes.h"
{
# 597 "./code/internal/cutil_math_bugfixes.h"
(a.x) -= (b.x); (a.y) -= (b.y); (a.z) -= (b.z);
# 598 "./code/internal/cutil_math_bugfixes.h"
}
# 601 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator*(int3 a, int3 b)
# 602 "./code/internal/cutil_math_bugfixes.h"
{
# 603 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) * (b.x), (a.y) * (b.y), (a.z) * (b.z));
# 604 "./code/internal/cutil_math_bugfixes.h"
}
# 605 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator*(int3 a, int s)
# 606 "./code/internal/cutil_math_bugfixes.h"
{
# 607 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) * s, (a.y) * s, (a.z) * s);
# 608 "./code/internal/cutil_math_bugfixes.h"
}
# 609 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator*(int s, int3 a)
# 610 "./code/internal/cutil_math_bugfixes.h"
{
# 611 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) * s, (a.y) * s, (a.z) * s);
# 612 "./code/internal/cutil_math_bugfixes.h"
}
# 613 "./code/internal/cutil_math_bugfixes.h"
inline void operator*=(int3 &a, int s)
# 614 "./code/internal/cutil_math_bugfixes.h"
{
# 615 "./code/internal/cutil_math_bugfixes.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 616 "./code/internal/cutil_math_bugfixes.h"
}
# 619 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator/(int3 a, int3 b)
# 620 "./code/internal/cutil_math_bugfixes.h"
{
# 621 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) / (b.x), (a.y) / (b.y), (a.z) / (b.z));
# 622 "./code/internal/cutil_math_bugfixes.h"
}
# 623 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator/(int3 a, int s)
# 624 "./code/internal/cutil_math_bugfixes.h"
{
# 625 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) / s, (a.y) / s, (a.z) / s);
# 626 "./code/internal/cutil_math_bugfixes.h"
}
# 627 "./code/internal/cutil_math_bugfixes.h"
inline int3 operator/(int s, int3 a)
# 628 "./code/internal/cutil_math_bugfixes.h"
{
# 629 "./code/internal/cutil_math_bugfixes.h"
return make_int3((a.x) / s, (a.y) / s, (a.z) / s);
# 630 "./code/internal/cutil_math_bugfixes.h"
}
# 631 "./code/internal/cutil_math_bugfixes.h"
inline void operator/=(int3 &a, int s)
# 632 "./code/internal/cutil_math_bugfixes.h"
{
# 633 "./code/internal/cutil_math_bugfixes.h"
(a.x) /= s; (a.y) /= s; (a.z) /= s;
# 634 "./code/internal/cutil_math_bugfixes.h"
}
# 637 "./code/internal/cutil_math_bugfixes.h"
inline int clamp(int f, int a, int b)
# 638 "./code/internal/cutil_math_bugfixes.h"
{
# 639 "./code/internal/cutil_math_bugfixes.h"
return max(a, min(f, b));
# 640 "./code/internal/cutil_math_bugfixes.h"
}
# 642 "./code/internal/cutil_math_bugfixes.h"
inline int3 clamp(int3 v, int a, int b)
# 643 "./code/internal/cutil_math_bugfixes.h"
{
# 644 "./code/internal/cutil_math_bugfixes.h"
return make_int3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 645 "./code/internal/cutil_math_bugfixes.h"
}
# 647 "./code/internal/cutil_math_bugfixes.h"
inline int3 clamp(int3 v, int3 a, int3 b)
# 648 "./code/internal/cutil_math_bugfixes.h"
{
# 649 "./code/internal/cutil_math_bugfixes.h"
return make_int3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 650 "./code/internal/cutil_math_bugfixes.h"
}
# 657 "./code/internal/cutil_math_bugfixes.h"
inline uint3 make_uint3(uint s)
# 658 "./code/internal/cutil_math_bugfixes.h"
{
# 659 "./code/internal/cutil_math_bugfixes.h"
return make_uint3(s, s, s);
# 660 "./code/internal/cutil_math_bugfixes.h"
}
# 661 "./code/internal/cutil_math_bugfixes.h"
inline uint3 make_uint3(float3 a)
# 662 "./code/internal/cutil_math_bugfixes.h"
{
# 663 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((uint)(a.x), (uint)(a.y), (uint)(a.z));
# 664 "./code/internal/cutil_math_bugfixes.h"
}
# 667 "./code/internal/cutil_math_bugfixes.h"
inline uint3 min(uint3 a, uint3 b)
# 668 "./code/internal/cutil_math_bugfixes.h"
{
# 669 "./code/internal/cutil_math_bugfixes.h"
return make_uint3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
# 670 "./code/internal/cutil_math_bugfixes.h"
}
# 673 "./code/internal/cutil_math_bugfixes.h"
inline uint3 max(uint3 a, uint3 b)
# 674 "./code/internal/cutil_math_bugfixes.h"
{
# 675 "./code/internal/cutil_math_bugfixes.h"
return make_uint3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
# 676 "./code/internal/cutil_math_bugfixes.h"
}
# 679 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator+(uint3 a, uint3 b)
# 680 "./code/internal/cutil_math_bugfixes.h"
{
# 681 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) + (b.x), (a.y) + (b.y), (a.z) + (b.z));
# 682 "./code/internal/cutil_math_bugfixes.h"
}
# 683 "./code/internal/cutil_math_bugfixes.h"
inline void operator+=(uint3 &a, uint3 b)
# 684 "./code/internal/cutil_math_bugfixes.h"
{
# 685 "./code/internal/cutil_math_bugfixes.h"
(a.x) += (b.x); (a.y) += (b.y); (a.z) += (b.z);
# 686 "./code/internal/cutil_math_bugfixes.h"
}
# 689 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator-(uint3 a, uint3 b)
# 690 "./code/internal/cutil_math_bugfixes.h"
{
# 691 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) - (b.x), (a.y) - (b.y), (a.z) - (b.z));
# 692 "./code/internal/cutil_math_bugfixes.h"
}
# 694 "./code/internal/cutil_math_bugfixes.h"
inline void operator-=(uint3 &a, uint3 b)
# 695 "./code/internal/cutil_math_bugfixes.h"
{
# 696 "./code/internal/cutil_math_bugfixes.h"
(a.x) -= (b.x); (a.y) -= (b.y); (a.z) -= (b.z);
# 697 "./code/internal/cutil_math_bugfixes.h"
}
# 700 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator*(uint3 a, uint3 b)
# 701 "./code/internal/cutil_math_bugfixes.h"
{
# 702 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) * (b.x), (a.y) * (b.y), (a.z) * (b.z));
# 703 "./code/internal/cutil_math_bugfixes.h"
}
# 704 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator*(uint3 a, uint s)
# 705 "./code/internal/cutil_math_bugfixes.h"
{
# 706 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) * s, (a.y) * s, (a.z) * s);
# 707 "./code/internal/cutil_math_bugfixes.h"
}
# 708 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator*(uint s, uint3 a)
# 709 "./code/internal/cutil_math_bugfixes.h"
{
# 710 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) * s, (a.y) * s, (a.z) * s);
# 711 "./code/internal/cutil_math_bugfixes.h"
}
# 712 "./code/internal/cutil_math_bugfixes.h"
inline void operator*=(uint3 &a, uint s)
# 713 "./code/internal/cutil_math_bugfixes.h"
{
# 714 "./code/internal/cutil_math_bugfixes.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 715 "./code/internal/cutil_math_bugfixes.h"
}
# 718 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator/(uint3 a, uint3 b)
# 719 "./code/internal/cutil_math_bugfixes.h"
{
# 720 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) / (b.x), (a.y) / (b.y), (a.z) / (b.z));
# 721 "./code/internal/cutil_math_bugfixes.h"
}
# 722 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator/(uint3 a, uint s)
# 723 "./code/internal/cutil_math_bugfixes.h"
{
# 724 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) / s, (a.y) / s, (a.z) / s);
# 725 "./code/internal/cutil_math_bugfixes.h"
}
# 726 "./code/internal/cutil_math_bugfixes.h"
inline uint3 operator/(uint s, uint3 a)
# 727 "./code/internal/cutil_math_bugfixes.h"
{
# 728 "./code/internal/cutil_math_bugfixes.h"
return make_uint3((a.x) / s, (a.y) / s, (a.z) / s);
# 729 "./code/internal/cutil_math_bugfixes.h"
}
# 730 "./code/internal/cutil_math_bugfixes.h"
inline void operator/=(uint3 &a, uint s)
# 731 "./code/internal/cutil_math_bugfixes.h"
{
# 732 "./code/internal/cutil_math_bugfixes.h"
(a.x) /= s; (a.y) /= s; (a.z) /= s;
# 733 "./code/internal/cutil_math_bugfixes.h"
}
# 736 "./code/internal/cutil_math_bugfixes.h"
inline uint clamp(uint f, uint a, uint b)
# 737 "./code/internal/cutil_math_bugfixes.h"
{
# 738 "./code/internal/cutil_math_bugfixes.h"
return max(a, min(f, b));
# 739 "./code/internal/cutil_math_bugfixes.h"
}
# 741 "./code/internal/cutil_math_bugfixes.h"
inline uint3 clamp(uint3 v, uint a, uint b)
# 742 "./code/internal/cutil_math_bugfixes.h"
{
# 743 "./code/internal/cutil_math_bugfixes.h"
return make_uint3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 744 "./code/internal/cutil_math_bugfixes.h"
}
# 746 "./code/internal/cutil_math_bugfixes.h"
inline uint3 clamp(uint3 v, uint3 a, uint3 b)
# 747 "./code/internal/cutil_math_bugfixes.h"
{
# 748 "./code/internal/cutil_math_bugfixes.h"
return make_uint3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 749 "./code/internal/cutil_math_bugfixes.h"
}
# 42 "./code/internal/bspline_kernel.cu"
inline float bspline(float t)
# 43 "./code/internal/bspline_kernel.cu"
{
# 44 "./code/internal/bspline_kernel.cu"
t = fabs(t);
# 45 "./code/internal/bspline_kernel.cu"
const float a = ((2.0F) - t);
# 47 "./code/internal/bspline_kernel.cu"
if (t < (1.0F)) { return ((2.0F) / (3.0F)) - ((((0.5F) * t) * t) * a); } else {
# 48 "./code/internal/bspline_kernel.cu"
if (t < (2.0F)) { return ((a * a) * a) / (6.0F); } else {
# 49 "./code/internal/bspline_kernel.cu"
return (0.0F); } }
# 50 "./code/internal/bspline_kernel.cu"
}
# 53 "./code/internal/bspline_kernel.cu"
inline float bspline_1st_derivative(float t)
# 54 "./code/internal/bspline_kernel.cu"
{
# 55 "./code/internal/bspline_kernel.cu"
if (((-(2.0F)) < t) && (t <= (-(1.0F)))) { return ((((0.5F) * t) * t) + ((2.0F) * t)) + (2.0F); } else {
# 56 "./code/internal/bspline_kernel.cu"
if (((-(1.0F)) < t) && (t <= (0.0F))) { return (((-(1.5F)) * t) * t) - ((2.0F) * t); } else {
# 57 "./code/internal/bspline_kernel.cu"
if (((0.0F) < t) && (t <= (1.0F))) { return (((1.5F) * t) * t) - ((2.0F) * t); } else {
# 58 "./code/internal/bspline_kernel.cu"
if (((1.0F) < t) && (t < (2.0F))) { return ((((-(0.5F)) * t) * t) + ((2.0F) * t)) - (2.0F); } else {
# 59 "./code/internal/bspline_kernel.cu"
return (0.0F); } } } }
# 60 "./code/internal/bspline_kernel.cu"
}
# 63 "./code/internal/bspline_kernel.cu"
inline float bspline_2nd_derivative(float t)
# 64 "./code/internal/bspline_kernel.cu"
{
# 65 "./code/internal/bspline_kernel.cu"
t = fabs(t);
# 67 "./code/internal/bspline_kernel.cu"
if (t < (1.0F)) { return ((3.0F) * t) - (2.0F); } else {
# 68 "./code/internal/bspline_kernel.cu"
if (t < (2.0F)) { return (2.0F) - t; } else {
# 69 "./code/internal/bspline_kernel.cu"
return (0.0F); } }
# 70 "./code/internal/bspline_kernel.cu"
}
# 73 "./code/internal/bspline_kernel.cu"
template< class T> __attribute__((unused)) inline void bspline_weights(T fraction, T &w0, T &w1, T &w2, T &w3)
# 74 "./code/internal/bspline_kernel.cu"
{int volatile ___ = 1;(void)fraction;(void)w0;(void)w1;(void)w2;(void)w3;
# 83 "./code/internal/bspline_kernel.cu"
exit(___);}
# 86 "./code/internal/bspline_kernel.cu"
template< class T> __attribute__((unused)) inline void bspline_weights_1st_derivative(T fraction, T &w0, T &w1, T &w2, T &w3)
# 87 "./code/internal/bspline_kernel.cu"
{int volatile ___ = 1;(void)fraction;(void)w0;(void)w1;(void)w2;(void)w3;
# 94 "./code/internal/bspline_kernel.cu"
exit(___);}
# 97 "./code/internal/bspline_kernel.cu"
template< class T> __attribute__((unused)) inline void bspline_weights_2nd_derivative(T fraction, T &w0, T &w1, T &w2, T &w3)
# 98 "./code/internal/bspline_kernel.cu"
{int volatile ___ = 1;(void)fraction;(void)w0;(void)w1;(void)w2;(void)w3;
# 103 "./code/internal/bspline_kernel.cu"
exit(___);}
# 43 "./code/cubicTex3D.cu"
template< class T, cudaTextureReadMode mode> __attribute__((unused)) float
# 44 "./code/cubicTex3D.cu"
linearTex3D(texture< T, 3, mode> tex, float3 coord)
# 45 "./code/cubicTex3D.cu"
{int volatile ___ = 1;(void)tex;(void)coord;
# 47 "./code/cubicTex3D.cu"
exit(___);}
# 53 "./code/cubicTex3D.cu"
template< class T, cudaTextureReadMode mode> __attribute__((unused)) float
# 54 "./code/cubicTex3D.cu"
cubicTex3DSimple(texture< T, 3, mode> tex, float3 coord)
# 55 "./code/cubicTex3D.cu"
{int volatile ___ = 1;(void)tex;(void)coord;
# 80 "./code/cubicTex3D.cu"
exit(___);}
# 38 "./code/internal/cubicTex3D_kernel.cu"
template< class floatN, class T, cudaTextureReadMode mode> __attribute__((unused)) floatN
# 39 "./code/internal/cubicTex3D_kernel.cu"
cubicTex3D(texture< T, 3, mode> tex, float3 coord)
# 40 "./code/internal/cubicTex3D_kernel.cu"
{int volatile ___ = 1;(void)tex;(void)coord;
# 71 "./code/internal/cubicTex3D_kernel.cu"
exit(___);}
# 81 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< float, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 82 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< unsigned char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 83 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 84 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< unsigned short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 85 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 86 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< unsigned, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 87 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< int, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 89 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< float2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 90 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< uchar2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 91 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< char2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 92 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< ushort2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 93 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< short2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 94 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< uint2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 95 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< int2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 97 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< float3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 98 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< uchar3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 99 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< char3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 100 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< ushort3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 101 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< short3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 102 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< uint3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 103 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< int3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 105 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< float4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 106 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< uchar4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 107 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< char4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 108 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< ushort4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 109 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< short4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 110 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< uint4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 111 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< int4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 115 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< float, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 116 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< unsigned char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 117 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 118 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< unsigned short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 119 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 120 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< unsigned, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 121 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D(texture< int, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 123 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< float2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 124 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< uchar2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 125 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< char2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 126 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< ushort2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 127 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< short2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 128 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< uint2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 129 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D(texture< int2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 131 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< float3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 132 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< uchar3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 133 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< char3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 134 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< ushort3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 135 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< short3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 136 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< uint3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 137 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D(texture< int3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 139 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< float4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 140 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< uchar4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 141 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< char4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 142 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< ushort4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 143 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< short4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 144 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< uint4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 145 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D(texture< int4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 94 "./code/cubicTex3D.cu"
__attribute__((unused)) void bspline_weights_1st_derivative_x(float3 fraction, float3 &w0, float3 &w1, float3 &w2, float3 &w3)
# 95 "./code/cubicTex3D.cu"
{int volatile ___ = 1;(void)fraction;(void)w0;(void)w1;(void)w2;(void)w3;
# 103 "./code/cubicTex3D.cu"
exit(___);}
# 105 "./code/cubicTex3D.cu"
__attribute__((unused)) void bspline_weights_1st_derivative_y(float3 fraction, float3 &w0, float3 &w1, float3 &w2, float3 &w3)
# 106 "./code/cubicTex3D.cu"
{int volatile ___ = 1;(void)fraction;(void)w0;(void)w1;(void)w2;(void)w3;
# 114 "./code/cubicTex3D.cu"
exit(___);}
# 116 "./code/cubicTex3D.cu"
__attribute__((unused)) void bspline_weights_1st_derivative_z(float3 fraction, float3 &w0, float3 &w1, float3 &w2, float3 &w3)
# 117 "./code/cubicTex3D.cu"
{int volatile ___ = 1;(void)fraction;(void)w0;(void)w1;(void)w2;(void)w3;
# 125 "./code/cubicTex3D.cu"
exit(___);}
# 38 "./code/internal/cubicTex3D_kernel.cu"
template< class floatN, class T, cudaTextureReadMode mode> __attribute__((unused)) floatN
# 39 "./code/internal/cubicTex3D_kernel.cu"
cubicTex3D_1st_derivative_x(texture< T, 3, mode> tex, float3 coord)
# 40 "./code/internal/cubicTex3D_kernel.cu"
{int volatile ___ = 1;(void)tex;(void)coord;
# 71 "./code/internal/cubicTex3D_kernel.cu"
exit(___);}
# 81 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< float, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 82 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< unsigned char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 83 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 84 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< unsigned short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 85 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 86 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< unsigned, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 87 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< int, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 89 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< float2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 90 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< uchar2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 91 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< char2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 92 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< ushort2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 93 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< short2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 94 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< uint2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 95 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< int2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 97 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< float3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 98 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< uchar3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 99 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< char3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 100 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< ushort3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 101 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< short3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 102 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< uint3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 103 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< int3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 105 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< float4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 106 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< uchar4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 107 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< char4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 108 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< ushort4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 109 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< short4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 110 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< uint4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 111 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< int4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 115 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< float, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 116 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< unsigned char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 117 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 118 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< unsigned short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 119 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 120 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< unsigned, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 121 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_x(texture< int, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 123 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< float2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 124 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< uchar2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 125 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< char2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 126 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< ushort2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 127 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< short2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 128 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< uint2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 129 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_x(texture< int2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 131 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< float3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 132 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< uchar3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 133 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< char3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 134 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< ushort3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 135 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< short3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 136 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< uint3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 137 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_x(texture< int3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 139 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< float4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 140 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< uchar4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 141 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< char4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 142 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< ushort4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 143 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< short4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 144 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< uint4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 145 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_x(texture< int4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 38 "./code/internal/cubicTex3D_kernel.cu"
template< class floatN, class T, cudaTextureReadMode mode> __attribute__((unused)) floatN
# 39 "./code/internal/cubicTex3D_kernel.cu"
cubicTex3D_1st_derivative_y(texture< T, 3, mode> tex, float3 coord)
# 40 "./code/internal/cubicTex3D_kernel.cu"
{int volatile ___ = 1;(void)tex;(void)coord;
# 71 "./code/internal/cubicTex3D_kernel.cu"
exit(___);}
# 81 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< float, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 82 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< unsigned char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 83 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 84 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< unsigned short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 85 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 86 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< unsigned, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 87 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< int, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 89 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< float2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 90 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< uchar2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 91 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< char2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 92 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< ushort2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 93 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< short2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 94 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< uint2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 95 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< int2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 97 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< float3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 98 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< uchar3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 99 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< char3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 100 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< ushort3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 101 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< short3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 102 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< uint3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 103 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< int3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 105 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< float4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 106 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< uchar4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 107 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< char4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 108 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< ushort4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 109 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< short4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 110 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< uint4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 111 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< int4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 115 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< float, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 116 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< unsigned char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 117 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 118 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< unsigned short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 119 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 120 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< unsigned, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 121 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_y(texture< int, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 123 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< float2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 124 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< uchar2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 125 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< char2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 126 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< ushort2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 127 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< short2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 128 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< uint2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 129 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_y(texture< int2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 131 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< float3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 132 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< uchar3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 133 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< char3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 134 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< ushort3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 135 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< short3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 136 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< uint3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 137 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_y(texture< int3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 139 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< float4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 140 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< uchar4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 141 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< char4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 142 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< ushort4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 143 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< short4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 144 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< uint4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 145 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_y(texture< int4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 38 "./code/internal/cubicTex3D_kernel.cu"
template< class floatN, class T, cudaTextureReadMode mode> __attribute__((unused)) floatN
# 39 "./code/internal/cubicTex3D_kernel.cu"
cubicTex3D_1st_derivative_z(texture< T, 3, mode> tex, float3 coord)
# 40 "./code/internal/cubicTex3D_kernel.cu"
{int volatile ___ = 1;(void)tex;(void)coord;
# 71 "./code/internal/cubicTex3D_kernel.cu"
exit(___);}
# 81 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< float, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 82 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< unsigned char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 83 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< char, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 84 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< unsigned short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 85 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< short, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 86 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< unsigned, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 87 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< int, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 89 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< float2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 90 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< uchar2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 91 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< char2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 92 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< ushort2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 93 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< short2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 94 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< uint2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 95 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< int2, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 97 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< float3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 98 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< uchar3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 99 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< char3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 100 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< ushort3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 101 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< short3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 102 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< uint3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 103 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< int3, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 105 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< float4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 106 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< uchar4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 107 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< char4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 108 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< ushort4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 109 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< short4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 110 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< uint4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 111 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< int4, 3, mode> tex, float3 coord) {int volatile ___ = 1;(void)tex;(void)coord;exit(___);}
# 115 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< float, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 116 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< unsigned char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 117 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< char, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 118 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< unsigned short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 119 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< short, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 120 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< unsigned, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 121 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float cubicTex3D_1st_derivative_z(texture< int, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 123 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< float2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 124 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< uchar2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 125 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< char2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 126 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< ushort2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 127 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< short2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 128 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< uint2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 129 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float2 cubicTex3D_1st_derivative_z(texture< int2, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 131 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< float3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 132 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< uchar3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 133 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< char3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 134 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< ushort3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 135 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< short3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 136 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< uint3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 137 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float3 cubicTex3D_1st_derivative_z(texture< int3, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 139 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< float4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 140 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< uchar4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 141 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< char4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 142 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< ushort4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 143 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< short4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 144 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< uint4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 145 "./code/internal/cubicTex3D_kernel.cu"
template< cudaTextureReadMode mode> __attribute__((unused)) float4 cubicTex3D_1st_derivative_z(texture< int4, 3, mode> tex, float x, float y, float z) {int volatile ___ = 1;(void)tex;(void)x;(void)y;(void)z;exit(___);}
# 24 "interp3cuda.cu"
static texture< float, 3, cudaReadModeElementType> texInput;
# 26 "interp3cuda.cu"
void interpTex(float3 *points, float *output, int output_numel, int output_width, int _option) ;
# 64 "interp3cuda.cu"
int iDivUp(int a, int b) {
# 65 "interp3cuda.cu"
return ((a % b) != 0) ? ((a / b) + 1) : (a / b);
# 66 "interp3cuda.cu"
}
# 69 "interp3cuda.cu"
int option_method(int nrhs, const mxArray *prhs[]) {
# 71 "interp3cuda.cu"
int interpo_option;
# 72 "interp3cuda.cu"
if ((nrhs == 5) || (nrhs == 8)) {
# 74 "interp3cuda.cu"
mxChar *option = ((nrhs == 5) ? mxGetChars(prhs[4]) : mxGetChars(prhs[7]));
# 76 "interp3cuda.cu"
if (((((((((char)(option[0])) == ('n')) && (((char)(option[1])) == ('e'))) && (((char)(option[2])) == ('a'))) && (((char)(option[3])) == ('r'))) && (((char)(option[4])) == ('e'))) && (((char)(option[5])) == ('s'))) && (((char)(option[6])) == ('t')))
# 77 "interp3cuda.cu"
{
# 78 "interp3cuda.cu"
interpo_option = 0;
# 80 "interp3cuda.cu"
} else {
# 81 "interp3cuda.cu"
if ((((((((char)(option[0])) == ('l')) && (((char)(option[1])) == ('i'))) && (((char)(option[2])) == ('n'))) && (((char)(option[3])) == ('e'))) && (((char)(option[4])) == ('a'))) && (((char)(option[5])) == ('r')))
# 82 "interp3cuda.cu"
{
# 83 "interp3cuda.cu"
interpo_option = 1;
# 85 "interp3cuda.cu"
} else {
# 86 "interp3cuda.cu"
if ((((((((char)(option[0])) == ('s')) && (((char)(option[1])) == ('p'))) && (((char)(option[2])) == ('l'))) && (((char)(option[3])) == ('i'))) && (((char)(option[4])) == ('n'))) && (((char)(option[5])) == ('e')))
# 87 "interp3cuda.cu"
{
# 88 "interp3cuda.cu"
interpo_option = 2;
# 90 "interp3cuda.cu"
} else {
# 91 "interp3cuda.cu"
if (((((((char)(option[0])) == ('c')) && (((char)(option[1])) == ('u'))) && (((char)(option[2])) == ('b'))) && (((char)(option[3])) == ('i'))) && (((char)(option[4])) == ('c'))) {
# 92 "interp3cuda.cu"
interpo_option = 3;
# 94 "interp3cuda.cu"
mexErrMsgTxt("cubic method is not yet supported !!");
# 95 "interp3cuda.cu"
} else
# 96 "interp3cuda.cu"
{
# 97 "interp3cuda.cu"
mexErrMsgTxt("method is not recognized, you must use \'nearest\' \'linear\' \'spline\' or \'cubic\'");
# 98 "interp3cuda.cu"
} } } }
# 100 "interp3cuda.cu"
} else
# 101 "interp3cuda.cu"
{
# 102 "interp3cuda.cu"
interpo_option = 1;
# 104 "interp3cuda.cu"
}
# 106 "interp3cuda.cu"
return interpo_option;
# 108 "interp3cuda.cu"
}
# 115 "interp3cuda.cu"
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]) {
# 117 "interp3cuda.cu"
if (nrhs < 3) { mexErrMsgTxt("Must have three input arguments: data, rowpoints, colpoints"); }
# 119 "interp3cuda.cu"
if (nrhs > 5) { mexErrMsgTxt("This format is not supported, usage : interp3cuda(W,Xi,Yi,Zi,method),  method is optional "); }
# 120 "interp3cuda.cu"
if (nlhs != 1) { mexErrMsgTxt("Must have one output argument"); }
# 123 "interp3cuda.cu"
if (mxIsComplex(prhs[0]) || (!mxIsClass(prhs[0], "double"))) {
# 125 "interp3cuda.cu"
mexErrMsgTxt("Input must be real, double !");
# 126 "interp3cuda.cu"
}
# 130 "interp3cuda.cu"
int OUTPUT_W, OUTPUT_H, OUTPUT_D, OUTPUT_SIZE;
# 131 "interp3cuda.cu"
int INPUT_W, INPUT_H, INPUT_D, INPUT_SIZE, POINTS_SIZE;
# 133 "interp3cuda.cu"
int NB_ELEM_Xi, NB_ELEM_Yi, NB_ELEM_Zi;
# 135 "interp3cuda.cu"
int interpo_option;
# 137 "interp3cuda.cu"
double *input = mxGetPr(prhs[0]);
# 139 "interp3cuda.cu"
const mwSize *dim_input = mxGetDimensions(prhs[0]);
# 141 "interp3cuda.cu"
INPUT_W = (dim_input[0]);
# 142 "interp3cuda.cu"
INPUT_H = (dim_input[1]);
# 143 "interp3cuda.cu"
INPUT_D = (dim_input[2]);
# 153 "interp3cuda.cu"
INPUT_SIZE = (((INPUT_H * INPUT_W) * INPUT_D) * sizeof(float));
# 156 "interp3cuda.cu"
float *f_input;
# 157 "interp3cuda.cu"
float3 *f_points;
# 160 "interp3cuda.cu"
if ((mxGetNumberOfElements(prhs[1]) == (1)) && (mxGetNumberOfElements(prhs[2]) == (1))) {
# 164 "interp3cuda.cu"
double *row_points = mxGetPr(prhs[1]);
# 165 "interp3cuda.cu"
double *col_points = mxGetPr(prhs[2]);
# 169 "interp3cuda.cu"
OUTPUT_W = ((int)(col_points[0]));
# 170 "interp3cuda.cu"
OUTPUT_H = ((int)(row_points[0]));
# 171 "interp3cuda.cu"
OUTPUT_SIZE = ((OUTPUT_W * OUTPUT_H) * sizeof(float));
# 172 "interp3cuda.cu"
POINTS_SIZE = (2 * OUTPUT_SIZE);
# 176 "interp3cuda.cu"
f_points = ((float3 *)mxMalloc(POINTS_SIZE));
# 178 "interp3cuda.cu"
for (int r = 0; r < OUTPUT_H; r++) {
# 179 "interp3cuda.cu"
for (int c = 0; c < OUTPUT_W; c++) {
# 180 "interp3cuda.cu"
((f_points[c + (OUTPUT_W * r)]).x) = (((((float)c) * (INPUT_W - 1)) / (OUTPUT_W - 1)) + (0.5F));
# 181 "interp3cuda.cu"
((f_points[c + (OUTPUT_W * r)]).y) = (((((float)r) * (INPUT_H - 1)) / (OUTPUT_H - 1)) + (0.5F));
# 182 "interp3cuda.cu"
}
# 183 "interp3cuda.cu"
}
# 185 "interp3cuda.cu"
} else
# 186 "interp3cuda.cu"
{
# 190 "interp3cuda.cu"
double *x_points = mxGetPr(prhs[1]);
# 191 "interp3cuda.cu"
double *y_points = mxGetPr(prhs[2]);
# 192 "interp3cuda.cu"
double *z_points = mxGetPr(prhs[3]);
# 195 "interp3cuda.cu"
interpo_option = option_method(nrhs, prhs);
# 198 "interp3cuda.cu"
NB_ELEM_Xi = (mxGetNumberOfElements(prhs[1]));
# 199 "interp3cuda.cu"
NB_ELEM_Yi = (mxGetNumberOfElements(prhs[2]));
# 200 "interp3cuda.cu"
NB_ELEM_Zi = (mxGetNumberOfElements(prhs[3]));
# 202 "interp3cuda.cu"
if ((NB_ELEM_Xi != NB_ELEM_Yi) && (NB_ELEM_Yi != NB_ELEM_Zi)) {
# 203 "interp3cuda.cu"
mexErrMsgTxt("Xi, Yi and Zi must have the same number of element  !!");
# 204 "interp3cuda.cu"
}
# 207 "interp3cuda.cu"
const mwSize *dimX = mxGetDimensions(prhs[1]);
# 208 "interp3cuda.cu"
const mwSize *dimY = mxGetDimensions(prhs[2]);
# 209 "interp3cuda.cu"
const mwSize *dimZ = mxGetDimensions(prhs[3]);
# 212 "interp3cuda.cu"
if ((((((((((dimX[0]) != (dimY[0])) || ((dimY[0]) != (dimZ[0]))) || ((dimZ[0]) != (dimX[0]))) || ((dimX[1]) != (dimY[1]))) || ((dimY[1]) != (dimZ[1]))) || ((dimZ[1]) != (dimX[1]))) || ((dimX[2]) != (dimY[2]))) || ((dimY[2]) != (dimZ[2]))) || ((dimZ[2]) != (dimX[2])))
# 213 "interp3cuda.cu"
{
# 214 "interp3cuda.cu"
mexErrMsgTxt("Xi, Yi and Zi dimension must be the same !!");
# 215 "interp3cuda.cu"
}
# 217 "interp3cuda.cu"
(plhs[0]) = mxCreateNumericArray(3, dimX, mxDOUBLE_CLASS, mxREAL);
# 219 "interp3cuda.cu"
OUTPUT_W = (dimX[0]);
# 220 "interp3cuda.cu"
OUTPUT_H = (dimX[1]);
# 221 "interp3cuda.cu"
OUTPUT_D = (dimX[2]);
# 222 "interp3cuda.cu"
OUTPUT_SIZE = (((OUTPUT_W * OUTPUT_H) * OUTPUT_D) * sizeof(float));
# 223 "interp3cuda.cu"
POINTS_SIZE = (3 * OUTPUT_SIZE);
# 225 "interp3cuda.cu"
f_points = ((float3 *)mxMalloc(POINTS_SIZE));
# 227 "interp3cuda.cu"
for (int r = 0; r < NB_ELEM_Xi; r++) {
# 228 "interp3cuda.cu"
((f_points[r]).x) = (((float)(x_points[r])) - (0.5F));
# 229 "interp3cuda.cu"
((f_points[r]).y) = (((float)(y_points[r])) - (0.5F));
# 230 "interp3cuda.cu"
((f_points[r]).z) = (((float)(z_points[r])) - (0.5F));
# 231 "interp3cuda.cu"
}
# 233 "interp3cuda.cu"
}
# 237 "interp3cuda.cu"
double *output = mxGetPr(plhs[0]);
# 238 "interp3cuda.cu"
float *f_output = ((float *)mxMalloc(OUTPUT_SIZE));
# 243 "interp3cuda.cu"
f_input = ((float *)malloc(INPUT_SIZE));
# 247 "interp3cuda.cu"
for (int d = 0; d < INPUT_D; d++) {
# 248 "interp3cuda.cu"
for (int r = 0; r < INPUT_H; r++) {
# 249 "interp3cuda.cu"
for (int c = 0; c < INPUT_W; c++) {
# 251 "interp3cuda.cu"
(f_input[(c + (INPUT_W * r)) + ((d * INPUT_W) * INPUT_H)]) = ((float)(input[(c + (INPUT_W * r)) + ((d * INPUT_W) * INPUT_H)]));
# 256 "interp3cuda.cu"
}
# 257 "interp3cuda.cu"
}
# 259 "interp3cuda.cu"
}
# 263 "interp3cuda.cu"
cudaArray *d_input = (0);
# 264 "interp3cuda.cu"
const cudaExtent volumeExtent = (make_cudaExtent(INPUT_W, INPUT_H, INPUT_D));
# 269 "interp3cuda.cu"
cudaChannelFormatDesc input_tex = cudaCreateChannelDesc< float> ();
# 270 "interp3cuda.cu"
__cudaSafeCall(cudaMalloc3DArray(&d_input, &input_tex, volumeExtent), "interp3cuda.cu", 270);
# 272 "interp3cuda.cu"
cudaMemcpy3DParms copyParams = {(0)};
# 273 "interp3cuda.cu"
(copyParams.srcPtr) = make_cudaPitchedPtr((void *)f_input, (volumeExtent.width) * sizeof(float), volumeExtent.width, volumeExtent.height);
# 274 "interp3cuda.cu"
(copyParams.dstArray) = d_input;
# 275 "interp3cuda.cu"
(copyParams.extent) = volumeExtent;
# 276 "interp3cuda.cu"
(copyParams.kind) = cudaMemcpyHostToDevice;
# 278 "interp3cuda.cu"
__cudaSafeCall(cudaMemcpy3D(&copyParams), "interp3cuda.cu", 278);
# 280 "interp3cuda.cu"
(texInput.filterMode) = ((interpo_option == 0) ? cudaFilterModePoint : cudaFilterModeLinear);
# 281 "interp3cuda.cu"
(texInput.normalized) = 0;
# 282 "interp3cuda.cu"
((texInput.addressMode)[0]) = cudaAddressModeClamp;
# 283 "interp3cuda.cu"
((texInput.addressMode)[1]) = cudaAddressModeClamp;
# 284 "interp3cuda.cu"
((texInput.addressMode)[2]) = cudaAddressModeClamp;
# 287 "interp3cuda.cu"
__cudaSafeCall(cudaBindTextureToArray(texInput, d_input, input_tex), "interp3cuda.cu", 287);
# 291 "interp3cuda.cu"
float3 *d_points;
# 292 "interp3cuda.cu"
__cudaSafeCall(cudaMalloc((void **)(&d_points), POINTS_SIZE), "interp3cuda.cu", 292);
# 293 "interp3cuda.cu"
__cudaSafeCall(cudaMemcpy(d_points, f_points, POINTS_SIZE, cudaMemcpyHostToDevice), "interp3cuda.cu", 293);
# 297 "interp3cuda.cu"
float *d_output;
# 298 "interp3cuda.cu"
__cudaSafeCall(cudaMalloc((void **)(&d_output), OUTPUT_SIZE), "interp3cuda.cu", 298);
# 300 "interp3cuda.cu"
const dim3 blockSize(min(PowTwoDivider(OUTPUT_W), 16), min(PowTwoDivider(OUTPUT_H * OUTPUT_D), 16));
# 301 "interp3cuda.cu"
const dim3 gridSize(OUTPUT_W / (blockSize.x), (OUTPUT_H * OUTPUT_D) / (blockSize.y));
# 305 "interp3cuda.cu"
cudaConfigureCall(gridSize, blockSize) ? ((void)0) : interpTex(d_points, d_output, (OUTPUT_W * OUTPUT_H) * OUTPUT_D, OUTPUT_W, interpo_option);
# 309 "interp3cuda.cu"
__cudaSafeCall(cudaMemcpy(f_output, d_output, OUTPUT_SIZE, cudaMemcpyDeviceToHost), "interp3cuda.cu", 309);
# 313 "interp3cuda.cu"
for (int r = 0; r < OUTPUT_H; r++) {
# 314 "interp3cuda.cu"
for (int c = 0; c < OUTPUT_W; c++) {
# 315 "interp3cuda.cu"
for (int d = 0; d < OUTPUT_D; d++) {
# 316 "interp3cuda.cu"
(output[(r + (OUTPUT_H * c)) + ((d * OUTPUT_H) * OUTPUT_W)]) = ((double)(f_output[(r + (OUTPUT_H * c)) + ((d * OUTPUT_H) * OUTPUT_W)]));
# 319 "interp3cuda.cu"
}
# 320 "interp3cuda.cu"
}
# 321 "interp3cuda.cu"
}
# 325 "interp3cuda.cu"
__cudaSafeCall(cudaUnbindTexture(texInput), "interp3cuda.cu", 325);
# 326 "interp3cuda.cu"
__cudaSafeCall(cudaFreeArray(d_input), "interp3cuda.cu", 326);
# 328 "interp3cuda.cu"
__cudaSafeCall(cudaFree(d_points), "interp3cuda.cu", 328);
# 329 "interp3cuda.cu"
__cudaSafeCall(cudaFree(d_output), "interp3cuda.cu", 329);
# 331 "interp3cuda.cu"
mxFree(f_input);
# 332 "interp3cuda.cu"
mxFree(f_output);
# 333 "interp3cuda.cu"
mxFree(f_points);
# 334 "interp3cuda.cu"
}
# 1 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.stub.c"
# 1 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.stub.c" 1
# 1 "/usr/local/cuda/include/crt/host_runtime.h" 1
# 74 "/usr/local/cuda/include/crt/host_runtime.h"
template <typename T>
static inline void *__cudaAddressOf(T &val)
{
    return (void *)(&(const_cast<char &>(reinterpret_cast<const volatile char &>(val))));
}
# 103 "/usr/local/cuda/include/crt/host_runtime.h"
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/include/common_functions.h" 1
# 147 "/usr/local/cuda/include/common_functions.h"
# 1 "/usr/local/cuda/include/math_functions.h" 1 3
# 1064 "/usr/local/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda/include/math_constants.h" 1 3
# 1065 "/usr/local/cuda/include/math_functions.h" 2 3
# 3135 "/usr/local/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda/include/crt/func_macro.h" 1 3
# 3136 "/usr/local/cuda/include/math_functions.h" 2 3
# 4849 "/usr/local/cuda/include/math_functions.h" 3
inline double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

inline double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

inline double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

inline double cospi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (__isinf(a)) {
    return cos (a);
  }
  if (fabs(a) > 9.0071992547409920e+015) {
    a = 0.0;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  n++;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  if (a == 0.0) {
    a = fabs(a);
  }
  return a;
}

inline double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

inline double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

inline float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

inline float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

inline float sinpif(float a)
{
  return (float)sinpi((double)a);
}

inline float cospif(float a)
{
  return (float)cospi((double)a);
}

inline float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

inline float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







inline int min(int a, int b)
{
  return a < b ? a : b;
}

inline unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

inline long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

inline unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

inline int max(int a, int b)
{
  return a > b ? a : b;
}

inline unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

inline long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

inline unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5201 "/usr/local/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda/include/math_functions_dbl_ptx1.h" 1 3
# 5202 "/usr/local/cuda/include/math_functions.h" 2 3
# 148 "/usr/local/cuda/include/common_functions.h" 2
# 176 "/usr/local/cuda/include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_00002be5_00000000-3_interp3cuda.fatbin.c" 1
asm(
".section .rodata\n"
".align 32\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x00000000000056cb,0x0000005001000001,0x000000000000478b\n"
".quad 0x0000003800000000,0x0000000a00010004,0x0000000e00000040,0x0000000000000015\n"
".quad 0x0000000000000000,0x0000000000000000,0x6333707265746e69,0x000075632e616475\n"
".quad 0x6f69737265762e09,0x2e090a342e31206e,0x7320746567726174,0x616d202c30315f6d\n"
".quad 0x6f745f3436665f70,0x2f2f090a3233665f,0x656c69706d6f6320,0x2f20687469772064\n"
".quad 0x61636f6c2f727375,0x6f2f616475632f6c,0x696c2f34366e6570,0x2f090a65622f2f62\n"
".quad 0x6e65706f766e202f,0x6220302e34206363,0x206e6f20746c6975,0x2d35302d31313032\n"
".quad 0x2d2f2f090a0a3231,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x43202f2f090a2d2d,0x676e696c69706d6f,0x6d742f706d742f20,0x3030305f74667870\n"
".quad 0x30305f3565623230,0x372d303030303030,0x33707265746e695f,0x7070632e61647563\n"
".quad 0x6d742f2820692e33,0x2e23494263632f70,0x0a2968623348667a,0x2d2d2d2d2d2f2f09\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x0a0a2d2d2d2d2d2d,0x2d2d2d2d2d2f2f09\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x090a2d2d2d2d2d2d,0x6f6974704f202f2f\n"
".quad 0x2d2f2f090a3a736e,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x20202f2f090a2d2d,0x703a746567726154,0x3a415349202c7874,0x45202c30315f6d73\n"
".quad 0x696c3a6e6169646e,0x6f50202c656c7474,0x6953207265746e69,0x2f090a34363a657a\n"
".quad 0x2809334f2d20202f,0x617a696d6974704f,0x76656c206e6f6974,0x202f2f090a296c65\n"
".quad 0x6544280930672d20,0x6576656c20677562,0x20202f2f090a296c,0x7065522809326d2d\n"
".quad 0x697664612074726f,0x0a29736569726f73,0x2d2d2d2d2d2f2f09,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x0a0a2d2d2d2d2d2d,0x3109656c69662e09,0x616d6d6f633c2209\n"
".quad 0x3e656e696c2d646e,0x656c69662e090a22,0x706d742f22093209,0x5f746678706d742f\n"
".quad 0x3565623230303030,0x303030303030305f,0x65746e695f362d30,0x2e61647563337072\n"
".quad 0x2e32656661647563,0x662e090a22757067,0x2f22093309656c69,0x2f62696c2f727375\n"
".quad 0x5f3638782f636367,0x78756e696c2d3436,0x342e342f756e672d,0x756c636e692f352e\n"
".quad 0x65646474732f6564,0x662e090a22682e66,0x2f22093409656c69,0x61636f6c2f727375\n"
".quad 0x692f616475632f6c,0x632f6564756c636e,0x63697665642f7472,0x6d69746e75725f65\n"
".quad 0x662e090a22682e65,0x2f22093509656c69,0x61636f6c2f727375,0x692f616475632f6c\n"
".quad 0x682f6564756c636e,0x696665645f74736f,0x090a22682e73656e,0x093609656c69662e\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x6564756c636e692f,0x6e69746c6975622f\n"
".quad 0x682e73657079745f,0x656c69662e090a22,0x7273752f22093709,0x632f6c61636f6c2f\n"
".quad 0x6c636e692f616475,0x697665642f656475,0x73657079745f6563,0x69662e090a22682e\n"
".quad 0x752f22093809656c,0x6c61636f6c2f7273,0x6e692f616475632f,0x72642f6564756c63\n"
".quad 0x7079745f72657669,0x2e090a22682e7365,0x22093909656c6966,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x2f6564756c636e69,0x5f65636166727573,0x22682e7365707974\n"
".quad 0x09656c69662e090a,0x7273752f22093031,0x632f6c61636f6c2f,0x6c636e692f616475\n"
".quad 0x747865742f656475,0x657079745f657275,0x662e090a22682e73,0x2209313109656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x2f6564756c636e69,0x745f726f74636576\n"
".quad 0x0a22682e73657079,0x3109656c69662e09,0x2f7273752f220932,0x75632f6c61636f6c\n"
".quad 0x756c636e692f6164,0x63697665642f6564,0x68636e75616c5f65,0x74656d617261705f\n"
".quad 0x090a22682e737265,0x333109656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f\n"
".quad 0x64756c636e692f61,0x74732f7472632f65,0x6c635f656761726f,0x090a22682e737361\n"
".quad 0x343109656c69662e,0x692f7273752f2209,0x622f6564756c636e,0x657079742f737469\n"
".quad 0x662e090a22682e73,0x2209353109656c69,0x636e692f7273752f,0x6d69742f6564756c\n"
".quad 0x662e090a22682e65,0x2209363109656c69,0x6e75665f6874616d,0x2e090a2275632e63\n"
".quad 0x09373109656c6966,0x2e7970636d656d22,0x69662e090a227563,0x632209383109656c\n"
".quad 0x3378655463696275,0x2e090a2275632e44,0x09393109656c6966,0x656e696c70736222\n"
".quad 0x2e6c656e72656b5f,0x69662e090a227563,0x632209303209656c,0x3378655463696275\n"
".quad 0x6c656e72656b5f44,0x662e090a2275632e,0x2209313209656c69,0x6333707265746e69\n"
".quad 0x0a2275632e616475,0x3209656c69662e09,0x2f7273752f220932,0x75632f6c61636f6c\n"
".quad 0x756c636e692f6164,0x6f6d6d6f632f6564,0x6974636e75665f6e,0x090a22682e736e6f\n"
".quad 0x333209656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x64756c636e692f61\n"
".quad 0x665f6874616d2f65,0x736e6f6974636e75,0x69662e090a22682e,0x2f2209343209656c\n"
".quad 0x61636f6c2f727375,0x692f616475632f6c,0x6d2f6564756c636e,0x736e6f635f687461\n"
".quad 0x22682e73746e6174,0x09656c69662e090a,0x7273752f22093532,0x632f6c61636f6c2f\n"
".quad 0x6c636e692f616475,0x697665642f656475,0x74636e75665f6563,0x0a22682e736e6f69\n"
".quad 0x3209656c69662e09,0x2f7273752f220936,0x75632f6c61636f6c,0x756c636e692f6164\n"
".quad 0x31315f6d732f6564,0x5f63696d6f74615f,0x6e6f6974636e7566,0x662e090a22682e73\n"
".quad 0x2209373209656c69,0x636f6c2f7273752f,0x2f616475632f6c61,0x2f6564756c636e69\n"
".quad 0x74615f32315f6d73,0x6e75665f63696d6f,0x682e736e6f697463,0x656c69662e090a22\n"
".quad 0x73752f2209383209,0x2f6c61636f6c2f72,0x636e692f61647563,0x5f6d732f6564756c\n"
".quad 0x6c62756f645f3331,0x6974636e75665f65,0x090a22682e736e6f,0x393209656c69662e\n"
".quad 0x6c2f7273752f2209,0x6475632f6c61636f,0x64756c636e692f61,0x5f30325f6d732f65\n"
".quad 0x665f63696d6f7461,0x736e6f6974636e75,0x69662e090a22682e,0x2f2209303309656c\n"
".quad 0x61636f6c2f727375,0x692f616475632f6c,0x732f6564756c636e,0x746e695f30325f6d\n"
".quad 0x2e736369736e6972,0x6c69662e090a2268,0x752f220931330965,0x6c61636f6c2f7273\n"
".quad 0x6e692f616475632f,0x75732f6564756c63,0x75665f6563616672,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x752f220932330965,0x6c61636f6c2f7273,0x6e692f616475632f\n"
".quad 0x65742f6564756c63,0x65665f6572757478,0x636e75665f686374,0x22682e736e6f6974\n"
".quad 0x09656c69662e090a,0x7273752f22093333,0x632f6c61636f6c2f,0x6c636e692f616475\n"
".quad 0x6874616d2f656475,0x6f6974636e75665f,0x705f6c62645f736e,0x0a0a22682e317874\n"
".quad 0x752e207865742e09,0x6e49786574203436,0x2e090a0a3b747570,0x5a5f207972746e65\n"
".quad 0x54707265746e6939,0x616f6c6636507865,0x2069696966503374,0x7261702e09090a28\n"
".quad 0x203436752e206d61,0x6170616475635f5f,0x6e69395a5f5f6d72,0x5078655470726574\n"
".quad 0x503374616f6c6636,0x696f705f69696966,0x2e09090a2c73746e,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x5a5f5f6d72617061,0x54707265746e6939,0x616f6c6636507865\n"
".quad 0x5f69696966503374,0x0a2c74757074756f,0x6d617261702e0909,0x5f5f203233732e20\n"
".quad 0x6d72617061647563,0x65746e69395a5f5f,0x6636507865547072,0x6966503374616f6c\n"
".quad 0x757074756f5f6969,0x2c6c656d756e5f74,0x617261702e09090a,0x5f203233732e206d\n"
".quad 0x726170616475635f,0x746e69395a5f5f6d,0x3650786554707265,0x66503374616f6c66\n"
".quad 0x7074756f5f696969,0x68746469775f7475,0x7261702e09090a2c,0x203233732e206d61\n"
".quad 0x6170616475635f5f,0x6e69395a5f5f6d72,0x5078655470726574,0x503374616f6c6636\n"
".quad 0x706f5f5f69696966,0x7b090a296e6f6974,0x2e206765722e090a,0x323c722520323375\n"
".quad 0x65722e090a3b3e31,0x25203436752e2067,0x090a3b3e393c6472,0x33662e206765722e\n"
".quad 0x3435343c66252032,0x6765722e090a3b3e,0x2520646572702e20,0x2e090a3b3e373c70\n"
".quad 0x3209313209636f6c,0x57444c240a300936,0x5a5f5f6e69676562,0x54707265746e6939\n"
".quad 0x616f6c6636507865,0x3a69696966503374,0x33752e747663090a,0x2509203631752e32\n"
".quad 0x61746325202c3172,0x63090a3b782e6469,0x752e3233752e7476,0x2c32722509203631\n"
".quad 0x782e6469746e2520,0x34326c756d090a3b,0x203233752e6f6c2e,0x7225202c33722509\n"
".quad 0x0a3b327225202c31,0x3233752e74766309,0x722509203631752e,0x6961746325202c34\n"
".quad 0x7663090a3b792e64,0x31752e3233752e74,0x202c357225092036,0x3b792e6469746e25\n"
".quad 0x2e34326c756d090a,0x09203233752e6f6c,0x347225202c367225,0x090a3b357225202c\n"
".quad 0x2e3233752e747663,0x3772250920363175,0x782e64697425202c,0x752e646461090a3b\n"
".quad 0x2c38722509203233,0x7225202c37722520,0x2e747663090a3b33,0x203631752e323375\n"
".quad 0x7425202c39722509,0x61090a3b792e6469,0x09203233752e6464,0x7225202c30317225\n"
".quad 0x0a3b367225202c39,0x617261702e646c09,0x2509203233732e6d,0x5f5f5b202c313172\n"
".quad 0x6d72617061647563,0x65746e69395a5f5f,0x6636507865547072,0x6966503374616f6c\n"
".quad 0x757074756f5f6969,0x5d68746469775f74,0x34326c756d090a3b,0x203233752e6f6c2e\n"
".quad 0x25202c3231722509,0x317225202c303172,0x2e646461090a3b31,0x3172250920323375\n"
".quad 0x202c387225202c33,0x6c090a3b32317225,0x2e6d617261702e64,0x3172250920323373\n"
".quad 0x75635f5f5b202c34,0x5f5f6d7261706164,0x707265746e69395a,0x6f6c663650786554\n"
".quad 0x6969696650337461,0x5f74757074756f5f,0x0a3b5d6c656d756e,0x656c2e7074657309\n"
".quad 0x702509203233752e,0x2c34317225202c31,0x090a3b3331722520,0x6172622031702540\n"
".quad 0x5f305f744c240920,0x6c2e090a3b343135,0x333309313209636f,0x2e747663090a3009\n"
".quad 0x203233752e343675,0x25202c3164722509,0x646c090a3b333172,0x752e6d617261702e\n"
".quad 0x3264722509203436,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x54707265746e6939\n"
".quad 0x616f6c6636507865,0x5f69696966503374,0x3b5d73746e696f70,0x69772e6c756d090a\n"
".quad 0x09203233752e6564,0x7225202c33647225,0x0a3b3231202c3331,0x3436752e64646109\n"
".quad 0x202c346472250920,0x7225202c32647225,0x2e646c090a3b3364,0x36752e6d61726170\n"
".quad 0x2c35647225092034,0x616475635f5f5b20,0x395a5f5f6d726170,0x6554707265746e69\n"
".quad 0x74616f6c66365078,0x6f5f696969665033,0x0a3b5d7475707475,0x6469772e6c756d09\n"
".quad 0x2509203233752e65,0x317225202c366472,0x61090a3b34202c33,0x09203436752e6464\n"
".quad 0x7225202c37647225,0x36647225202c3564,0x6c672e646c090a3b,0x3233662e6c61626f\n"
".quad 0x5b202c3166250920,0x3b5d302b34647225,0x33662e766f6d090a,0x202c326625092032\n"
".quad 0x646c090a3b316625,0x2e6c61626f6c672e,0x3366250920323366,0x2b346472255b202c\n"
".quad 0x766f6d090a3b5d34,0x662509203233662e,0x0a3b336625202c34,0x626f6c672e646c09\n"
".quad 0x09203233662e6c61,0x72255b202c356625,0x090a3b5d382b3464,0x203233662e766f6d\n"
".quad 0x6625202c36662509,0x702e646c090a3b35,0x3233732e6d617261,0x202c353172250920\n"
".quad 0x70616475635f5f5b,0x69395a5f5f6d7261,0x786554707265746e,0x3374616f6c663650\n"
".quad 0x6f5f5f6969696650,0x0a3b5d6e6f697470,0x3233752e766f6d09,0x202c363172250920\n"
".quad 0x70746573090a3b30,0x203233732e71652e,0x7225202c32702509,0x36317225202c3531\n"
".quad 0x2032702540090a3b,0x744c240920617262,0x0a3b3835325f305f,0x3233752e766f6d09\n"
".quad 0x202c373172250920,0x702e646c090a3b31,0x3233732e6d617261,0x202c353172250920\n"
".quad 0x70616475635f5f5b,0x69395a5f5f6d7261,0x786554707265746e,0x3374616f6c663650\n"
".quad 0x6f5f5f6969696650,0x0a3b5d6e6f697470,0x71652e7074657309,0x702509203233732e\n"
".quad 0x2c35317225202c33,0x090a3b3731722520,0x6172622033702540,0x5f305f744c240920\n"
".quad 0x6f6d090a3b303737,0x2509203233752e76,0x0a3b32202c383172,0x617261702e646c09\n"
".quad 0x2509203233732e6d,0x5f5f5b202c353172,0x6d72617061647563,0x65746e69395a5f5f\n"
".quad 0x6636507865547072,0x6966503374616f6c,0x6974706f5f5f6969,0x6573090a3b5d6e6f\n"
".quad 0x33732e71652e7074,0x202c347025092032,0x7225202c35317225,0x702540090a3b3831\n"
".quad 0x2409206172622034,0x3230315f305f744c,0x2e766f6d090a3b36,0x3172250920323375\n"
".quad 0x6c090a3b33202c39,0x2e6d617261702e64,0x3172250920323373,0x75635f5f5b202c35\n"
".quad 0x5f5f6d7261706164,0x707265746e69395a,0x6f6c663650786554,0x6969696650337461\n"
".quad 0x6e6f6974706f5f5f,0x70746573090a3b5d,0x203233732e71652e,0x7225202c35702509\n"
".quad 0x39317225202c3531,0x2035702540090a3b,0x744c240920617262,0x3b323832315f305f\n"
".quad 0x6e752e617262090a,0x305f744c24092069,0x240a3b383335315f,0x3835325f305f744c\n"
".quad 0x09636f6c2e090a3a,0x0a30093633093132,0x3233662e766f6d09,0x25202c3766250920\n"
".quad 0x766f6d090a3b3266,0x662509203233662e,0x0a3b346625202c38,0x3233662e766f6d09\n"
".quad 0x25202c3966250920,0x766f6d090a3b3666,0x662509203233662e,0x30306630202c3031\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x33662e766f6d090a,0x2c31316625092032\n"
".quad 0x090a3b3031662520,0x762e64332e786574,0x33662e3233662e34,0x2c323166257b2032\n"
".quad 0x3166252c33316625,0x2c7d353166252c34,0x75706e497865745b,0x252c3766257b2c74\n"
".quad 0x252c3966252c3866,0x090a3b5d7d313166,0x203233662e766f6d,0x25202c3631662509\n"
".quad 0x7473090a3b323166,0x2e6c61626f6c672e,0x72255b0920323366,0x25202c5d302b3764\n"
".quad 0x6c2e090a3b363166,0x373309313209636f,0x2e617262090a3009,0x744c240920696e75\n"
".quad 0x0a3b3431355f305f,0x37375f305f744c24,0x636f6c2e090a3a30,0x3009303409313209\n"
".quad 0x33662e766f6d090a,0x2c37316625092032,0x6d090a3b32662520,0x09203233662e766f\n"
".quad 0x6625202c38316625,0x2e766f6d090a3b34,0x3166250920323366,0x0a3b366625202c39\n"
".quad 0x3233662e766f6d09,0x202c303266250920,0x3030303030306630,0x09202020203b3030\n"
".quad 0x6f6d090a30202f2f,0x2509203233662e76,0x326625202c313266,0x2e786574090a3b30\n"
".quad 0x33662e34762e6433,0x257b203233662e32,0x333266252c323266,0x66252c343266252c\n"
".quad 0x7865745b2c7d3532,0x257b2c7475706e49,0x383166252c373166,0x66252c393166252c\n"
".quad 0x6d090a3b5d7d3132,0x09203233662e766f,0x6625202c36326625,0x2e7473090a3b3232\n"
".quad 0x662e6c61626f6c67,0x6472255b09203233,0x6625202c5d302b37,0x6f6c2e090a3b3632\n"
".quad 0x0931340931320963,0x752e617262090a30,0x5f744c240920696e,0x240a3b3431355f30\n"
".quad 0x3230315f305f744c,0x636f6c2e090a3a36,0x3009313509303209,0x33662e766f6d090a\n"
".quad 0x2c37326625092032,0x3030306662663020,0x202020203b303030,0x352e302d202f2f09\n"
".quad 0x33662e646461090a,0x2c38326625092032,0x6625202c31662520,0x747663090a3b3732\n"
".quad 0x3233662e696d722e,0x662509203233662e,0x38326625202c3932,0x662e627573090a3b\n"
".quad 0x3033662509203233,0x202c38326625202c,0x6d090a3b39326625,0x09203233662e6c75\n"
".quad 0x6625202c31336625,0x30336625202c3033,0x662e766f6d090a3b,0x3233662509203233\n"
".quad 0x303866336630202c,0x2020203b30303030,0x090a31202f2f0920,0x203233662e627573\n"
".quad 0x25202c3333662509,0x336625202c323366,0x2e766f6d090a3b30,0x3366250920323366\n"
".quad 0x3265336630202c34,0x20203b6261616161,0x2e30202f2f092020,0x090a373636363631\n"
".quad 0x203233662e6c756d,0x25202c3533662509,0x336625202c313366,0x2e6c756d090a3b34\n"
".quad 0x3366250920323366,0x2c33336625202c36,0x090a3b3333662520,0x203233662e766f6d\n"
".quad 0x30202c3733662509,0x3030303030303466,0x2f09202020203b30,0x627573090a32202f\n"
".quad 0x662509203233662e,0x37336625202c3833,0x0a3b33336625202c,0x3233662e6c756d09\n"
".quad 0x202c393366250920,0x6625202c35336625,0x766f6d090a3b3033,0x662509203233662e\n"
".quad 0x66336630202c3034,0x203b303030303030,0x30202f2f09202020,0x2e6c756d090a352e\n"
".quad 0x3466250920323366,0x2c36336625202c31,0x090a3b3034662520,0x203233662e6c756d\n"
".quad 0x25202c3234662509,0x336625202c313466,0x2e766f6d090a3b38,0x3466250920323366\n"
".quad 0x3266336630202c33,0x20203b6261616161,0x2e30202f2f092020,0x090a373636363636\n"
".quad 0x203233662e627573,0x25202c3434662509,0x346625202c333466,0x2e646461090a3b32\n"
".quad 0x3466250920323366,0x2c34346625202c35,0x090a3b3933662520,0x6c6c75662e766964\n"
".quad 0x662509203233662e,0x39336625202c3634,0x0a3b35346625202c,0x3233662e766f6d09\n"
".quad 0x202c373466250920,0x3030306366336630,0x09202020203b3030,0x090a352e31202f2f\n"
".quad 0x203233662e646461,0x25202c3834662509,0x346625202c363466,0x2e646461090a3b37\n"
".quad 0x3466250920323366,0x2c39326625202c39,0x090a3b3834662520,0x203233662e766f6d\n"
".quad 0x30202c3035662509,0x3030303030666266,0x2f09202020203b30,0x090a352e302d202f\n"
".quad 0x203233662e646461,0x25202c3135662509,0x30356625202c3366,0x722e747663090a3b\n"
".quad 0x662e3233662e696d,0x3235662509203233,0x0a3b31356625202c,0x3233662e62757309\n"
".quad 0x202c333566250920,0x6625202c31356625,0x6c756d090a3b3235,0x662509203233662e\n"
".quad 0x33356625202c3435,0x0a3b33356625202c,0x3233662e766f6d09,0x202c353566250920\n"
".quad 0x3030303866336630,0x09202020203b3030,0x7573090a31202f2f,0x2509203233662e62\n"
".quad 0x356625202c363566,0x3b33356625202c35,0x33662e766f6d090a,0x2c37356625092032\n"
".quad 0x6161326533663020,0x202020203b626161,0x36312e30202f2f09,0x756d090a37363636\n"
".quad 0x2509203233662e6c,0x356625202c383566,0x3b37356625202c34,0x33662e6c756d090a\n"
".quad 0x2c39356625092032,0x25202c3635662520,0x6f6d090a3b363566,0x2509203233662e76\n"
".quad 0x346630202c303666,0x3b30303030303030,0x202f2f0920202020,0x662e627573090a32\n"
".quad 0x3136662509203233,0x202c30366625202c,0x6d090a3b36356625,0x09203233662e6c75\n"
".quad 0x6625202c32366625,0x33356625202c3835,0x662e766f6d090a3b,0x3336662509203233\n"
".quad 0x303066336630202c,0x2020203b30303030,0x352e30202f2f0920,0x33662e6c756d090a\n"
".quad 0x2c34366625092032,0x25202c3935662520,0x756d090a3b333666,0x2509203233662e6c\n"
".quad 0x366625202c353666,0x3b31366625202c34,0x33662e766f6d090a,0x2c36366625092032\n"
".quad 0x6161326633663020,0x202020203b626161,0x36362e30202f2f09,0x7573090a37363636\n"
".quad 0x2509203233662e62,0x366625202c373666,0x3b35366625202c36,0x33662e646461090a\n"
".quad 0x2c38366625092032,0x25202c3736662520,0x6964090a3b323666,0x662e6c6c75662e76\n"
".quad 0x3936662509203233,0x202c32366625202c,0x6d090a3b38366625,0x09203233662e766f\n"
".quad 0x6630202c30376625,0x3030303030636633,0x2f2f09202020203b,0x6461090a352e3120\n"
".quad 0x2509203233662e64,0x366625202c313766,0x3b30376625202c39,0x33662e646461090a\n"
".quad 0x2c32376625092032,0x25202c3235662520,0x6f6d090a3b313766,0x2509203233662e76\n"
".quad 0x626630202c333766,0x3b30303030303066,0x202f2f0920202020,0x6461090a352e302d\n"
".quad 0x2509203233662e64,0x356625202c343766,0x0a3b33376625202c,0x696d722e74766309\n"
".quad 0x3233662e3233662e,0x202c353766250920,0x73090a3b34376625,0x09203233662e6275\n"
".quad 0x6625202c36376625,0x35376625202c3437,0x662e6c756d090a3b,0x3737662509203233\n"
".quad 0x202c36376625202c,0x6d090a3b36376625,0x09203233662e766f,0x6630202c38376625\n"
".quad 0x3030303030386633,0x2f2f09202020203b,0x2e627573090a3120,0x3766250920323366\n"
".quad 0x2c38376625202c39,0x090a3b3637662520,0x203233662e766f6d,0x30202c3038662509\n"
".quad 0x6161616132653366,0x2f09202020203b62,0x363636312e30202f,0x2e6c756d090a3736\n"
".quad 0x3866250920323366,0x2c37376625202c31,0x090a3b3038662520,0x203233662e6c756d\n"
".quad 0x25202c3238662509,0x376625202c393766,0x2e766f6d090a3b39,0x3866250920323366\n"
".quad 0x3030346630202c33,0x20203b3030303030,0x0a32202f2f092020,0x3233662e62757309\n"
".quad 0x202c343866250920,0x6625202c33386625,0x6c756d090a3b3937,0x662509203233662e\n"
".quad 0x31386625202c3538,0x0a3b36376625202c,0x3233662e766f6d09,0x202c363866250920\n"
".quad 0x3030303066336630,0x09202020203b3030,0x090a352e30202f2f,0x203233662e6c756d\n"
".quad 0x25202c3738662509,0x386625202c323866,0x2e6c756d090a3b36,0x3866250920323366\n"
".quad 0x2c37386625202c38,0x090a3b3438662520,0x203233662e766f6d,0x30202c3938662509\n"
".quad 0x6161616132663366,0x2f09202020203b62,0x363636362e30202f,0x2e627573090a3736\n"
".quad 0x3966250920323366,0x2c39386625202c30,0x090a3b3838662520,0x203233662e646461\n"
".quad 0x25202c3139662509,0x386625202c303966,0x2e766964090a3b35,0x3233662e6c6c7566\n"
".quad 0x202c323966250920,0x6625202c35386625,0x766f6d090a3b3139,0x662509203233662e\n"
".quad 0x66336630202c3339,0x203b303030303063,0x31202f2f09202020,0x2e646461090a352e\n"
".quad 0x3966250920323366,0x2c32396625202c34,0x090a3b3339662520,0x203233662e646461\n"
".quad 0x25202c3539662509,0x396625202c353766,0x636f6c2e090a3b34,0x3009353509303209\n"
".quad 0x33662e766f6d090a,0x2c36396625092032,0x3030303034663020,0x202020203b303030\n"
".quad 0x73090a32202f2f09,0x09203233662e6275,0x6625202c37396625,0x30336625202c3639\n"
".quad 0x662e766f6d090a3b,0x3839662509203233,0x303030346630202c,0x2020203b30303030\n"
".quad 0x090a32202f2f0920,0x203233662e627573,0x25202c3939662509,0x356625202c383966\n"
".quad 0x2e766f6d090a3b33,0x3166250920323366,0x30346630202c3030,0x203b303030303030\n"
".quad 0x0a32202f2f092020,0x3233662e62757309,0x2c31303166250920,0x202c303031662520\n"
".quad 0x6d090a3b36376625,0x09203233662e766f,0x30202c3230316625,0x3030303030663366\n"
".quad 0x2f2f092020203b30,0x756d090a352e3020,0x2509203233662e6c,0x6625202c33303166\n"
".quad 0x30316625202c3133,0x2e766f6d090a3b32,0x3166250920323366,0x66336630202c3430\n"
".quad 0x203b303030303030,0x2e30202f2f092020,0x662e6c756d090a35,0x3031662509203233\n"
".quad 0x2c34356625202c35,0x0a3b343031662520,0x3233662e766f6d09,0x2c36303166250920\n"
".quad 0x3030306633663020,0x092020203b303030,0x090a352e30202f2f,0x203233662e6c756d\n"
".quad 0x202c373031662509,0x6625202c37376625,0x756d090a3b363031,0x2509203233662e6c\n"
".quad 0x6625202c38303166,0x396625202c333031,0x2e766f6d090a3b37,0x3166250920323366\n"
".quad 0x65336630202c3930,0x203b626161616132,0x2e30202f2f092020,0x090a373636363631\n"
".quad 0x203233662e6c756d,0x202c303131662509,0x6625202c36336625,0x756d090a3b393031\n"
".quad 0x2509203233662e6c,0x6625202c31313166,0x396625202c353031,0x2e766f6d090a3b39\n"
".quad 0x3166250920323366,0x65336630202c3231,0x203b626161616132,0x2e30202f2f092020\n"
".quad 0x090a373636363631,0x203233662e6c756d,0x202c333131662509,0x6625202c39356625\n"
".quad 0x756d090a3b323131,0x2509203233662e6c,0x6625202c34313166,0x316625202c373031\n"
".quad 0x766f6d090a3b3130,0x662509203233662e,0x336630202c353131,0x3b62616161613265\n"
".quad 0x30202f2f09202020,0x0a3736363636312e,0x3233662e6c756d09,0x2c36313166250920\n"
".quad 0x25202c3238662520,0x6d090a3b35313166,0x09203233662e766f,0x30202c3731316625\n"
".quad 0x6161616132663366,0x2f2f092020203b62,0x36363636362e3020,0x662e627573090a37\n"
".quad 0x3131662509203233,0x3731316625202c38,0x3b3830316625202c,0x33662e6c756d090a\n"
".quad 0x3931316625092032,0x2c3031316625202c,0x090a3b3333662520,0x203233662e766f6d\n"
".quad 0x202c303231662509,0x6161613266336630,0x2f092020203b6261,0x363636362e30202f\n"
".quad 0x2e627573090a3736,0x3166250920323366,0x32316625202c3132,0x3131316625202c30\n"
".quad 0x662e6c756d090a3b,0x3231662509203233,0x3331316625202c32,0x0a3b36356625202c\n"
".quad 0x3233662e766f6d09,0x2c33323166250920,0x6161326633663020,0x092020203b626161\n"
".quad 0x3636362e30202f2f,0x627573090a373636,0x662509203233662e,0x316625202c343231\n"
".quad 0x31316625202c3332,0x2e6c756d090a3b34,0x3166250920323366,0x31316625202c3532\n"
".quad 0x3b39376625202c36,0x33662e646461090a,0x3632316625092032,0x2c3931316625202c\n"
".quad 0x0a3b383131662520,0x3233662e64646109,0x2c37323166250920,0x202c323231662520\n"
".quad 0x090a3b3132316625,0x203233662e646461,0x202c383231662509,0x25202c3532316625\n"
".quad 0x64090a3b34323166,0x2e6c6c75662e7669,0x3166250920323366,0x31316625202c3932\n"
".quad 0x3632316625202c38,0x662e766964090a3b,0x203233662e6c6c75,0x202c303331662509\n"
".quad 0x25202c3132316625,0x64090a3b37323166,0x2e6c6c75662e7669,0x3166250920323366\n"
".quad 0x32316625202c3133,0x3832316625202c34,0x662e766f6d090a3b,0x3331662509203233\n"
".quad 0x3066626630202c32,0x20203b3030303030,0x2e302d202f2f0920,0x662e646461090a35\n"
".quad 0x3331662509203233,0x3932316625202c33,0x3b3233316625202c,0x33662e766f6d090a\n"
".quad 0x3433316625092032,0x303066626630202c,0x2020203b30303030,0x352e302d202f2f09\n"
".quad 0x33662e646461090a,0x3533316625092032,0x2c3033316625202c,0x0a3b343331662520\n"
".quad 0x3233662e766f6d09,0x2c36333166250920,0x3030306662663020,0x092020203b303030\n"
".quad 0x0a352e302d202f2f,0x3233662e64646109,0x2c37333166250920,0x202c313331662520\n"
".quad 0x090a3b3633316625,0x203233662e646461,0x202c383331662509,0x25202c3333316625\n"
".quad 0x6461090a3b393266,0x2509203233662e64,0x6625202c39333166,0x356625202c353331\n"
".quad 0x2e646461090a3b32,0x3166250920323366,0x33316625202c3034,0x3b35376625202c37\n"
".quad 0x33662e766f6d090a,0x3134316625092032,0x3b3833316625202c,0x33662e766f6d090a\n"
".quad 0x3234316625092032,0x3b3933316625202c,0x33662e766f6d090a,0x3334316625092032\n"
".quad 0x3b3034316625202c,0x33662e766f6d090a,0x3434316625092032,0x303030306630202c\n"
".quad 0x2020203b30303030,0x6d090a30202f2f09,0x09203233662e766f,0x25202c3534316625\n"
".quad 0x74090a3b34343166,0x34762e64332e7865,0x3233662e3233662e,0x2c36343166257b20\n"
".quad 0x66252c3734316625,0x343166252c383431,0x497865745b2c7d39,0x66257b2c7475706e\n"
".quad 0x343166252c313431,0x2c33343166252c32,0x3b5d7d3534316625,0x33662e766f6d090a\n"
".quad 0x3035316625092032,0x3b3634316625202c,0x3209636f6c2e090a,0x090a300936350930\n"
".quad 0x203233662e766f6d,0x202c313531662509,0x6d090a3b39346625,0x09203233662e766f\n"
".quad 0x25202c3235316625,0x6d090a3b39333166,0x09203233662e766f,0x25202c3335316625\n"
".quad 0x6d090a3b30343166,0x09203233662e766f,0x30202c3435316625,0x3030303030303066\n"
".quad 0x2f2f092020203b30,0x2e766f6d090a3020,0x3166250920323366,0x35316625202c3535\n"
".quad 0x2e786574090a3b34,0x33662e34762e6433,0x257b203233662e32,0x3166252c36353166\n"
".quad 0x38353166252c3735,0x2c7d39353166252c,0x75706e497865745b,0x31353166257b2c74\n"
".quad 0x252c32353166252c,0x3166252c33353166,0x6d090a3b5d7d3535,0x09203233662e766f\n"
".quad 0x25202c3036316625,0x2e090a3b36353166,0x3509303209636f6c,0x766f6d090a300938\n"
".quad 0x662509203233662e,0x316625202c313631,0x766f6d090a3b3833,0x662509203233662e\n"
".quad 0x376625202c323631,0x2e766f6d090a3b32,0x3166250920323366,0x34316625202c3336\n"
".quad 0x2e766f6d090a3b30,0x3166250920323366,0x30306630202c3436,0x203b303030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x2c35363166250920,0x0a3b343631662520\n"
".quad 0x2e64332e78657409,0x662e3233662e3476,0x363166257b203233,0x2c37363166252c36\n"
".quad 0x66252c3836316625,0x65745b2c7d393631,0x7b2c7475706e4978,0x66252c3136316625\n"
".quad 0x363166252c323631,0x7d35363166252c33,0x2e766f6d090a3b5d,0x3166250920323366\n"
".quad 0x36316625202c3037,0x636f6c2e090a3b36,0x3009393509303209,0x33662e766f6d090a\n"
".quad 0x3137316625092032,0x0a3b39346625202c,0x3233662e766f6d09,0x2c32373166250920\n"
".quad 0x090a3b3237662520,0x203233662e766f6d,0x202c333731662509,0x090a3b3034316625\n"
".quad 0x203233662e766f6d,0x202c343731662509,0x3030303030306630,0x2f092020203b3030\n"
".quad 0x766f6d090a30202f,0x662509203233662e,0x316625202c353731,0x786574090a3b3437\n"
".quad 0x662e34762e64332e,0x7b203233662e3233,0x66252c3637316625,0x373166252c373731\n"
".quad 0x7d39373166252c38,0x706e497865745b2c,0x373166257b2c7475,0x2c32373166252c31\n"
".quad 0x66252c3337316625,0x090a3b5d7d353731,0x203233662e766f6d,0x202c303831662509\n"
".quad 0x090a3b3637316625,0x09303209636f6c2e,0x756d090a30093136,0x2509203233662e6c\n"
".quad 0x6625202c31383166,0x38316625202c3534,0x2e64616d090a3b30,0x3166250920323366\n"
".quad 0x32316625202c3238,0x3037316625202c36,0x3b3138316625202c,0x33662e6c756d090a\n"
".quad 0x3338316625092032,0x202c38366625202c,0x090a3b3238316625,0x203233662e6c756d\n"
".quad 0x202c343831662509,0x6625202c35346625,0x616d090a3b303631,0x2509203233662e64\n"
".quad 0x6625202c35383166,0x316625202c363231,0x38316625202c3035,0x2e64616d090a3b34\n"
".quad 0x3166250920323366,0x32316625202c3638,0x3538316625202c37,0x3b3338316625202c\n"
".quad 0x3209636f6c2e090a,0x090a300932360930,0x203233662e766f6d,0x202c373831662509\n"
".quad 0x090a3b3833316625,0x203233662e766f6d,0x202c383831662509,0x090a3b3933316625\n"
".quad 0x203233662e766f6d,0x202c393831662509,0x6d090a3b35396625,0x09203233662e766f\n"
".quad 0x30202c3039316625,0x3030303030303066,0x2f2f092020203b30,0x2e766f6d090a3020\n"
".quad 0x3166250920323366,0x39316625202c3139,0x2e786574090a3b30,0x33662e34762e6433\n"
".quad 0x257b203233662e32,0x3166252c32393166,0x34393166252c3339,0x2c7d35393166252c\n"
".quad 0x75706e497865745b,0x37383166257b2c74,0x252c38383166252c,0x3166252c39383166\n"
".quad 0x6d090a3b5d7d3139,0x09203233662e766f,0x25202c3639316625,0x2e090a3b32393166\n"
".quad 0x3609303209636f6c,0x766f6d090a300933,0x662509203233662e,0x346625202c373931\n"
".quad 0x2e766f6d090a3b39,0x3166250920323366,0x33316625202c3839,0x2e766f6d090a3b39\n"
".quad 0x3166250920323366,0x35396625202c3939,0x662e766f6d090a3b,0x3032662509203233\n"
".quad 0x3030306630202c30,0x20203b3030303030,0x090a30202f2f0920,0x203233662e766f6d\n"
".quad 0x202c313032662509,0x090a3b3030326625,0x762e64332e786574,0x33662e3233662e34\n"
".quad 0x32303266257b2032,0x252c33303266252c,0x3266252c34303266,0x7865745b2c7d3530\n"
".quad 0x257b2c7475706e49,0x3166252c37393166,0x39393166252c3839,0x5d7d31303266252c\n"
".quad 0x662e766f6d090a3b,0x3032662509203233,0x3230326625202c36,0x09636f6c2e090a3b\n"
".quad 0x0a30093536093032,0x3233662e766f6d09,0x2c37303266250920,0x0a3b383331662520\n"
".quad 0x3233662e766f6d09,0x2c38303266250920,0x090a3b3237662520,0x203233662e766f6d\n"
".quad 0x202c393032662509,0x6d090a3b35396625,0x09203233662e766f,0x30202c3031326625\n"
".quad 0x3030303030303066,0x2f2f092020203b30,0x2e766f6d090a3020,0x3266250920323366\n"
".quad 0x31326625202c3131,0x2e786574090a3b30,0x33662e34762e6433,0x257b203233662e32\n"
".quad 0x3266252c32313266,0x34313266252c3331,0x2c7d35313266252c,0x75706e497865745b\n"
".quad 0x37303266257b2c74,0x252c38303266252c,0x3266252c39303266,0x6d090a3b5d7d3131\n"
".quad 0x09203233662e766f,0x25202c3631326625,0x2e090a3b32313266,0x3609303209636f6c\n"
".quad 0x766f6d090a300936,0x662509203233662e,0x346625202c373132,0x2e766f6d090a3b39\n"
".quad 0x3266250920323366,0x32376625202c3831,0x662e766f6d090a3b,0x3132662509203233\n"
".quad 0x3b35396625202c39,0x33662e766f6d090a,0x3032326625092032,0x303030306630202c\n"
".quad 0x2020203b30303030,0x6d090a30202f2f09,0x09203233662e766f,0x25202c3132326625\n"
".quad 0x74090a3b30323266,0x34762e64332e7865,0x3233662e3233662e,0x2c32323266257b20\n"
".quad 0x66252c3332326625,0x323266252c343232,0x497865745b2c7d35,0x66257b2c7475706e\n"
".quad 0x313266252c373132,0x2c39313266252c38,0x3b5d7d3132326625,0x33662e766f6d090a\n"
".quad 0x3632326625092032,0x3b3232326625202c,0x3209636f6c2e090a,0x090a300938360930\n"
".quad 0x203233662e6c756d,0x202c373232662509,0x6625202c35346625,0x616d090a3b363232\n"
".quad 0x2509203233662e64,0x6625202c38323266,0x326625202c363231,0x32326625202c3631\n"
".quad 0x2e6c756d090a3b37,0x3266250920323366,0x38366625202c3932,0x3b3832326625202c\n"
".quad 0x33662e6c756d090a,0x3033326625092032,0x202c35346625202c,0x090a3b3630326625\n"
".quad 0x203233662e64616d,0x202c313332662509,0x25202c3632316625,0x6625202c36393166\n"
".quad 0x616d090a3b303332,0x2509203233662e64,0x6625202c32333266,0x326625202c373231\n"
".quad 0x32326625202c3133,0x636f6c2e090a3b39,0x3009343409313209,0x33662e6c756d090a\n"
".quad 0x3333326625092032,0x202c31396625202c,0x090a3b3233326625,0x203233662e64616d\n"
".quad 0x202c343332662509,0x25202c3832316625,0x6625202c36383166,0x7473090a3b333332\n"
".quad 0x2e6c61626f6c672e,0x72255b0920323366,0x25202c5d302b3764,0x2e090a3b34333266\n"
".quad 0x3409313209636f6c,0x617262090a300935,0x4c240920696e752e,0x3b3431355f305f74\n"
".quad 0x315f305f744c240a,0x6c2e090a3a323832,0x313509303209636f,0x2e766f6d090a3009\n"
".quad 0x3266250920323366,0x66626630202c3533,0x203b303030303030,0x302d202f2f092020\n"
".quad 0x2e646461090a352e,0x3266250920323366,0x2c316625202c3633,0x0a3b353332662520\n"
".quad 0x696d722e74766309,0x3233662e3233662e,0x2c37333266250920,0x0a3b363332662520\n"
".quad 0x3233662e62757309,0x2c38333266250920,0x202c363332662520,0x090a3b3733326625\n"
".quad 0x203233662e6c756d,0x202c393332662509,0x25202c3833326625,0x6d090a3b38333266\n"
".quad 0x09203233662e766f,0x30202c3034326625,0x3030303038663366,0x2f2f092020203b30\n"
".quad 0x2e627573090a3120,0x3266250920323366,0x34326625202c3134,0x3833326625202c30\n"
".quad 0x662e766f6d090a3b,0x3432662509203233,0x3265336630202c32,0x20203b6261616161\n"
".quad 0x312e30202f2f0920,0x6d090a3736363636,0x09203233662e6c75,0x25202c3334326625\n"
".quad 0x6625202c39333266,0x756d090a3b323432,0x2509203233662e6c,0x6625202c34343266\n"
".quad 0x326625202c313432,0x766f6d090a3b3134,0x662509203233662e,0x346630202c353432\n"
".quad 0x3b30303030303030,0x32202f2f09202020,0x33662e627573090a,0x3634326625092032\n"
".quad 0x2c3534326625202c,0x0a3b313432662520,0x3233662e6c756d09,0x2c37343266250920\n"
".quad 0x202c333432662520,0x090a3b3833326625,0x203233662e766f6d,0x202c383432662509\n"
".quad 0x3030303066336630,0x2f092020203b3030,0x6d090a352e30202f,0x09203233662e6c75\n"
".quad 0x25202c3934326625,0x6625202c34343266,0x756d090a3b383432,0x2509203233662e6c\n"
".quad 0x6625202c30353266,0x326625202c393432,0x766f6d090a3b3634,0x662509203233662e\n"
".quad 0x336630202c313532,0x3b62616161613266,0x30202f2f09202020,0x0a3736363636362e\n"
".quad 0x3233662e62757309,0x2c32353266250920,0x202c313532662520,0x090a3b3035326625\n"
".quad 0x203233662e646461,0x202c333532662509,0x25202c3235326625,0x64090a3b37343266\n"
".quad 0x2e6c6c75662e7669,0x3266250920323366,0x34326625202c3435,0x3335326625202c37\n"
".quad 0x662e766f6d090a3b,0x3532662509203233,0x6366336630202c35,0x20203b3030303030\n"
".quad 0x352e31202f2f0920,0x33662e646461090a,0x3635326625092032,0x2c3435326625202c\n"
".quad 0x0a3b353532662520,0x3233662e64646109,0x2c37353266250920,0x202c373332662520\n"
".quad 0x090a3b3635326625,0x203233662e766f6d,0x202c383532662509,0x3030303066626630\n"
".quad 0x2f092020203b3030,0x090a352e302d202f,0x203233662e646461,0x202c393532662509\n"
".quad 0x326625202c336625,0x747663090a3b3835,0x3233662e696d722e,0x662509203233662e\n"
".quad 0x326625202c303632,0x627573090a3b3935,0x662509203233662e,0x326625202c313632\n"
".quad 0x36326625202c3935,0x2e6c756d090a3b30,0x3266250920323366,0x36326625202c3236\n"
".quad 0x3136326625202c31,0x662e766f6d090a3b,0x3632662509203233,0x3866336630202c33\n"
".quad 0x20203b3030303030,0x090a31202f2f0920,0x203233662e627573,0x202c343632662509\n"
".quad 0x25202c3336326625,0x6d090a3b31363266,0x09203233662e766f,0x30202c3536326625\n"
".quad 0x6161616132653366,0x2f2f092020203b62,0x36363636312e3020,0x662e6c756d090a37\n"
".quad 0x3632662509203233,0x3236326625202c36,0x3b3536326625202c,0x33662e6c756d090a\n"
".quad 0x3736326625092032,0x2c3436326625202c,0x0a3b343632662520,0x3233662e766f6d09\n"
".quad 0x2c38363266250920,0x3030303034663020,0x092020203b303030,0x7573090a32202f2f\n"
".quad 0x2509203233662e62,0x6625202c39363266,0x326625202c383632,0x6c756d090a3b3436\n"
".quad 0x662509203233662e,0x326625202c303732,0x36326625202c3636,0x2e766f6d090a3b31\n"
".quad 0x3266250920323366,0x66336630202c3137,0x203b303030303030,0x2e30202f2f092020\n"
".quad 0x662e6c756d090a35,0x3732662509203233,0x3736326625202c32,0x3b3137326625202c\n"
".quad 0x33662e6c756d090a,0x3337326625092032,0x2c3237326625202c,0x0a3b393632662520\n"
".quad 0x3233662e766f6d09,0x2c34373266250920,0x6161326633663020,0x092020203b626161\n"
".quad 0x3636362e30202f2f,0x627573090a373636,0x662509203233662e,0x326625202c353732\n"
".quad 0x37326625202c3437,0x2e646461090a3b33,0x3266250920323366,0x37326625202c3637\n"
".quad 0x3037326625202c35,0x662e766964090a3b,0x203233662e6c6c75,0x202c373732662509\n"
".quad 0x25202c3037326625,0x6d090a3b36373266,0x09203233662e766f,0x30202c3837326625\n"
".quad 0x3030303063663366,0x2f2f092020203b30,0x6461090a352e3120,0x2509203233662e64\n"
".quad 0x6625202c39373266,0x326625202c373732,0x646461090a3b3837,0x662509203233662e\n"
".quad 0x326625202c303832,0x37326625202c3036,0x2e766f6d090a3b39,0x3266250920323366\n"
".quad 0x66626630202c3138,0x203b303030303030,0x302d202f2f092020,0x2e646461090a352e\n"
".quad 0x3266250920323366,0x2c356625202c3238,0x0a3b313832662520,0x696d722e74766309\n"
".quad 0x3233662e3233662e,0x2c33383266250920,0x0a3b323832662520,0x3233662e62757309\n"
".quad 0x2c34383266250920,0x202c323832662520,0x090a3b3338326625,0x203233662e6c756d\n"
".quad 0x202c353832662509,0x25202c3438326625,0x6d090a3b34383266,0x09203233662e766f\n"
".quad 0x30202c3638326625,0x3030303038663366,0x2f2f092020203b30,0x2e627573090a3120\n"
".quad 0x3266250920323366,0x38326625202c3738,0x3438326625202c36,0x662e766f6d090a3b\n"
".quad 0x3832662509203233,0x3265336630202c38,0x20203b6261616161,0x312e30202f2f0920\n"
".quad 0x6d090a3736363636,0x09203233662e6c75,0x25202c3938326625,0x6625202c35383266\n"
".quad 0x756d090a3b383832,0x2509203233662e6c,0x6625202c30393266,0x326625202c373832\n"
".quad 0x766f6d090a3b3738,0x662509203233662e,0x346630202c313932,0x3b30303030303030\n"
".quad 0x32202f2f09202020,0x33662e627573090a,0x3239326625092032,0x2c3139326625202c\n"
".quad 0x0a3b373832662520,0x3233662e6c756d09,0x2c33393266250920,0x202c393832662520\n"
".quad 0x090a3b3438326625,0x203233662e766f6d,0x202c343932662509,0x3030303066336630\n"
".quad 0x2f092020203b3030,0x6d090a352e30202f,0x09203233662e6c75,0x25202c3539326625\n"
".quad 0x6625202c30393266,0x756d090a3b343932,0x2509203233662e6c,0x6625202c36393266\n"
".quad 0x326625202c353932,0x766f6d090a3b3239,0x662509203233662e,0x336630202c373932\n"
".quad 0x3b62616161613266,0x30202f2f09202020,0x0a3736363636362e,0x3233662e62757309\n"
".quad 0x2c38393266250920,0x202c373932662520,0x090a3b3639326625,0x203233662e646461\n"
".quad 0x202c393932662509,0x25202c3839326625,0x64090a3b33393266,0x2e6c6c75662e7669\n"
".quad 0x3366250920323366,0x39326625202c3030,0x3939326625202c33,0x662e766f6d090a3b\n"
".quad 0x3033662509203233,0x6366336630202c31,0x20203b3030303030,0x352e31202f2f0920\n"
".quad 0x33662e646461090a,0x3230336625092032,0x2c3030336625202c,0x0a3b313033662520\n"
".quad 0x3233662e64646109,0x2c33303366250920,0x202c333832662520,0x090a3b3230336625\n"
".quad 0x09303209636f6c2e,0x6f6d090a30093535,0x2509203233662e76,0x6630202c34303366\n"
".quad 0x3030303030303034,0x202f2f092020203b,0x662e627573090a32,0x3033662509203233\n"
".quad 0x3430336625202c35,0x3b3833326625202c,0x33662e766f6d090a,0x3630336625092032\n"
".quad 0x303030346630202c,0x2020203b30303030,0x73090a32202f2f09,0x09203233662e6275\n"
".quad 0x25202c3730336625,0x6625202c36303366,0x6f6d090a3b313632,0x2509203233662e76\n"
".quad 0x6630202c38303366,0x3030303030303034,0x202f2f092020203b,0x662e627573090a32\n"
".quad 0x3033662509203233,0x3830336625202c39,0x3b3438326625202c,0x33662e766f6d090a\n"
".quad 0x3031336625092032,0x303066336630202c,0x2020203b30303030,0x0a352e30202f2f09\n"
".quad 0x3233662e6c756d09,0x2c31313366250920,0x202c393332662520,0x090a3b3031336625\n"
".quad 0x203233662e766f6d,0x202c323133662509,0x3030303066336630,0x2f092020203b3030\n"
".quad 0x6d090a352e30202f,0x09203233662e6c75,0x25202c3331336625,0x6625202c32363266\n"
".quad 0x6f6d090a3b323133,0x2509203233662e76,0x6630202c34313366,0x3030303030306633\n"
".quad 0x202f2f092020203b,0x6c756d090a352e30,0x662509203233662e,0x326625202c353133\n"
".quad 0x31336625202c3538,0x2e6c756d090a3b34,0x3366250920323366,0x31336625202c3631\n"
".quad 0x3530336625202c31,0x662e766f6d090a3b,0x3133662509203233,0x3265336630202c37\n"
".quad 0x20203b6261616161,0x312e30202f2f0920,0x6d090a3736363636,0x09203233662e6c75\n"
".quad 0x25202c3831336625,0x6625202c34343266,0x756d090a3b373133,0x2509203233662e6c\n"
".quad 0x6625202c39313366,0x336625202c333133,0x766f6d090a3b3730,0x662509203233662e\n"
".quad 0x336630202c303233,0x3b62616161613265,0x30202f2f09202020,0x0a3736363636312e\n"
".quad 0x3233662e6c756d09,0x2c31323366250920,0x202c373632662520,0x090a3b3032336625\n"
".quad 0x203233662e6c756d,0x202c323233662509,0x25202c3531336625,0x6d090a3b39303366\n"
".quad 0x09203233662e766f,0x30202c3332336625,0x6161616132653366,0x2f2f092020203b62\n"
".quad 0x36363636312e3020,0x662e6c756d090a37,0x3233662509203233,0x3039326625202c34\n"
".quad 0x3b3332336625202c,0x33662e766f6d090a,0x3532336625092032,0x613266336630202c\n"
".quad 0x2020203b62616161,0x36362e30202f2f09,0x7573090a37363636,0x2509203233662e62\n"
".quad 0x6625202c36323366,0x336625202c353233,0x6c756d090a3b3631,0x662509203233662e\n"
".quad 0x336625202c373233,0x34326625202c3831,0x2e766f6d090a3b31,0x3366250920323366\n"
".quad 0x66336630202c3832,0x203b626161616132,0x2e30202f2f092020,0x090a373636363636\n"
".quad 0x203233662e627573,0x202c393233662509,0x25202c3832336625,0x6d090a3b39313366\n"
".quad 0x09203233662e6c75,0x25202c3033336625,0x6625202c31323366,0x6f6d090a3b343632\n"
".quad 0x2509203233662e76,0x6630202c31333366,0x6261616161326633,0x202f2f092020203b\n"
".quad 0x3736363636362e30,0x33662e627573090a,0x3233336625092032,0x2c3133336625202c\n"
".quad 0x0a3b323233662520,0x3233662e6c756d09,0x2c33333366250920,0x202c343233662520\n"
".quad 0x090a3b3738326625,0x203233662e646461,0x202c343333662509,0x25202c3732336625\n"
".quad 0x61090a3b36323366,0x09203233662e6464,0x25202c3533336625,0x6625202c30333366\n"
".quad 0x6461090a3b393233,0x2509203233662e64,0x6625202c36333366,0x336625202c333333\n"
".quad 0x766964090a3b3233,0x33662e6c6c75662e,0x3733336625092032,0x2c3632336625202c\n"
".quad 0x0a3b343333662520,0x6c75662e76696409,0x2509203233662e6c,0x6625202c38333366\n"
".quad 0x336625202c393233,0x766964090a3b3533,0x33662e6c6c75662e,0x3933336625092032\n"
".quad 0x2c3233336625202c,0x0a3b363333662520,0x3233662e766f6d09,0x2c30343366250920\n"
".quad 0x3030306662663020,0x092020203b303030,0x0a352e302d202f2f,0x3233662e64646109\n"
".quad 0x2c31343366250920,0x202c373333662520,0x090a3b3034336625,0x203233662e766f6d\n"
".quad 0x202c323433662509,0x3030303066626630,0x2f092020203b3030,0x090a352e302d202f\n"
".quad 0x203233662e646461,0x202c333433662509,0x25202c3833336625,0x6d090a3b32343366\n"
".quad 0x09203233662e766f,0x30202c3434336625,0x3030303030666266,0x2f2f092020203b30\n"
".quad 0x61090a352e302d20,0x09203233662e6464,0x25202c3534336625,0x6625202c39333366\n"
".quad 0x6461090a3b343433,0x2509203233662e64,0x6625202c36343366,0x326625202c313433\n"
".quad 0x646461090a3b3733,0x662509203233662e,0x336625202c373433,0x36326625202c3334\n"
".quad 0x2e646461090a3b30,0x3366250920323366,0x34336625202c3834,0x3338326625202c35\n"
".quad 0x662e766f6d090a3b,0x3433662509203233,0x3634336625202c39,0x662e766f6d090a3b\n"
".quad 0x3533662509203233,0x3734336625202c30,0x662e766f6d090a3b,0x3533662509203233\n"
".quad 0x3834336625202c31,0x662e766f6d090a3b,0x3533662509203233,0x3030306630202c32\n"
".quad 0x20203b3030303030,0x090a30202f2f0920,0x203233662e766f6d,0x202c333533662509\n"
".quad 0x090a3b3235336625,0x762e64332e786574,0x33662e3233662e34,0x34353366257b2032\n"
".quad 0x252c35353366252c,0x3366252c36353366,0x7865745b2c7d3735,0x257b2c7475706e49\n"
".quad 0x3366252c39343366,0x31353366252c3035,0x5d7d33353366252c,0x662e766f6d090a3b\n"
".quad 0x3533662509203233,0x3435336625202c38,0x09636f6c2e090a3b,0x0a30093635093032\n"
".quad 0x3233662e766f6d09,0x2c39353366250920,0x0a3b373532662520,0x3233662e766f6d09\n"
".quad 0x2c30363366250920,0x0a3b373433662520,0x3233662e766f6d09,0x2c31363366250920\n"
".quad 0x0a3b383433662520,0x3233662e766f6d09,0x2c32363366250920,0x3030303030663020\n"
".quad 0x092020203b303030,0x6f6d090a30202f2f,0x2509203233662e76,0x6625202c33363366\n"
".quad 0x6574090a3b323633,0x2e34762e64332e78,0x203233662e323366,0x252c34363366257b\n"
".quad 0x3366252c35363366,0x37363366252c3636,0x6e497865745b2c7d,0x3366257b2c747570\n"
".quad 0x30363366252c3935,0x252c31363366252c,0x0a3b5d7d33363366,0x3233662e766f6d09\n"
".quad 0x2c38363366250920,0x0a3b343633662520,0x303209636f6c2e09,0x6d090a3009383509\n"
".quad 0x09203233662e766f,0x25202c3936336625,0x6d090a3b36343366,0x09203233662e766f\n"
".quad 0x25202c3037336625,0x6d090a3b30383266,0x09203233662e766f,0x25202c3137336625\n"
".quad 0x6d090a3b38343366,0x09203233662e766f,0x30202c3237336625,0x3030303030303066\n"
".quad 0x2f2f092020203b30,0x2e766f6d090a3020,0x3366250920323366,0x37336625202c3337\n"
".quad 0x2e786574090a3b32,0x33662e34762e6433,0x257b203233662e32,0x3366252c34373366\n"
".quad 0x36373366252c3537,0x2c7d37373366252c,0x75706e497865745b,0x39363366257b2c74\n"
".quad 0x252c30373366252c,0x3366252c31373366,0x6d090a3b5d7d3337,0x09203233662e766f\n"
".quad 0x25202c3837336625,0x2e090a3b34373366,0x3509303209636f6c,0x766f6d090a300939\n"
".quad 0x662509203233662e,0x326625202c393733,0x766f6d090a3b3735,0x662509203233662e\n"
".quad 0x326625202c303833,0x766f6d090a3b3038,0x662509203233662e,0x336625202c313833\n"
".quad 0x766f6d090a3b3834,0x662509203233662e,0x306630202c323833,0x3b30303030303030\n"
".quad 0x30202f2f09202020,0x33662e766f6d090a,0x3338336625092032,0x3b3238336625202c\n"
".quad 0x64332e786574090a,0x2e3233662e34762e,0x3366257b20323366,0x35383366252c3438\n"
".quad 0x252c36383366252c,0x745b2c7d37383366,0x2c7475706e497865,0x252c39373366257b\n"
".quad 0x3366252c30383366,0x33383366252c3138,0x766f6d090a3b5d7d,0x662509203233662e\n"
".quad 0x336625202c383833,0x6f6c2e090a3b3438,0x0931360930320963,0x662e6c756d090a30\n"
".quad 0x3833662509203233,0x3335326625202c39,0x3b3838336625202c,0x33662e64616d090a\n"
".quad 0x3039336625092032,0x2c3433336625202c,0x202c383733662520,0x090a3b3938336625\n"
".quad 0x203233662e6c756d,0x202c313933662509,0x25202c3637326625,0x6d090a3b30393366\n"
".quad 0x09203233662e6c75,0x25202c3239336625,0x6625202c33353266,0x616d090a3b383633\n"
".quad 0x2509203233662e64,0x6625202c33393366,0x336625202c343333,0x39336625202c3835\n"
".quad 0x2e64616d090a3b32,0x3366250920323366,0x33336625202c3439,0x3339336625202c35\n"
".quad 0x3b3139336625202c,0x3209636f6c2e090a,0x090a300932360930,0x203233662e766f6d\n"
".quad 0x202c353933662509,0x090a3b3634336625,0x203233662e766f6d,0x202c363933662509\n"
".quad 0x090a3b3734336625,0x203233662e766f6d,0x202c373933662509,0x090a3b3330336625\n"
".quad 0x203233662e766f6d,0x202c383933662509,0x3030303030306630,0x2f092020203b3030\n"
".quad 0x766f6d090a30202f,0x662509203233662e,0x336625202c393933,0x786574090a3b3839\n"
".quad 0x662e34762e64332e,0x7b203233662e3233,0x66252c3030346625,0x303466252c313034\n"
".quad 0x7d33303466252c32,0x706e497865745b2c,0x393366257b2c7475,0x2c36393366252c35\n"
".quad 0x66252c3739336625,0x090a3b5d7d393933,0x203233662e766f6d,0x202c343034662509\n"
".quad 0x090a3b3030346625,0x09303209636f6c2e,0x6f6d090a30093336,0x2509203233662e76\n"
".quad 0x6625202c35303466,0x6f6d090a3b373532,0x2509203233662e76,0x6625202c36303466\n"
".quad 0x6f6d090a3b373433,0x2509203233662e76,0x6625202c37303466,0x6f6d090a3b333033\n"
".quad 0x2509203233662e76,0x6630202c38303466,0x3030303030303030,0x202f2f092020203b\n"
".quad 0x662e766f6d090a30,0x3034662509203233,0x3830346625202c39,0x332e786574090a3b\n"
".quad 0x3233662e34762e64,0x66257b203233662e,0x313466252c303134,0x2c32313466252c31\n"
".quad 0x5b2c7d3331346625,0x7475706e49786574,0x2c35303466257b2c,0x66252c3630346625\n"
".quad 0x303466252c373034,0x6f6d090a3b5d7d39,0x2509203233662e76,0x6625202c34313466\n"
".quad 0x6c2e090a3b303134,0x353609303209636f,0x2e766f6d090a3009,0x3466250920323366\n"
".quad 0x34336625202c3531,0x2e766f6d090a3b36,0x3466250920323366,0x38326625202c3631\n"
".quad 0x2e766f6d090a3b30,0x3466250920323366,0x30336625202c3731,0x2e766f6d090a3b33\n"
".quad 0x3466250920323366,0x30306630202c3831,0x203b303030303030,0x0a30202f2f092020\n"
".quad 0x3233662e766f6d09,0x2c39313466250920,0x0a3b383134662520,0x2e64332e78657409\n"
".quad 0x662e3233662e3476,0x323466257b203233,0x2c31323466252c30,0x66252c3232346625\n"
".quad 0x65745b2c7d333234,0x7b2c7475706e4978,0x66252c3531346625,0x313466252c363134\n"
".quad 0x7d39313466252c37,0x2e766f6d090a3b5d,0x3466250920323366,0x32346625202c3432\n"
".quad 0x636f6c2e090a3b30,0x3009363609303209,0x33662e766f6d090a,0x3532346625092032\n"
".quad 0x3b3735326625202c,0x33662e766f6d090a,0x3632346625092032,0x3b3038326625202c\n"
".quad 0x33662e766f6d090a,0x3732346625092032,0x3b3330336625202c,0x33662e766f6d090a\n"
".quad 0x3832346625092032,0x303030306630202c,0x2020203b30303030,0x6d090a30202f2f09\n"
".quad 0x09203233662e766f,0x25202c3932346625,0x74090a3b38323466,0x34762e64332e7865\n"
".quad 0x3233662e3233662e,0x2c30333466257b20,0x66252c3133346625,0x333466252c323334\n"
".quad 0x497865745b2c7d33,0x66257b2c7475706e,0x323466252c353234,0x2c37323466252c36\n"
".quad 0x3b5d7d3932346625,0x33662e766f6d090a,0x3433346625092032,0x3b3033346625202c\n"
".quad 0x3209636f6c2e090a,0x090a300938360930,0x203233662e6c756d,0x202c353334662509\n"
".quad 0x25202c3335326625,0x6d090a3b34333466,0x09203233662e6461,0x25202c3633346625\n"
".quad 0x6625202c34333366,0x346625202c343234,0x6c756d090a3b3533,0x662509203233662e\n"
".quad 0x326625202c373334,0x33346625202c3637,0x2e6c756d090a3b36,0x3466250920323366\n"
".quad 0x35326625202c3833,0x3431346625202c33,0x662e64616d090a3b,0x3334662509203233\n"
".quad 0x3433336625202c39,0x2c3430346625202c,0x0a3b383334662520,0x3233662e64616d09\n"
".quad 0x2c30343466250920,0x202c353333662520,0x25202c3933346625,0x2e090a3b37333466\n"
".quad 0x3409313209636f6c,0x6c756d090a300938,0x662509203233662e,0x326625202c313434\n"
".quad 0x34346625202c3939,0x2e64616d090a3b30,0x3466250920323366,0x33336625202c3234\n"
".quad 0x3439336625202c36,0x3b3134346625202c,0x6f6c672e7473090a,0x203233662e6c6162\n"
".quad 0x302b376472255b09,0x3234346625202c5d,0x09636f6c2e090a3b,0x0a30093934093132\n"
".quad 0x696e752e61726209,0x5f305f744c240920,0x744c240a3b343135,0x3a383335315f305f\n"
".quad 0x3209636f6c2e090a,0x090a300932350931,0x203233662e766f6d,0x202c333434662509\n"
".quad 0x6f6d090a3b326625,0x2509203233662e76,0x6625202c34343466,0x2e766f6d090a3b34\n"
".quad 0x3466250920323366,0x3b366625202c3534,0x33662e766f6d090a,0x3634346625092032\n"
".quad 0x303030306630202c,0x2020203b30303030,0x6d090a30202f2f09,0x09203233662e766f\n"
".quad 0x25202c3734346625,0x74090a3b36343466,0x34762e64332e7865,0x3233662e3233662e\n"
".quad 0x2c38343466257b20,0x66252c3934346625,0x353466252c303534,0x497865745b2c7d31\n"
".quad 0x66257b2c7475706e,0x343466252c333434,0x2c35343466252c34,0x3b5d7d3734346625\n"
".quad 0x33662e766f6d090a,0x3235346625092032,0x3b3834346625202c,0x6f6c672e7473090a\n"
".quad 0x203233662e6c6162,0x302b376472255b09,0x3235346625202c5d,0x5f305f744c240a3b\n"
".quad 0x744c240a3a343135,0x3a343730335f305f,0x3209636f6c2e090a,0x090a300939350931\n"
".quad 0x4c240a3b74697865,0x5a5f5f646e655744,0x54707265746e6939,0x616f6c6636507865\n"
".quad 0x3a69696966503374,0x5f202f2f207d090a,0x707265746e69395a,0x6f6c663650786554\n"
".quad 0x6969696650337461,0x4801000002000a0a,0x0000000ea8000000,0x0000000000000000\n"
".quad 0x0a00010002000000,0x0e00000038000000,0x0000000015000000,0x0000000000000000\n"
".quad 0x7265746e69000000,0x632e616475633370,0x02464c457f000075,0x0000000002330101\n"
".quad 0x0100be0002000000,0x0000000000000000,0x0000000e00000000,0x0000000040000000\n"
".quad 0x40000a010a000000,0x0900400003003800,0x0000000000000100,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0300000001000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000280000000,0x00000000cf000000,0x0000000000000000\n"
".quad 0x0000000004000000,0x0000000000000000,0x030000000b000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000034f000000,0x0000000024000000,0x0000000000000000\n"
".quad 0x0000000001000000,0x0000000000000000,0x0200000013000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000373000000,0x0000000138000000,0x0b00000002000000\n"
".quad 0x0000000001000000,0x0000000018000000,0x0100000036000000,0x0000000006000000\n"
".quad 0x0000000000000000,0x00000004ab000000,0x0000000898000000,0x0600000003000000\n"
".quad 0x0000000004190000,0x0000000000000000,0x01000000a7000000,0x0000000002000000\n"
".quad 0x0000000000000000,0x0000000d43000000,0x0000000024000000,0x0400000000000000\n"
".quad 0x0000000004000000,0x0000000000000000,0x0100000056000000,0x0000000002000000\n"
".quad 0x0000000000000000,0x0000000d67000000,0x0000000084000000,0x0400000000000000\n"
".quad 0x0000000001000000,0x0000000000000000,0x0800000082000000,0x0000000003000000\n"
".quad 0x0000000000000000,0x0000000deb000000,0x000000002c000000,0x0400000000000000\n"
".quad 0x0000000004000000,0x0000000000000000,0x0100000079000000,0x0000000002000000\n"
".quad 0x0000000000000000,0x0000000deb000000,0x0000000014000000,0x0000000000000000\n"
".quad 0x0000000001000000,0x0000000000000000,0x7368732e00000000,0x732e006261747274\n"
".quad 0x732e006261747274,0x6e2e006261746d79,0x6c61626f6c672e76,0x6e2e0074696e692e\n"
".quad 0x6c61626f6c672e76,0x5f2e747865742e00,0x707265746e69395a,0x6f6c663650786554\n"
".quad 0x6969696650337461,0x666e692e766e2e00,0x746e69395a5f2e6f,0x3650786554707265\n"
".quad 0x66503374616f6c66,0x2e766e2e00696969,0x766e2e006f666e69,0x2e6465726168732e\n"
".quad 0x7265746e69395a5f,0x6c66365078655470,0x696966503374616f,0x6f632e766e2e0069\n"
".quad 0x2e31746e6174736e,0x7265746e69395a5f,0x6c66365078655470,0x696966503374616f\n"
".quad 0x6e69395a5f000069,0x5078655470726574,0x503374616f6c6636,0x7865740069696966\n"
".quad 0x0000007475706e49,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000100030000,0x0000000000000000,0x0000000000000000,0x0000000200030000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000300030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000030000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000030000,0x0000000000000000,0x0000000000000000,0x0000000400030000\n"
".quad 0x0898000000000000,0x0000000000000000,0x0000000600030000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000800030000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000700030000,0x0000000000000000,0x0000000000000000,0x0000000500030000\n"
".quad 0x0000000000000000,0x0001000000000000,0x0000000410120000,0x0000000000000000\n"
".quad 0x001b000000000000,0x00000000001a0000,0x0000000000000000,0x4c0d000000000000\n"
".quad 0x421104200780a000,0x020504200780a000,0x4e0500400780d080,0x440904200780a000\n"
".quad 0x001504200780a000,0x020104000780a000,0x060d04000780a000,0x0201600147806004\n"
".quad 0xd201600007806002,0xd1fd6020c7806000,0x00036420c7c83000,0x0005000002803000\n"
".quad 0x0001c41007803002,0x8200c41007803003,0x00112100e8002000,0xd5fd80c00780d00e\n"
".quad 0xcc0d6c2087c8307c,0x8005042047802000,0x0205000000032004,0x800180c00780d00e\n"
".quad 0x0001000000032008,0xe00380c00780d00e,0xd5fd000002801001,0x20036c6087c83081\n"
".quad 0xd5fd000002801002,0x60036c6087c83082,0xd5fd000002801002,0x00036c6087c83083\n"
".quad 0xb003000005001011,0x8008000007801009,0x0001100088001000,0x060100000784f280\n"
".quad 0x0003a0c00780d00e,0x8008000007803000,0x0001100088001000,0x060100000784f280\n"
".quad 0x0003a0c00780d00e,0x0809000007803000,0x04110bf00003b000,0x0835cc024780a000\n"
".quad 0x9a2104008780b000,0x102403f80003b000,0x9015c00d1a3cc008,0x121904000003b000\n"
".quad 0x1e0903f00003c000,0x0c1503e2aaabc02b,0x1a1804410780e105,0x05fdb0060a08c002\n"
".quad 0x0441605107c8b085,0x0c190403c7801000,0x040900400680c088,0x041d00400680c088\n"
".quad 0x0205000007809000,0x02150bf00003b000,0x0a45cc024780a000,0xa22904004780b000\n"
".quad 0x140803f80003b000,0x942dc0112248c00a,0x043104000003b000,0x240503f00003c000\n"
".quad 0x183103e2aaabc02b,0x222c04410780e10b,0x0c19b00b1804c001,0x03fd00418780e107\n"
".quad 0x0850605107c8b085,0x162d1000821cb006,0x020500400680c088,0x023900400680c088\n"
".quad 0x0001000007809000,0x00190bf00003b000,0x0c05cc024780a000,0x823104000780b000\n"
".quad 0x184d03f80003b000,0x162d00000780c00c,0x980100418780e10e,0x263904000003b000\n"
".quad 0x1c5903f00003c000,0x025504410780e100,0x2a0100000780c001,0x023803e2aaabc02b\n"
".quad 0x01fdb00e2c00c000,0x0a5c605107c8b085,0x1c391000802cb00b,0x000100400680c088\n"
".quad 0x000100400680c088,0x1c39000007809000,0x9a3500418780e100,0x1e0104000003b000\n"
".quad 0x003503f00003c000,0xa23d04410780e10d,0x240104000003b000,0x824903f00003c000\n"
".quad 0x2a4504000003b000,0x000503f00003c000,0x122504410780e10f,0x220103e2aaabc02b\n"
".quad 0x043d04410780e112,0x264903e2aaabc02b,0x120903e2aaabc02b,0x1e4500034780e008\n"
".quad 0x244900004780e00a,0x05fd00000780e00c,0x0c58605107c8b085,0x1a351000843cb00e\n"
".quad 0x040900400680c088,0x040800400680c088,0x23fdc0021a209000,0x2209605107c8b085\n"
".quad 0x02050403c7801000,0x040900400680c088,0x040800400680c088,0x25fdc00202089000\n"
".quad 0x2405605107c8b085,0x00010403c7801000,0x020500400680c088,0x020500400680c088\n"
".quad 0x0409000007809000,0x00050bf00003b000,0x10010041c780e101,0x04540bf00003b000\n"
".quad 0x004cb0060218b005,0xae141000a820b004,0xae041000a8001000,0xaa341000a6301000\n"
".quad 0xa6101000aa241000,0x8c3810008c081000,0x000110008c281000,0x002100000784f280\n"
".quad 0x003100000784f280,0x001100000784f280,0x200000000784f280,0x1e01c0082004c000\n"
".quad 0x1e0500000780e004,0x0e0100004780e00c,0x226100000780c000,0xac3800000780e001\n"
".quad 0xac281000a8001000,0xae141000ae041000,0xac181000ac081000,0xaa341000a6301000\n"
".quad 0xa8201000aa241000,0x00011000a6101000,0x002100000784f280,0x003100000784f280\n"
".quad 0x001100000784f280,0x200000000784f280,0x1e01c0082004c000,0x1e0500000780e004\n"
".quad 0x0e0100004780e00c,0x220100000780c000,0x160100000780e001,0x240100000780c000\n"
".quad 0x060100000780e018,0x0003a0c00780d00e,0x0809000007803000,0x04110bf00003b000\n"
".quad 0x0835cc024780a000,0x9a2104008780b000,0x102403f80003b000,0x9015c00d1a3cc008\n"
".quad 0x121904000003b000,0x1e0903f00003c000,0x0c1503e2aaabc02b,0x1a1804410780e105\n"
".quad 0x05fdb0060a08c002,0x0441605107c8b085,0x0c190403c7801000,0x040900400680c088\n"
".quad 0x041d00400680c088,0x0205000007809000,0x02150bf00003b000,0x0a45cc024780a000\n"
".quad 0xa22904004780b000,0x140803f80003b000,0x942dc0112248c00a,0x043104000003b000\n"
".quad 0x240503f00003c000,0x183103e2aaabc02b,0x222c04410780e10b,0x0c19b00b1804c001\n"
".quad 0x03fd00418780e107,0x0850605107c8b085,0x162d1000821cb006,0x020500400680c088\n"
".quad 0x023900400680c088,0x0001000007809000,0x00190bf00003b000,0x0c05cc024780a000\n"
".quad 0x823104000780b000,0x184d03f80003b000,0x162d00000780c00c,0x980100418780e10e\n"
".quad 0x263904000003b000,0x1c5903f00003c000,0x025504410780e100,0x2a0100000780c001\n"
".quad 0x023803e2aaabc02b,0x01fdb00e2c00c000,0x0a5c605107c8b085,0x1c391000802cb00b\n"
".quad 0x000100400680c088,0x000100400680c088,0x1c39000007809000,0x9a3500418780e100\n"
".quad 0x1e0104000003b000,0x003503f00003c000,0xa23d04410780e10d,0x240104000003b000\n"
".quad 0x824903f00003c000,0x2a4504000003b000,0x000503f00003c000,0x122504410780e10f\n"
".quad 0x220103e2aaabc02b,0x043d04410780e112,0x264903e2aaabc02b,0x120903e2aaabc02b\n"
".quad 0x1e4500034780e008,0x244900004780e00a,0x05fd00000780e00c,0x0c58605107c8b085\n"
".quad 0x1a351000843cb00e,0x040900400680c088,0x040800400680c088,0x23fdc0021a209000\n"
".quad 0x2209605107c8b085,0x02050403c7801000,0x040900400680c088,0x040800400680c088\n"
".quad 0x25fdc00202089000,0x2405605107c8b085,0x00010403c7801000,0x020500400680c088\n"
".quad 0x020500400680c088,0x0409000007809000,0x00050bf00003b000,0x10010041c780e101\n"
".quad 0x04540bf00003b000,0x004cb0060218b005,0xae141000a820b004,0xae041000a8001000\n"
".quad 0xaa341000a6301000,0xa6101000aa241000,0x8c3810008c081000,0x000110008c281000\n"
".quad 0x002100000784f280,0x003100000784f280,0x001100000784f280,0x200000000784f280\n"
".quad 0x1e01c0082004c000,0x1e0500000780e004,0x0e0100004780e00c,0x226100000780c000\n"
".quad 0xac3800000780e001,0xac281000a8001000,0xae141000ae041000,0xac181000ac081000\n"
".quad 0xaa341000a6301000,0xa8201000aa241000,0x00011000a6101000,0x002100000784f280\n"
".quad 0x003100000784f280,0x001100000784f280,0x200000000784f280,0x1e01c0082004c000\n"
".quad 0x1e0500000780e004,0x0e0100004780e00c,0x220100000780c000,0x160100000780e001\n"
".quad 0x240100000780c000,0x060100000780e018,0x0003a0c00780d00e,0x8008000007803000\n"
".quad 0x0001100088001000,0x060100000784f280,0x03ffa0c00781d00e,0x0002000000010000\n"
".quad 0xaaab000000030000,0x00007e8000003f2a,0x0000bf0000003fc0,0x000000140b043e80\n"
".quad 0x0010000000080000,0x0018000000140000,0x000c000802040000,0x1803000000000000\n"
".quad 0xffff000c1704001c,0xf00000180004ffff,0xffff000c17040013,0xf00000140003ffff\n"
".quad 0xffff000c17040013,0xf00000100002ffff,0xffff000c17040013,0xf00000080001ffff\n"
".quad 0xffff000c17040023,0xf00000000000ffff,0x003800080d040023,0x0704000000070007\n"
".quad 0xffff0000000c0010,0xffffffffffffffff,0x050000000600ffff,0x0000000e00000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000a8000000,0x00000000a8000000\n"
".quad 0x0000000004000000,0x0560000000000000,0x00000004ab00000b,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000940000000,0x0000000940000000,0x0000000004000000\n"
".quad 0x0660000000000000,0x0000000deb00000b,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000002c000000,0x0000000004000000,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long fatbinData[2780];

}


static struct {int m; int v; const unsigned long long* d; char* f;} __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (".nvFatBinSegment")))=
 { 0x466243b1, 1, fatbinData, 0 };
# 3 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.stub.c" 2
extern void __device_stub__Z9interpTexP6float3Pfiii(float3 *, float *, int, int, int);
static void __sti____cudaRegisterAll_46_tmpxft_00002be5_00000000_4_interp3cuda_cpp1_ii_a18e277e(void) __attribute__((__constructor__));
void __device_stub__Z9interpTexP6float3Pfiii(float3 *__par0, float *__par1, int __par2, int __par3, int __par4){if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)16UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)20UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)24UL) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float3 *, float *, int, int, int))interpTex)); (void)cudaLaunch(((char *)((void ( *)(float3 *, float *, int, int, int))interpTex))); };}
void interpTex( float3 *__cuda_0,float *__cuda_1,int __cuda_2,int __cuda_3,int __cuda_4)
# 26 "interp3cuda.cu"
{__device_stub__Z9interpTexP6float3Pfiii( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 59 "interp3cuda.cu"
}
# 1 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.stub.c"
static void __sti____cudaRegisterAll_46_tmpxft_00002be5_00000000_4_interp3cuda_cpp1_ii_a18e277e(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float3 *, float *, int, int, int))interpTex), (char*)"_Z9interpTexP6float3Pfiii", "_Z9interpTexP6float3Pfiii", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&texInput, (const void**)"texInput", "texInput", 3, 0, 0); }
# 1 "/tmp/tmpxft_00002be5_00000000-1_interp3cuda.cudafe1.stub.c" 2
