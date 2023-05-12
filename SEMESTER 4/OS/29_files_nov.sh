#!/usr/bin/env bash

# CODE 29: Write a shell script to display all files with all attributes modified in the month of November.


for file in *; do
	set -- `ls -l $file`
	if [ "$6" == "Apr" ]; then
		ls -l $file
	fi
done

