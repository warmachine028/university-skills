"""
CODE 3: Write a Python program to guess a number between 1 to 9.

INPUT: Guess a number between 1 and 10 until you get it right : 5
OUTPUT: Well guessed!

Note : User is prompted to enter a guess. If the user guesses wrong then the prompt appears again until the guess is
correct, on successful guess, user will get a "Well guessed!" message, and the program will exit.

"""
import random

random_no = random.randint(1, 9)
guess_no = int(input("Guess a Number between 1 and 10: "))

while random_no != guess_no:
    guess_no = int(input("Guess a Number between 1 and 10: "))
print("Well guessed!")
