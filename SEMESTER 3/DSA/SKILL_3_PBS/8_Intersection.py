""" CODE 8: There are two arrays A and B. A contain 5 elements, whereas, B contains 4 elements. Write a function to create an array C that contain only those elements that are common to A and B.
Input : 
arr1[] = {1, 3, 4, 5, 7}
arr2[] = {2, 3, 5, 6}
Output : Intersection : {3, 5}

"""
arr1 = {1, 3, 4, 5, 7}
arr2 = {2, 3, 5, 6}
print(f"Intersection : {arr1.intersection(arr2)}")