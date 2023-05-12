#!/usr/bin/env python3 

# CODE 32: Program to Print 'n' terms of fibonacci series

import sys


def fibonacci(n: int) -> int:
    return n if n <= 1 else fibonacci(n - 1) + fibonacci(n - 2)


def main():
    N = int(sys.argv[1])
    for i in range(N):
        print(fibonacci(i), end=', ')
    print('\n')

main()

