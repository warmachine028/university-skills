""" CODE 6:
Write a Python program to generate and print a list of first and last 5 elements where the values are
square of numbers between 1 and 30 (both included).

1
30
Output: 
[1, 4, 9, 16, 25]
[625, 676, 729, 784, 841]

"""

lower, upper = 1, 30
print([n ** 2 for n in range(lower, lower + 5)])
print([n ** 2 for n in range(upper - 5, upper)])
