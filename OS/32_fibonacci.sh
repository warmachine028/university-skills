#!/usr/bin/env bash

# CODE 32: Write a shell script to print fibonacci series upto n numbers

fibonacci() {
    n=$1
    echo n $n
    if (( $n <= 1 )); then
        return $n
    fi
    fibonacci $(($n - 1))
    temp=$?
    fibonacci $(($n - 2))
    r=$(($temp + $?))
    echo $?
    return $r
}

n=4
for i in $(seq 1 $n); do
    fibonacci $i
    printf "$?, "
done
echo -e "\n"

