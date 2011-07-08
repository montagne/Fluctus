 
%% Script to generate cudainterp2 function

clc
clear all

!rm interp2cuda.cpp
!nvcc -I/usr/local/cuda/include -I/usr/local/MATLAB/R2011a/extern/include -I./code -I$HOME/NVIDIA_GPU_Computing_SDK/C/common/inc --cuda interp2cuda.cu --output-file interp2cuda.cpp
mex CC='/usr/bin/g++-4.3' -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart interp2cuda.cpp
%mex -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart interp2cuda.cpp