""" CODE 14:
Write a program that removes any repeated items from a list so that each item appears at most once. For instance, the
list [1,1,2,3,4,3,0,0] would become [1,2,3,4,0]

"""

data = [1, 1, 2, 3, 4, 3, 0, 0]
data = list(set(data))
print(data)
