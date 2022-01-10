""" CODE 5:
Write a Python program to print the numbers of a specified list after removing even numbers from it. 

Enter number of elements : 7
7 8 120 25 44 20 27
[7, 25, 27] 

"""

entered = "7 8 120 25 44 20 27"
lst = [i for i in map(int, entered.split()) if i % 2]
print(lst)  # also List[::3] in rawList
