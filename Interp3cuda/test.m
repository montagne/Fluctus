clear all;
clc ;
W1 = [1 2 ; 3 4 ];
W2 = [5 6 ; 7 8 ];
W = cat (3, W1, W2);

W = rand ([3,2,4]);
% 
W(:,:,1)=[1 2 ; 3 4 ; 5 6 ];
%in = W(:,:,1)
W(:,:,2)=[ 7 8 ; 9 10 ; 11 12];
W(:,:,3)=[13 14; 15 16; 17 18];
W(:,:,4)=[19 20; 21 22 ; 23 24];

size(W);

Xi1 = [1.5 1.5 ; 1 2 ];
Xi2 = [1.5 1.5 ; 1 2 ];
Xi = cat (3, Xi1, Xi2);


Yi1 = [2.5 1.5 ; 1 2 ];
Yi2 = [1.5 2 ; 1 2 ];
Yi = cat (3, Yi1, Yi2);

Zi1 = [1.5 1.5 ; 1 2 ];
Zi2 = [2 1.5 ; 1 2 ];
Zi = cat (3, Zi1, Zi2);


% Yi1 = [1 1 ; 2 2 ];
% Yi2 = [1 1 ; 2 2 ];
% Yi = cat (3, Yi1, Yi2);
% 
% 
% Xi1 = [1 2 ; 1 2 ];
% Xi2 = [1 2 ; 1 2 ];
% Xi = cat (3, Xi1, Xi2);
% 
% Zi1 = [1 1 ; 1 1 ];
% Zi2 = [1 1 ; 1 1 ];
% %Zi2 = [2 2 ; 2 2 ];
% Zi = cat (3, Zi1, Zi2);

X = zeros([3,2,4]);
Y = zeros([3,2,4]);
Z = zeros([3,2,4]);



x=1;
y=1;
z=1;

Wi = interp3(W,Xi,Yi,Zi,'linear')
tic;
Wi2 = interp3cuda(W,Xi,Yi,Zi,'linear')
toc