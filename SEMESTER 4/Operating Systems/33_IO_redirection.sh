#!/usr/bin/env bash

# CODE 33: Update the file using IO Redirection

# STEP 1: Creating a file
touch file.txt

#STEP 2: Redirecting Output of ls command in new file 
ls > file.txt

#STEP 3: Reditecting file contents as input to wc commmand to count lines
wc -l < file.txt
