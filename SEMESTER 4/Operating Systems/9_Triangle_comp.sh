#!/usr/bin/env bash

# CODE 9: Given three integers (X, Y, and Z) representing the three sides of a triangle, identify whether the triangle is scalene, isosceles, or equilateral.

read -p "Enter the 3 sides of X triangle: " -r X Y Z

if ((X == Y == Z)); then
    echo EQUILATERAL
elif [[ $X -eq $Y || $Y -eq $Z || $X -eq $Z ]]; then
    echo ISOSCELES
else
    echo SCALENE
fi
