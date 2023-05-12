""" CODE 18:
Write a Python program to print a specified list after removing the 0th, 4th and 5th elements.
Sample List : ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
Expected Output : ['Green', 'White', 'Black']

"""

sample_list = ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
expected_output = ['Green', 'White', 'Black']
for index in sorted([0, 4, 5], reverse=True): sample_list.pop(index)
assert sample_list == expected_output, "Operation failed"
