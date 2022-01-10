"""
CODE 12: Python program to capitalize the first and last character of each word in a string
Input: hello world
Output: HellO WorlD
"""

string = "hello world"
temp = []
for word in string.split():
    word = word.capitalize()
    word = word[:-1] + word[-1].upper()
    temp.append(word)

print(" ".join(temp))
