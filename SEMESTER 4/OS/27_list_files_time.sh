#!/usr/bin/env bash

# CODE 27: Write a script to list files by modification time when called with lm and by access time when called with la. By default, the script should show the listing of all files in current directory.

[[ $1 == "lm" ]] && ls -lt
[[ $1 == "la" ]] && ls -ltu
[[ ! $1 ]] && ls -a

