""" CODE 13:
WAP to find the maximum element in an array & find how many times it is coming in an array of size n.

Input:
Enter the number of elements in array: 5
Enter 5 integers: 10 20 20 5 3

Output:
Maximum element is 20 and it's coming 2 times

"""
arr = 10, 20, 20, 5, 3
item = max(arr)
print(f"Maximum element is {item} and it's comming {arr.count(item)} times")