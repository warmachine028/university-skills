""" CODE 4:
Write a python program that prints out a list of the integers from 1 to 20 and their squares. The output should look like this:
1 --- 1
2 --- 4
3 --- 9
...
20	--- 400

"""

print(*[f"{i} --- {i ** 2}" for i in range(1, 21)], sep='\n')
