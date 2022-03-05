# CODE 10: Given three integers (X, Y, and Z) representing the three sides of a triangle, identify whether the triangle is scalene, isosceles, or equilateral.

read a
read b
read c

if [[ $a -eq $b && $b -eq $c ]]
then
    echo EQUILATERAL
elif [[ $a -eq $b || $b -eq $c || $a -eq $c ]]
then
    echo ISOSCELES
else
    echo SCALENE
fi