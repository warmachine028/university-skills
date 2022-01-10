"""
CODE 13: Python program to check if a string has at least one letter and one number
Input: welcome2ourcountry34
Output: True

"""
alpha, numeric = False, False

string = "welcome2ourcountry34"
for character in string:
    if character.isalpha():
        alpha = True
    elif character.isnumeric():
        numeric = True
    if alpha and numeric:
        print(True)
        break
else:
    print(False)
