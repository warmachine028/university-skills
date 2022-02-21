"""CODE 9:Write a program to insert the new element in array at given location k.
Enter size of the array : 5
Enter elements in array : 2, 3, 4, 6, 8
Enter index should be less than 5:1
Enter new element : 12

before  insertion :2 3 4 6 8
after   insertion :2 12 4 6 8
"""

arr = [2, 3, 4, 6, 8]
print("before insertion :", *arr)
k, new = int(input()), int(input())
arr.pop(k)
arr.insert(k, new)
print("after insertion :", *arr)
