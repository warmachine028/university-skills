""" CODE 2:
Write a Python program that outputs 100 lines, numbered 1 to 100, each with your name on it. The output
should look like the output below.
1 Your name
2 Your name
3 Your name
4 Your name
...
100	Your name
b) Write a python program to count the number of each vowel in a given string.


"""
# a)
for i in range(1, 101): print(f"{i} Your name")
# b)
VOWELS = ['a', 'e', 'i', ' o', 'u']
given_string = "given string"
count = sum(1 for character in given_string if character.lower() in VOWELS)
