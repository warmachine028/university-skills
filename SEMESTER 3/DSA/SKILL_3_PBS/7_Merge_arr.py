""" CODE 7: WAP to merge the two array A and B of size m and n respectively in one sorted array C of size M + N
Input:
Input first array elements: 1, 4, 6, 9, 15
Input second array elements: 2, 5, 8, 10
Output:
Merged array in ascending order = 1, 2, 4, 5, 6, 8, 9, 10, 15
"""

a = 1, 4, 6, 9, 15
b = 2, 5, 8, 10
c = sorted(a + b)
print("Merged array in ascending order =", *c)
