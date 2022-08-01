% Pang

[t, y] = ode45(@(t,y) y*t, [0,7], 1);
plot(t,y)

b = @(a) 1 ./ sqrt(1-a.^2 / 2);
a = linspace(0,2);
figure(2)
plot(a, b(a))
