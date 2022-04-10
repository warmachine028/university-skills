#!/usr/bin/env bash

# CODE 16: Write a shell script to calculate the sum of digits of any number entered through keyboard. 

read -r a b
echo "$(($a + $b))"
