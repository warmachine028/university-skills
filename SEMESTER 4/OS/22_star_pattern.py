#!/usr/bin/env python
import sys

lines = int(sys.argv[1])

for i in range(lines):
    print((lines - i) * '  ', end='')
    print((2 * i + 1) * '* ')
