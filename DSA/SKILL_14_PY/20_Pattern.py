""" CODE 20:
Write a Python program to construct the following pattern, using a nested for loop.
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

"""

levels = int(input("Levels: "))
for i in [*range(1, levels), *range(levels, 0, -1)]:
    for j in range(i): print("*", end=' ')
    print()
