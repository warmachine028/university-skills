#!/usr/bin/env bash

# CODE 8: Read in one character from STDIN.
# If the character is 'Y' or 'y' display "YES".
# If the character is 'N' or 'n' display "NO".
# No other character will be provided as input.

read -p "Enter a character: " -r char

if [[ $char == [yY] ]]; then
    echo YES
elif [[ $char == [nN] ]]; then
    echo NO
else
    echo Invalid Input
fi
