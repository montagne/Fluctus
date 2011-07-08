clear all;
clc ;

load('fx.mat');
load('traj_x.mat');
load('traj_x_1.mat');
load('traj_y_1.mat');
load('traj_z_1.mat');

% X1 = [1 2 ; 3 4 ];
% X2 = [5 6 ; 7 8 ];
% X = cat (3, X1, X2);
% 
% 
% Y=X;
% Z=X;
% f_x=X;

% w = interp3(f_x,X,Y,Z,'linear')
% w_cuda = interp3cuda(f_x,X,Y,Z,'linear')

%W = f_x(1:10,1:10,1:10);
W = f_x(1:10,1:10,1:10);
%W(:,:,1)
%W = f_x;

Xi = traj_x_1(1:4,1:4,1:4);
Xi(:,:,1)
Yi = traj_y_1(1:4,1:4,1:4);
Yi(:,:,1)
Zi = traj_z_1(1:4,1:4,1:4);
Zi(:,:,1)


w =          interp3(W,Yi,Xi,Zi,'spline');
w_cuda = interp3cuda(W,Xi,Yi,Zi,'spline');


traj_x (1:4,1:4,1)
w(1:4,1:4,1)
w_cuda(1:4,1:4,1)


% W1 = [1 2 ; 3 4 ];
% W2 = [5 6 ; 7 8 ];
% W = cat (3, W1, W2);
% 
% Xi1 = [1.5 1.5 ; 1 2 ];
% Xi2 = [1.5 1.5 ; 1 2 ];
% Xi = cat (3, Xi1, Xi2);
% 
% 
% Yi1 = [1.5 1.5 ; 1 2 ];
% Yi2 = [1.5 2 ; 1 2 ];
% Yi = cat (3, Yi1, Yi2);
% 
% Zi1 = [1 1.5 ; 1 2 ];
% Zi2 = [2 1.5 ; 1 2 ];
% Zi = cat (3, Zi1, Zi2);
% x=1;
% y=1;
% z=1;
% 
% Wi = interp3(W,Xi,Yi,Zi,'linear')
% tic;
% Wi2 = interp3cuda(W,Xi,Yi,Zi,'linear')
% toc