
.PHONY : all
NAME = interp2cuda

CUDA_SRC = $(NAME).cu
CPP_SRC = $(NAME).cpp

NVCC = nvcc
NVCC_INCS = -I/usr/local/cuda/include -I/usr/local/MATLAB/R2011a/extern/include -I./code -I$(HOME)/NVIDIA_GPU_Computing_SDK/C/common/inc

MEX = mex
MEX_FLAGS = CC='/usr/bin/g++-4.3'
MEX_INCS = -I/usr/local/cuda/include
MEX_LIBS = -L/usr/local/cuda/lib64 -lcudart


all: clean build_cuda build_mex

build_cuda:
	$(NVCC) $(NVCC_INCS) --cuda $(CUDA_SRC) --output-file $(CPP_SRC)

build_mex:
	$(MEX) $(MEX_FLAGS) $(MEX_INCS) $(CPP_SRC) $(MEX_LIBS)


clean :
	rm -f $(NAME).cpp
	rm -f $(NAME).mexa64

# rm interp2cuda.cpp
# !nvcc -I/usr/local/cuda/include -I/usr/local/MATLAB/R2011a/extern/include -I./code -I$HOME/NVIDIA_GPU_Computing_SDK/C/common/inc --cuda interp2cuda.cu --output-file interp2cuda.cpp
# mex CC='/usr/bin/g++-4.3' -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart interp2cuda.cpp
# %mex -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart interp2cuda.cpp