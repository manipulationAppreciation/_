%% Circle
clc, close, clear

g = @(t) exp(1j*t);

t = linspace(-pi, pi);

plot(real(g(t)), imag(g(t))); axis equal;
%% Series


 
