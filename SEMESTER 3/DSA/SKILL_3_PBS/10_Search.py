""" CODE 10: Write a program to search the location of a given element in array.
Please Enter the size of an array :  5

Please Enter 5 elements of an array: 2 3 4 1 5 
Please Enter the Search Element  :  2

We found the Search Element 2 at Position 1

"""

array = [2, 3, 4, 1, 5]
item = int(input("Enter the Search Element: "))
print(f"We found the Search Element {item} at Position {array.index(item) + 1}")
