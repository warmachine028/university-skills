""" CODE 1:
1.	Create the following lists using a for loop in python.
(a) A list consisting of the integers 0 through 49
(b) A list containing the squares of the integers 1 through 50.
(c) The list ['a','bb','ccc','dddd', . . . ] that ends with 26 copies of the letter z.

"""
a = [i for i in range(50)]
b = [i*i for i in range(1, 51)]
c = [chr(i) * (i - 96) for i in range(97, 97+26)]
