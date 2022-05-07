# CODE 14:
# Create a script to plot a line on 3D plane


x = linspace(1, 10, 50)

plot3(# Plotting the lines
        x, sin(x), cos(x),
        'LineWidth', 6,
        'LineStyle', '-.',
        'color', [0 .68 .68]
      )
