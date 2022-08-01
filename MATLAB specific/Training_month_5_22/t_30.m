r = @(x) factorial((2.*x)) .^ (1 ./ x);

x = linspace(1,200);
plot(x, r(x))