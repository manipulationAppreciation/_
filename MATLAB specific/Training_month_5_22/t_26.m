%%
% Möbius transformations
clear; close all; clc;

m = @(z, z1, z2, z3) (z - z1).*(z2 - z3) ./ ((z - z3).*(z2 - z1));

z = linspace(-10j, 10j);
z1 = 1j;
z2 = 0;
z3 = -1j;

mobius = m(z, z1, z2, z3);
figure(1)
plot(real(mobius), imag(mobius))

g = @(phi) exp(1j * phi);
z = g(0:.01:2*pi);

figure(2)
plot(real(z), imag(z))

figure(3)
mobius_c = @(z) (z - 1) / (1j.*z + 1j);
mobius_c_ = mobius_c(z);
plot(real(mobius_c_), imag(mobius_c_))

% ha
z = linspace(-10, 10);
z1 = -1;
z2 = 1j;
z3 = 1;

mobius = m(z, z1, z2, z3);
figure(4)
plot(real(mobius), imag(mobius))

% 
%%
close all, clear, clc;

m = @(z, z1, z2, z3) (z - z1).*(z2 - z3) ./ ((z - z3).*(z2 - z1));
g = @(phi) exp(1j * phi);
z = g(0:.01:2*pi)
figure(1)
plot(real(z), imag(z))
z1 = 1;
z2 = 1j;
z3 = -1;
m_v = m(z, z1, z2, z3);
figure(2)
plot(real(m_v), imag(m_v))

figure(3)
mobius_c = @(z) (z - 1) ./ (1j.*z + 1j);
mobius_c_ = mobius_c(z);
plot(real(mobius_c_), imag(mobius_c_))
