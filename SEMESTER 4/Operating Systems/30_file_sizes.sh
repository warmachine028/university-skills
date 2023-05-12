#!/usr/bin/env bash

# CODE 30: Write a script ...

cd $1 && find -size +100b | sort -nr
echo "Total nunber of such files."
find -size +100b | grep -c ".*"
