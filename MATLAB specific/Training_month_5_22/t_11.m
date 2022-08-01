% Draw circle in complex plane
clc; clear all;

%g = @(t) exp(1j*t);

%t = linspace(0, 2*pi);

%plot(real(g(t)), imag(g(t))); axis equal;

%z = @(z) z / (1 - z);

%t = .3;

%z(t)

%Fn = @(x, n) x.^n;

%x = linspace(0,.99);

%n = (1:500)';

%semilogy(x, Fn(x, n))

%%
geo = @(z, k) z.^k;
geo_con = @(z) z / (1 - z);

z = 5; geo_con(z)

k = (1:5)';

sum(geo(z, k))
%%
clc; clear; format long;

power = @(k, z) (-4).^k .* z.^k;
quick = @(z) 1 / (1 + 4*z);
z = 1/4 - .1;

disp("z: " + z)
disp("quick: " + quick(z))

k = (0:500)';
sum(power(k, z))
