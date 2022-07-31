% sinus hyperbolicus power series expansion
clear; clc;

%sinh_f = @(x) x + x.^3 / factorial(3);

%x = linspace(-5, 5);
%plot(x, sinh(x), 'b')
%hold on;
%plot(x, sinh_f(x), 'r')

% power series representation of sin(z) around z = pi

p_sin = @(z) (-1)^(1)/(factorial(1))*(z-pi).^(2 * 1 - 1) ...
    + (-1)^(2)/(factorial(3))*(z-pi).^(2 * 2 - 1) ...
    + (-1)^(3)/(factorial(5))*(z-pi).^(2 * 3 - 1);


z = linspace(pi - 1, pi + 1);

plot(z, p_sin(z), 'b'); hold on; plot(z, sin(z), 'r')
