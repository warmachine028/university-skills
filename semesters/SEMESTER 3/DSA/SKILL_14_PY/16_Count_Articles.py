""" CODE 16:
Write a python program that asks the user to enter some text and then counts how many articles are in the text. Articles
are the words 'a', 'an', and 'the'

"""
ARTICLES = ['a', 'an', 'the']

text = input("text: ")
count = sum(1 for word in text.split() if word.lower() in ARTICLES)
