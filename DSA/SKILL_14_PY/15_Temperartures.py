""" CODE 15:
Create a list of temperatures in degrees Celsius with the values 25.2, 16.8, 31.4, 23.9, 28, 22.5, and 19.6, and assign
it to a variable called temps.
a)	Using one of the list methods, sort temps in ascending order.
b)	Using slicing, create two new lists, cool_temps and warm_temps, which contain the temperatures below and above 20
    degrees celsius, respectively.
c)	Using list arithmetic, recombine cool_temps and warm_temps in into a new list called temps_in_celsius.

"""
from functools import reduce

temps = [25.2, 16.8, 31.4, 23.9, 28, 22.5, 19.6]

# a)
temps.sort()
# b)
just_lesser_than_20 = reduce(lambda x, y: y if y < 20 else x, temps)
cool_temps, warm_temps = temps[:temps.index(just_lesser_than_20) + 1], temps[temps.index(just_lesser_than_20) + 1:]
# c)
temps_in_celsius = cool_temps + warm_temps
assert temps == temps_in_celsius, "Result is not correct"
