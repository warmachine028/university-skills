""" CODE 6: 
Write a program using array in which find maximum and second maximum number.
1,3,2,5,6,3
Output:  6  5

"""

arr = list(map(int, input().split(',')))
arr.sort()
print(f"Output: {arr[-1]} {arr[-2]}")
