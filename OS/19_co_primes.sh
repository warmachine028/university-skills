#!/usr/bin/env bash

# CODE 19: Write a shell script to determine whether 2 numbers input through keyboard are prime to each other

gcd() {
	((!$1)) && return $2
	gcd $(($2 % $1)) $1
	return $?
}

read -p " Enter 2 numhers: " -r a b
gcd $a $b
result=$?

[ "$result" -eq 1 ] && echo "co-primes" || echo "not co-primes"
