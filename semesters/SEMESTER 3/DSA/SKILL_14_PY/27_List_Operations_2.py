""" CODE 27:
Start with the list [8, 9, 10 ]. Do the following:
(a) Set the second entry (index 1) to 17
(b) Add 4, 5, and 6 to the end of the list
(c) Remove the first entry from the list
(d) Sort the list
(e) Double the list
(f) Insert 25 at index 3
The final list should equal [4,5,6,25,10,17,4,5,6,10,17]

"""
list_ = [8, 9, 10]
# a)
list_[1] = 17
# b)
list_.extend((4, 5, 6))
# c)
list_.pop(0)
# d)
list_.sort()
# e)
list_ *= 2
# f)
list_.insert(3, 25)
# finally
assert list_ == [4, 5, 6, 25, 10, 17, 4, 5, 6, 10, 17], "List isn't equal"
