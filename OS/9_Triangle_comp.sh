#!/usr/bin/env bash

# CODE 9: Given three integers (X, Y, and Z) representing the three sides of a triangle, identify whether the triangle is scalene, isosceles, or equilateral.

echo Enter the 3 sides of a triangle:
read -r a b c

if ((a == b == c)); then
    echo EQUILATERAL
elif [[ $a -eq $b || $b -eq $c || $a -eq $c ]]; then
    echo ISOSCELES
else
    echo SCALENE
fi
