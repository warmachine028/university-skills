""" CODE 17:
Write a Python program to replace last value of tuples in a list.
Sample list: [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
Expected Output: [(10, 20, 100), (40, 50, 100), (70, 80, 100)]

"""

sample_list = [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
for i, item in enumerate(sample_list): sample_list[i] = item[:-1] + (100,)
print(sample_list)
