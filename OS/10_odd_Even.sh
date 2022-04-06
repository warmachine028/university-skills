#!/usr/bin/env bash

# CODE 10: Write a shell script to find out whether an integer input through the keyboard is an odd or an even number.

echo Integer:
read -r integer

((integer % 2)) && echo Odd || echo Even
