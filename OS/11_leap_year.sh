#!/usr/bin/env bash

# CODE 11: Write a script to determine whether an entered year is leapYear. If no argument is passed the current year should be assumed.

# Parameter expansion for variable substitution using default value
year=${1:-"$(date +%Y)"}

# Checking for leap year
((!(year % 4))) && ( ((!(year % 400))) || ((year % 100))) && echo Leap Year || echo Not a Leap Year
