""" CODE 3:
Write a program that generates a list of 20 random numbers between 1 and 100.
(a) Print the list.
(b) Print the average of the elements in the list.
(c) Print the largest and smallest values in the list.
(d) Print the second largest and second smallest entries in the list
(e) Print how many even numbers are in the list?
"""
import random

random_numbers = [random.randint(1, 100) for i in range(20)]
# a) List
print(random_numbers)
# b) Average
print(sum(random_numbers) / len(random_numbers))
# c) Largest & Smallest Elements
print(max(random_numbers), min(random_numbers))
# d) Second Largest & Second Smallest Entries
second_largest = second_smallest = random_numbers[0]
for number in set(random_numbers):
    if number > second_largest and number != max(random_numbers):
        second_largest = number
    if number < second_smallest and number != min(random_numbers):
        second_smallest = number
print(second_largest, second_smallest)
