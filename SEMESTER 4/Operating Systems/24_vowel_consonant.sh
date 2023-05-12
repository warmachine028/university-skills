#!/usr/bin/env bash

# CODE 24: Write a script to count the nunber of vowels and consonants in a given sentence

vowels=`echo $1 | grep -oi '[aeiou]' | wc -l`
punctuations=`echo $1 | grep -oi '[^a-z0-9]' | wc -l`
length=`expr length "$1"`
consonants=$((length - punctuations - vowels))

echo "Vowels: ${vowels}"
echo "Consonants: ${consonants}"
