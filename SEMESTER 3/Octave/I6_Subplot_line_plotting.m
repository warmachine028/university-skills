# CODE 16:
# Create a script using subplot for a line plotting operation

x = linspace(0, 10)
subplot(3, 1, 1)
plot(x, sin(x))

subplot(3, 1, 2)
plot(x, sin( 5 * x))

subplot(3, 1, 3)
plot(x, sin(10 * x))