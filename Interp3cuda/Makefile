
.PHONY : all
NAME = interp3cuda

CUDA_SRC = $(NAME).cu
CPP_SRC = $(NAME).cpp

NVCC = $(shell which nvcc)
INCS_GPU_COMPUT = $(shell locate cutil.h | head -n 1 | sed 's/\/\//\//g' | sed 's/cutil.h//g')
INCS_CUDA = $(shell which nvcc | sed 's/\/\//\//g' | sed 's/bin\/nvcc//g' )
INCS_MATLAB = $(shell which matlab | sed 's/\/\//\//g' | sed 's/bin\/matlab//g')

NVCC_INCS = -I$(INCS_CUDA)/include -I$(INCS_MATLAB)/extern/include -I./code -I$(INCS_GPU_COMPUT)

#MEX = mex
MEX = $(shell which mex)
GXX_PATH = $(shell which g++-4.3)
MEX_FLAGS = CC='$(GXX_PATH)'
MEX_INCS = -I$(INCS_CUDA)/include
MEX_LIBS = -L$(INCS_CUDA)/lib64 -lcudart


all: clean build_cuda build_mex

build_cuda:
	$(NVCC) $(NVCC_INCS) --cuda $(CUDA_SRC) --output-file $(CPP_SRC)

build_mex:
	$(MEX) $(MEX_FLAGS) $(MEX_INCS) $(CPP_SRC) $(MEX_LIBS)


clean :
	rm -f $(NAME).cpp
	rm -f $(NAME).mexa64

