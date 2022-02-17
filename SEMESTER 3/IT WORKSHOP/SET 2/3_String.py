"""
CODE 3:
Write a Python program to create, concatenate and print a string and accessing
the substring from the same string. (Take user input for string values)

"""

string = input("String: ")
sub_string = string[:len(string) - 2]
string += sub_string
print(string)
