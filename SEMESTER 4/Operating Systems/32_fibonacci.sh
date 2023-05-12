#!/usr/bin/env bash

# CODE 32: Write a shell script to print fibonacci series upto n numbers
#!/bin/bash

function fib(){
    if [ $1 -le 0 ]; then
        echo 0
    elif [ $1 -eq 1 ]; then
        echo 1
    else
        echo $[`fib $[$1-2]` + `fib $[$1 - 1]` ]
    fi

}

for i in $(seq 0 $1); do
    fib $i
    printf "$?, "
done
