#!/usr/bin/env bash

# CODE 5: Given two integers, X and Y, find their sum, difference, product, and quotient.
read -p "Enter X: " -r X
read -p "Enter Y: " -r Y

# Calculations
echo SUM: $((X + Y))
echo DIFFERENCE: $((X - Y))
echo PRODUCT: $((X * Y))
echo DIVISION: $((X / Y))
