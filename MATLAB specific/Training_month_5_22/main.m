clear, clc
% Obligatory
disp("Hello world")

% Learning to plot parametric curves in the complex plane
gamma= @(t) exp(1i*t);
sigma = @(t) exp(2*pi*1i*sin(t));

t_1 = linspace(0, 2*pi);
figure(1)
plot(real(gamma(t_1)), imag(gamma(t_1))); axis equal;

t_2 = linspace(0, pi/2);
figure(2)
plot(real(sigma(t_2)), imag(sigma(t_2))); axis equal;
