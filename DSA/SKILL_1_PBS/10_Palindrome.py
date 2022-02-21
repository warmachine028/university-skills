"""
CODE 10: Python program to check whether the string is Symmetrical or Palindrome
Input: khokho

Output:
The entered string is symmetrical
The entered string is not palindrome
"""

string = 'khokho'

if string == string[::-1]:
    print("The entered string is symmetrical")
else:
    print("The entered string is not palindrome")