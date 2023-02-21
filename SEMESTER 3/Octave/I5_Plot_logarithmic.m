# CODE 15:
# Create a script to plot values in logarithmic domain

subplot(4, 1, 1)
y = logspace(1, -2)
x = 2.^y
loglog(x, y)
grid on

# New section
subplot(4, 1, 2)
x = 2.^x
loglog(x, y)


# New section
subplot(4, 1, 3)
y = logspace(-1, 2)
x = 2.^y
x1 = 1. / 2.^y
loglog(x, y, x1, y)

# New section
subplot(4, 1, 4)
x = logspace(-1, 2)
y = 2.^x
y1 = 1. / 2.^x
loglog(x, y, x, y1)
