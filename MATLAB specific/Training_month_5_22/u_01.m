r = @(x) factorial((2.*x)) .^ (1 ./ x);

x = linspace(1,50000, 50000);
plot(x, r(x))
