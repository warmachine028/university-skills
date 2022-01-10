""" CODE 23:
Write a program that asks the user to enter a string. The program should create a new string called new_string from
the user’s string such that the second character is changed to an asterisk and three exclamation points are attached
to the end of the string. Finally, print new_string. Typical output is shown below:

Enter your string: Qbert
Q*ert!!!

"""

string = input("string: ")
new_string = f"{string[:1]}*{(string[2:] if len(string) > 2 else '')}!!!"
print(new_string)
