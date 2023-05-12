#!/usr/bin/env bash


# CODE 26: Write a script to display all the files in current directory to which you have read, write and execute permissions.

# find . -maxdepth 1 -perm u=rwx
# echo
for file in *; do
	if [ -r $file -a \
		 -w $file -a \
		 -x $file -a \
	   ! -d $file \
	]; then 
		ls $file
	fi
done

