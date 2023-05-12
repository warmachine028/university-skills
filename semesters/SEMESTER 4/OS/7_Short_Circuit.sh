#!/usr/bin/env bash

# CODE 7: Given two integers, X and Y, identify whether X < Y or X > Y or X = Y.
# Exactly one of the following lines:
# - X is less than Y
# - X is greater than Y
# - X is equal to Y

read -p "Enter X and Y: " -r x y

[[ $x -lt $y ]] && echo X is less than Y
[[ $x -gt $y ]] && echo X is greater than Y
[[ $x -eq $y ]] && echo X is equal to Y
