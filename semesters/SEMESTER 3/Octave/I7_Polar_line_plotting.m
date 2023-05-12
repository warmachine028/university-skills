# CODE 17:
# Create a script for polar line plotting operation

theta = linspace(0, 6* pi)
rho1 = theta / 10
polarplot(theta, rho1, "b")

rho2 = theta/11
hold on 
polarplot(theta, rho2, "m--")
hold off

rho3 = theta / 14
hold on 
polarplot(theta, rho3, "g-.")
hold off