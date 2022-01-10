""" CODE 13:
Write a Python program to replace last value of tuples in a list.

Sample list: [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
Expected Output: [(10, 20, 100), (40, 50, 100), (70, 80, 100)]

"""

s_list = [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
s_list = [(*tup[:2], 100) for tup in s_list]
print(f"Expected Output: {s_list}")
