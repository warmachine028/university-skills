""" CODE 8:
Write a python program that asks the user to enter a word and then capitalizes every other letter of that word. So if
the user enters rhinoceros, the program should print rHiNoCeRoS.

"""

word = input("Word: ")
print(''.join(char.upper() if i % 2 else char for i, char in enumerate(word)))
