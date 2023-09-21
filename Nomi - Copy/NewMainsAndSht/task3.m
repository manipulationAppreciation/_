clc; clear; close all;
format long

% numeric pendulum

T = @(th0) sqrt(2) * integral(@(th) 1./ sqrt(cos(th) - cos(th0)), -th0, th0)

T(1)

th_list = []

for th = 1:10
    th_list(end+1) = .1 * th * pi/2
end

disp(th_list)
T_list = []
for th = 1:10
    T_list(end+1) = T(th_list(th))
end

disp(T_list')
plot(th_list, T_list, 'ro-')
