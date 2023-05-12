# CODE 8: 
# Create a script for line specifications

# x-axis values
x = linspace(0, 2*pi, 50)

# y-axis values
sin_curve = sin(x)   
cos_curve = cos(x)

# plotting
plt = plot( # sin-curve red-blue circles
           x, sin_curve, 'ob',
          'MarkerFaceColor', 'r',            
          'MarkerSize', 15,
           
           # cos-curves blue-green pentagrams
            x, cos_curve, 'pentagramg',
           'MarkerFaceColor', 'b',
           'MarkerSize', 15)

# annotations
title('Configuring Line Specifications')
xlabel('x-values')
ylabel('functions')
legend('sin(x)', 'cos(x)')
