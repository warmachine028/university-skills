#!/usr/bin/env bash


# CODE 23: Write a script to find out whether a given string is palindrome or not.

reverse=`echo "$1" | rev`

if [[ $1 == $reverse ]]; then
	echo "Palindrome" 
else
	echo "Not a Palindrome"
fi
