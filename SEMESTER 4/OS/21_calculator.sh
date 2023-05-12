#!/usr/bin/env bash

# CODE 21: Write a shell script that producrs a shell calculator to perform the following operations:
# - Addition
# - Subtraction
# - Multiplication
# - Division

case $2 in 
	+) res=`echo $1 + $3 | bc`;;
	-) res=`echo $1 - $3 | bc`;;
	×) res=`echo $1 \* $3 | bc`;;
	/) res=`echo "scale=2; $1 / $3" | bc`;;
esac


echo "Result: $res"

