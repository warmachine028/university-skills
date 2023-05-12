#!/usr/bin/env bash

#CODE 13: Write a script to determine whether a given number is prime or not.

sqrt=$(echo "$1" | awk "{print sqrt($1)}")

for ((i = 2; i <= ${sqrt%.*}; i++)); do
    if ((!($1 % i))); then
        flag=1
        break
    fi
done

((flag)) || (($1 <= 1)) && echo Not Prime || echo Prime
