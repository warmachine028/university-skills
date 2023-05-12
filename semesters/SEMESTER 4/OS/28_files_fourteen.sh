#!/usr/bin/env bash

# CODE 28: Write a script to find files created or modified within 14 days from current directory.

find -atime -14 -mtime -14 | sort -u

