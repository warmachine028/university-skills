"""
CODE 3:
 Write a Python program for a given inputs of maximum of 100 digit numbers as
input, find the difference between the sum of odd and even position digits.
(Take user input)
"""


def difference(lst: list[int]) -> int:
    # trimming to at max 100 numbers
    lst = lst[:100]
    n = len(lst)
    odd_position_sums = sum(lst[i] for i in range(n) if i % 2)
    even_position_sum = sum(lst[i] for i in range(n) if not i % 2)
    return odd_position_sums - even_position_sum


user_input = list(map(int, input("Inputs: ").split(', ')))
print(difference(user_input))
