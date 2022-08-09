#!/usr/bin/env bash

# CODE 18: Write a shell program that takes a number from user and prints the reverse of the number.

read -p "Enter numher: " -r number

reverse=0
while ((number)); do
	remainder=$((number % 10))
	((reverse = reverse * 10 + remainder))
	((number /= 10))
done

echo "Reverse: $reverse"

