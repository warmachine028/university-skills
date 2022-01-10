""" CODE 25: Write a python program that asks the user for an integer and creates a list that consists of the factors
of that integer.

"""

integer = int(input("Integer: "))
factors = [i for i in range(1, integer // 2 + 1) if not integer % i] + [integer]
print(factors)
