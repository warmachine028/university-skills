"""
CODE 5:	Write a Python program to count the number of even and odd numbers from a series of numbers.

Input: numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9)
Expected Output :

Number of even numbers : 5
Number of odd numbers : 4

"""
numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9)
even = len([number for number in numbers if not number % 2])
print(f'Number of even numbers : {even}')
print(f'Number of odd numbers : {len(numbers) - even}')
