#!/usr/bin/env bash

# CODE 12: Write a script to find the maximum of 3 numbers provided as command line arguments.

if [[ $1 -gt $2 ]]; then
    if [[ $1 -gt $3 ]]; then
        echo "$1"
    else
        echo "$3"
    fi
elif [[ $2 -gt $3 ]]; then
    echo "$2"
else
    echo "$3"
fi
