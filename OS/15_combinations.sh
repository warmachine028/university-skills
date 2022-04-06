#!/usr/bin/env bash

# CODE 15: Write a script to generate all combinations of 1, 2 and 3

for i in {1..3}; do
    for j in {1..3}; do
        for k in {1..3}; do
            echo "$i $j $k"
        done
    done
done
