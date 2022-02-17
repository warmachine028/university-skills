""" CODE 3:
Write a Python function that takes two lists and returns True if they have at least one common member. 

a = [1, 2, 3, 4, 5]	
b = [6, 7, 8, 9]
False

"""

a = [1, 2, 3, 4, 5]
b = [6, 7, 8, 9, 1]
print(len({*a}.intersection({*b})) >= 1)
