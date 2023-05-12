""" CODE 3:
Write a python program to take input as sentence. The program must print all the unique alphabets in sentence in alphabetical order
"""

sentence = input("Sentence: ")
print(sorted(filter(lambda c: c if c != ' ' else None, set(sentence))))