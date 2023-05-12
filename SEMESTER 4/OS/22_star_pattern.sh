#!/usr/bin/env bash

# CODE 22: Write a script to print the followijg pattern for any number of lines.
#         *
#       * * * 
#     * * * * *
#   * * * * * * *
# * * * * * * * * *  

for ((i = 0; i < $1; i++)); do
	for ((j = 0; j < $1 - i; j++)); do 
		echo -n '  '
	done
	for ((j = 0; j < 2 * i + 1; j++)); do
		echo -n '* '
	done
	echo
done

