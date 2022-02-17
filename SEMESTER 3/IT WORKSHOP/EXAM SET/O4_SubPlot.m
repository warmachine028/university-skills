t = linspace(2, 4, 2*pi)

subplot(2, 1, 1)
x = a*sin(2*pi*0.05*t)
plot(x, 'r')
title('sin graph')
xlabel('x')
ylabel('y')
grid on
hold on 

subplot(2, 1, 2)
y = sin(pi*f*t)
plot(y, 'g')
title('sin graph')
xlabel('x')
ylabel('y')
grid on 