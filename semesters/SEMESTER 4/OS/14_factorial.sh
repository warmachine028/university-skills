#!/usr/bin/env bash

# CODE 14: Write a shell script to find the factorial value of any integer entered through the keyboard. 

read -p "Enter number: " -r number
fact=1
for ((i = number; i > 1; i--)); do
    ((fact *= i))
done

echo "$number! = $fact"
