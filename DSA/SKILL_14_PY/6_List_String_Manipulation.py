""" CODE 6:
Ask the user to enter a list of strings. Create a new list that consists of those strings with their first characters
removed using Python.

"""

strings = input("Enter strings: ").split(',')
new_list = [string[1:] for string in strings]
