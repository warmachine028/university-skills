#!/usr/bin/env bash

# CODE 6: Given two integers, X and Y, identify whether X < Y or X > Y or X = Y.
# Exactly one of the following lines:
# - X is less than Y
# - X is greater than Y
# - X is equal to Y

read -p "Enter X: " -r x
read -p "Enter Y: " -r y

# Comparisions
if ((x > y)); then
    echo X is greater than Y
elif [[ $x -lt $y ]]; then
    echo X is less than Y
elif [ "$x" -eq "$y" ]; then
    echo X is equal to Y
else 
    echo Invalid
fi
