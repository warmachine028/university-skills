""" CODE 21:
(a) Create a list in python. Delete the last element. List should contain at least 10 elements.
(b) Take input the string ‘banana’.print ‘nan’ from it using python.
(c)  Write a Python Program to Make a Simple Calculator

"""

# a)
elements = [i for i in range(11)]
elements.pop()
print(elements)
# b)
print('banana'[2:-1])
# c)
while True:
    command = input(">>> ")
    try:
        if command == 'exit': break
        print(eval(command))
    except (TypeError, SyntaxError, NameError, ZeroDivisionError) as e:
        print(f"Bad Operation, {e}")
