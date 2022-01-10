""" CODE 26:
26.	 Write a Python program that asks the user to enter a list of integers. Do the following:
(a) Print the total number of items in the list.
(b) Print the last item in the list.
(c) Print the list in reverse order.
(d) Print Yes if the list contains a 5 and No otherwise.
(e) Print the number of fives in the list.
(f) Remove the first and last items from the list, sort the remaining items, and print the result.
(g) Print how many integers in the list are less than 5.

"""
integers = list(map(int, input("Enter integers: ").split(',')))
# a)
print(len(integers))
# b)
print(integers[-1])
# c)
print(integers[::-1])
# d)
print("Yes" if 5 in integers else "No")
# e)
print(integers.count(5))
# f)
integers.pop(0), integers.pop(), integers.sort()
print(integers)
# g)
print(sum(1 for integer in integers if integer < 5))
