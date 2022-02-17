% Create a MATLAB Script to plot the values of Sin(x) and Cos(x) for a predefined 
% interval [-10 22] using fplot function. By hold on, also plot the parametric curve x=cos(3t)
% and y=sin(2t). Show some LineStyle features like LineWidth, Marker, MarkerSize, 
% MarkerFaceColor etc. in both plotting types. 

fplot (@cos, [0, 2*pi]);
title ("fplot() single function");