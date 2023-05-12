""" CODE 5:
Write a program in python that takes any two lists L and M of the same size and adds their elements together to form
a new list N whose elements are sums of the corresponding elements in Land M. For instance, if L=[3,1,4] and M=[1,5,9],
then N should equal [4,6,13].

"""

L = [3, 1, 4]
M = [1, 5, 9]
N = [i + j for i, j in zip(L, M)]
