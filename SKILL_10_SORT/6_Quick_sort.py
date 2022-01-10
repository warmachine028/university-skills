""" CODE 6: 
WAP to sort an array of given numbers Quick sort method.
"""
qsort = (
    lambda x: qsort([*filter(lambda item: item < x[0], x[1:])])
    + x[:1]
    + qsort([*filter(lambda item: item > x[0], x[1:])])
    if x
    else x
)

print(qsort([3, 2, 1, 5, 7, 8]))
