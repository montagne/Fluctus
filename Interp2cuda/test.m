clear all;
clc ;
W = [1 2 3; 4 5 6 ; 7 8 9];


Xi = [1.5 1 ; 2.5 2 ];



Yi = [1 2.5 ; 1 2 ];


Wi = interp2(W,Xi,Yi,'spline')

Wi2 = interp2cuda(W,Xi,Yi,'spline')