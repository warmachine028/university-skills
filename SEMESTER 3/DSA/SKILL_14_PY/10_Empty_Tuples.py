""" CODE 10:
Write a Python program to remove an empty tuple(s) from a list of tuples.
Sample data: [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
Expected output: [('',), ('a', 'b'), ('a', 'b', 'c'), 'd']

"""

sample_data = [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
expected_output = [('',), ('a', 'b'), ('a', 'b', 'c'), 'd']
sample_data = [*filter(bool, sample_data)]
assert expected_output == sample_data, "Incorrect result"
