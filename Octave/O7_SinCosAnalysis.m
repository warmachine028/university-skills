# CODE 7:
# Analyse about a Plot

# x-axis values
x = 0: pi/100 : 2*pi 

# y-axis curves
sin_curve = sin(x)   
cos_curve = cos(x)

# plottings
plot(x, sin_curve, 'g-.', 'Linewidth', 2, 
     x, cos_curve, 'r-' , 'Linewidth', 2) 

# annotations
title("Graph Analysis of sin and cos functions")
ylabel("Functions")
xlabel("x-axis value")
legend("sin(x)", "cos(x)")

