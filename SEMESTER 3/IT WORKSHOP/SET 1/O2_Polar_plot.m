% CODE 2: Create a MATLAB Script to plot the values in polar coordinate format (r,?), 
%where each point on a plane is determined by a distance from a reference point 
%and an angle from a reference direction. ? values should be expanded by linspace
%and the plotting type is polarplot. Show hold on command to use the ploarplot 
%function in same graph for different value sets i.e. at least 4 times. 
%(Take user input by input function) 

x = input("Enter value of x: ");
theta = linspace(0, x* pi);
r = theta / 10;
polar(theta, r, "b");

r = theta / 11;
hold on 
polar(theta, r, "m--");


r = theta / 14;
hold on 
polar(theta, r, "g-.");