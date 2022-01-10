""" CODE 19:
The keys in a dictionary are guaranteed to be unique, but the values are not. Write a function called count_values
that takes a single dictionary as an argument and returns the number of distinct values it contains. Given the
input {’red’:1, ’green’:1, blue’:2}, for example, it would return 2.

"""
from typing import Any


def count_values(dictionary: dict[Any, Any]) -> int:
    return len(set(dictionary.values()))


res = count_values({'red': 1, 'green': 1, 'blue': 2})
