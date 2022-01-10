"""
CODE 8:	Write a Python program to get the Fibonacci series between 0 to 50.
Note : The Fibonacci Sequence is the series of numbers :
0, 1, 1, 2, 3, 5, 8, 13, 21, ....

Every next number is found by adding up the two numbers before it.
INPUT: 50
Expected Output : 1 1 2 3 5 8 13 21 34
"""


def fibonacci(n: int) -> int:
    return 1 if n < 2 else fibonacci(n - 1) + fibonacci(n - 2)


for i in range(0, 50):
    res = fibonacci(i)
    if res > 50:
        break
    print(res, end=' ')
