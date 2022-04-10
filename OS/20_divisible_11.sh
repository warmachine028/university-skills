#!/usr/bin/env bash

# CODE 20: Write a shell sctipt to find whether a number is divisible by 11

divisible() {
	return $(("$1" % 11))
}

divisible $1
[ "$?" ] && echo "Not divisible" || echo "divisible"
