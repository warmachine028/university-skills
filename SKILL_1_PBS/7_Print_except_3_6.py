"""
CODE 7:	Write a Python program that prints all the numbers from 0 to 6 except 3 and 6.
Note : Use 'continue' statement.
Input:  6
Expected Output : 0 1 2 4 5
"""

for number in range(6):
    if number == 3:
        continue
    print(number, end=' ')
