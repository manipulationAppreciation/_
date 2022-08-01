% Complex mesh
clc; clear;
%
%f = @(x, y) (x + 1j * y).^4 - 5.*(x + 1j * y) + 1;
%
%z = linspace(-2, 2);
%[x,y] = meshgrid(z);
%
%mesh(x, y, abs(f(x,y))); xlabel("x")

% Integrate over triangular path with 'Waypoints'

%f = @(z) 1 ./ (2*z - 1);

%q = integral(f, 0, 0, 'Waypoints', [1 + 1i, 1 - 1i])

% plot to understand "Why the answer?"

%z = linspace(-1, 1);
%[x, y] = meshgrid(z);
%c = complex([x,y]);
%mesh(x,y, c);

%z1 = complex(1,1); f(z1);
%z2 = complex(1,-1); f(z2);
%z3 = complex(0,1); f(z3);

%h = @(z) 1 ./ (2  * (z) - 1)

%z = linspace(-1, 1);
%[x, y] = meshgrid(z);

%plot(real(h(complex(z, z))), imag(h(complex(z, z))))
% mesh(z, z, abs(h(x, y)))

[X, Y] = meshgrid(-3:.125:3);
Z = peaks(X, Y);
meshc(X, Y, Z)