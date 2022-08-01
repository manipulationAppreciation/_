% curve

l = @(x) x.^2 ./ ((x.^2 + 16.*x + 65).^2);
m = @(x) 1 ./ (x.^2);

x = linspace(-10, 10);

plot(x, l(x),'b')
hold on
plot(x, m(x), 'r')

integral(l, -100, 100)
integral(m, .1, 10)
