"""
Consider the below series:
 0, 0, 2, 1, 4, 2, 6, 3, 8, 4, 10, 5, 12, 6, 14, 7, 16, 8 ………
 Write a Python program to find the nth term in this series.
    a) The value n in a positive integer that should be read from STDIN the nth
     term that is
    calculated by the program should be written to STDOUT.
    b) Other than the value of the nth term no other characters /strings or
    message should
    be written to STDOUT.
"""


def series(n: int, lst=None) -> list[int]:
    lst = [] if not lst else lst
    return lst if n < 0 else series(n - 1, [n * 2, n, *lst])


print(series(8))
