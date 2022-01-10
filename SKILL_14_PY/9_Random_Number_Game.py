""" CODE 9:
Write a program that asks the user to guess a random number between 1 and 10. If they guess right, they get 10 points
added to their score, and they lose 1 point for an incorrect guess. Give the user five numbers to guess and print their
score after all the guessing is done.

"""
from random import randint


# Takes randomly generated numbers and plays game with user
def play_game(numbers: list[int]) -> int:
    score = 0
    for nth, number in enumerate(numbers):
        guess = int(input(f"Enter guess for number {nth}: "))
        if guess == number:
            score += 10
            print('🗸')
        else:
            score -= 1
            print('✗')
    return score


random_numbers = [randint(1, 10) for i in range(5)]
Score = play_game(random_numbers)
print(Score)
