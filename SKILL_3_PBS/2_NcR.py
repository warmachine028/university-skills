""" CODE 2: 
WAP to implement the Formula n C r.
Input :  n = 5, r = 2
Output : 10

"""


def fact(n):
    return n if n < 2 else n * fact(n - 1)


n, r = 5, 2
print(int(fact(n) / (fact(r) * fact(n - r))))
