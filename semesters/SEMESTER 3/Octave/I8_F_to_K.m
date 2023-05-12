# CODE 18:
# Create a script to input temperature from degrees Fahrenheit to an output temperature in kelvin

# To input from keyboard
F = input("Enter temperature in Kelvin: ");

# Formula
K = (F - 32) * 5 / 9 + 273.15;
fprintf("Fahrenheit: %i\n", F)
fprintf("Kelvin: %i\n", K)