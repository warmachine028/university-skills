#!/usr/bin/env bash

reverse=`echo "$1" | rev`

if [[ $1 == $reverse ]]; then
	echo "Palindrome" 
else
	echo "Not a Palindrome"
fi
