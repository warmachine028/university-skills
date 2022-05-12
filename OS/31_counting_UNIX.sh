#!/usr/bin/env bash

# CODE 31:


for file in $*; do
	grep -v "UNIX" $file > ff
	cp ff $file
done

