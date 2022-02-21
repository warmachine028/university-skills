""" CODE 14:
Write a Python program to remove an empty tuple(s) from a list of tuples. 

Sample data: [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), 'd']
Expected output: [('',), ('a', 'b'), ('a', 'b', 'c'), 'd']

"""

lst = [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), 'd']
print(f"Expected output: {[x for x in lst if x]}")
