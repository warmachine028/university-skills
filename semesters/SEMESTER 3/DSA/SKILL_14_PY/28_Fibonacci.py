""" CODE 28: a) The Fibonacci numbers are the sequence below, where the first two numbers are 1, and each number
thereafter is the sum of the two preceding numbers. Write a python program that asks the user how many Fibonacci
numbers to print and then prints that many. 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 . . .

"""
from functools import wraps
from typing import Callable, Any


def memoize(function: Callable) -> Callable:
    memo: dict[Any, int] = {}
    
    @wraps(function)
    def cache_it(*args: Any) -> int:
        if args in memo: return memo[args]
        result = function(*args)
        memo[args] = result
        return result
    
    return cache_it


@memoize
def fibonacci_number(n: int) -> int:
    return 1 if n == 0 else n if n <= 2 else fibonacci_number(n - 1) + fibonacci_number(n - 2)


print(*[fibonacci_number(i) for i in range(int((input("Number: "))) + 1)], '...', sep=', ')
