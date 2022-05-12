#!/usr/bin/env bash

# CODE 32: Write a shell script to print fibonacci series upto n numbers

fibonacci() {
    (( $1 <= 1 )) && return $1
    fibonacci $(( $1 - 1 ))
    temp=$?
    fibonacci $(( $1 - 2 ))
    return $(($temp + $?))
}

n=4
for i in $(seq 1 $n); do
    fibonacci $i
    printf "$?, "
done
echo -e "\n"

