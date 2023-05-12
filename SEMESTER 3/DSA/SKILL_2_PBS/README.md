# ASSIGNMENT 2

1. Write a Python program to count the number of strings where the string length is 2 or more and the first and last character are same from a given list of strings.[Solution](1_Count_str.py)
   Sample List : ['abc', 'xyz', 'aba', '1221']
   Expected Result : 2
2. Write a Python program to get a list, sorted in increasing order by the last element in each tuple from a given list of non-empty tuples. [Solution](2_Sort_list.py)
   Sample List : [(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]
   Expected Result : [(2, 1), (1, 2), (2, 3), (4, 4), (2, 5)].
3. Write a Python function that takes two lists and returns True if they have at least one common member.[Solution](3_Common_ele_list.py)
   a =[1, 2, 3, 4, 5]
   b =[6, 7, 8, 9]
   False

4. Write a Python program to print a specified list after removing the 0th, 4th and 5th elements.[Solution](4_Print_0_4_5.py)
   Sample List : ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
   Expected Output : ['Green', 'White', 'Black']

5. Write a Python program to print the numbers of a specified list after removing even numbers from it.[Solution](5_Remove_even.py)
   Enter number of elements : 7
   7
   8
   120
   25
   44
   20
   27
   [7, 25, 27]

6. Write a Python program to generate and print a list of first and last 5 elements where the values are square of numbers between 1 and 30 (both included).[Solution](6_First_to_last_sq.py)

   1
   30
   Output:
   [1, 4, 9, 16, 25]
   [625, 676, 729, 784, 841]

7. Write a Python program to generate and print a list except for the first 5 elements, where the values are square of numbers between 1 and 30 (both included).[Solution](7_5_to_last.py)

   Enter lower limit : 1
   Enter Upper limit : 30
   [36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625, 676, 729, 784, 841

8. Write a Python program to find maximum and the minimum value in a set. [Solution](8_Min_max_set.py)
   {5, 10, 3, 15, 2, 20}
   Maximum value of the said set:
   20
   Minimum value of the said set:
   2

9. Write a Python program to find the length of a set.[Solution](9_Len_set.py)
   {5, 5, 5, 5, 5, 5, 7}
   Length of the said set: 2

10. Write a Python program to check if a given value is present in a set or not.[Solution](10_Value_in_set.py)
    Input: {4, 2, 9, 5, 1, 0, 7}
    element -> 5
    Output: Present

11. Write a Python program to reverse a tuple.[Solution](11_Reverse_tuple.py)
    (5, 10, 15, 20)
    (20, 15, 10, 5)

12. Write a Python program to print a tuple with string formatting.[Solution](12_String_format_tup.py)
    Sample tuple : (100, 200, 300)
    Output : This is a tuple (100, 200, 300)
13. Write a Python program to replace last value of tuples in a list.[Solution](13_Repl_last_val_tup.py)
    Sample list: [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
    Expected Output: [(10, 20, 100), (40, 50, 100), (70, 80, 100)]

14. Write a Python program to remove an empty tuple(s) from a list of tuples.[Solution](14_Rem_empty_tup.py)
    Sample data: [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
    Expected output: [('',), ('a', 'b'), ('a', 'b', 'c'), 'd']

15. Write a Python program to sort a tuple by its float element.[Solution](15_Sort_tup_float.py)
    Sample data: [('item1', '12.20'), ('item2', '15.10'), ('item3', '24.5')]
    Expected Output: [('item3', '24.5'), ('item2', '15.10'), ('item1', '12.20')]
