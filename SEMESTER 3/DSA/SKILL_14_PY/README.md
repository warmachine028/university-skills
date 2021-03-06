# ASSIGNMENT 14

1. Create the following lists using a for loop in python. [Solution](1_Lists.py)
   (a) A list consisting of the integers 0 through 49
   (b) A list containing the squares of the integers 1 through 50.
   (c) The list ['a','bb','ccc','dddd', . . . ] that ends with 26 copies of the letter z.

2. Write a Python program that outputs 100 lines, numbered 1 to 100, each with your name on it. The output should look like the output below. [Solution](2_String_vowel.py)
   1 Your name
   2 Your name
   3 Your name
   4 Your name
   ...
   100 Your name
   b) Write a python program to count the number of each vowel in a given string.

3. Write a program that generates a list of 20 random numbers between 1 and 100. [Solution](3_Random.py)
   (a) Print the list.
   (b) Print the average of the elements in the list.
   (c) Print the largest and smallest values in the list.
   (d) Print the second largest and second-smallest entries in the list
   (e) Print how many even numbers are in the list?

4. Write a python program that prints out a list of the integers from 1 to 20 and their squares. The output should look like this: [Solution](4_Squares.py)
   1 --- 1
   2 --- 4
   3 --- 9
   ...
   20 --- 400

5. Write a program in python that takes any two lists L and M of the same size and adds their elements together to form a new list N whose elements are sums of the corresponding elements in Land M. For instance, if L=[3,1,4] and M=[1,5,9], then N should equal [4,6,13]. [Solution](5_List_Element_Addition.py)

6. Ask the user to enter a list of strings. Create a new list that consists of those strings with their first characters removed using Python. [Solution](6_List_String_Manipulation.py)

7. Write a Python program that accepts a string and calculate the number of digits and letters. [Solution](7_String_Methods.py)
   Sample Data : Python 3.2
   Expected Output :
   Letters 6
   Digits 2

8. Write a python program that asks the user to enter a word and then capitalizes every other letter of that word. So if the user enters rhinoceros, the program should print rHiNoCeRoS. [Solution](8_Capitalize.py)

9. Write a program that asks the user to guess a random number between 1 and 10. If they guess right, they get 10 points added to their score, and they lose 1 point for an incorrect guess. Give the user five numbers to guess and print their score after all the guessing is done. [Solution](9_Random_Number_Game.py)

10. Write a Python program to remove an empty tuple(s) from a list of tuples. [Solution](10_Empty_Tuples.py)
    Sample data: [(), (), ('',), ('a', 'b'), ('a', 'b', 'c'), ('d')]
    Expected output: [('',), ('a', 'b'), ('a', 'b', 'c'), 'd']

11. Write a Python script to print a dictionary where the keys are numbers between 1 and 15 (both included) and the values are square of keys. [Solution](11_Dict_Comprehension.py)
    Sample Dictionary
    {1: 1, 2: 4, 3: 9, 4: 16, 5: 25, 6: 36, 7: 49, 8: 64, 9: 81, 10: 100, 11: 121, 12: 144, 13: 169, 14: 196, 15: 225}

12. Ask the user to enter 10 test scores. Write a python program to do the following: [Solution](12_Integer_Operations.py)
    (a) Print out the highest and lowest scores.
    (b) Print out the average of the scores.
    (c) Print out the second-largest score.
    (d) If any of the scores is greater than 100, then after all the scores have been entered, print a message warning the user that a value over 100 has been entered.
    (e) Drop the two lowest scores and print out the average of the rest of them.

13. Dictionaries provide a convenient way to store structured data. Here is an example dictionary: [Solution](13_Dictionary_Operations.py)
    d=[{'name':'Todd', 'phone':'555-1414', 'email':'todd@mail.net'},
    {'name':'Helga', 'phone':'555-1618', 'email':'helga@mail.net'},
    {'name':'Princess', 'phone':'555-3141', 'email':''},
    {'name':'LJ', 'phone':'555-2718', 'email':'lj@mail.net'}]

    Write a program that reads through any dictionary like this and prints the following:
    (a) All the users whose phone number ends in an 8
    (b) All the users that don???t have an email address listed.

14. Write a program that removes any repeated items from a list so that each item appears at most once. For instance, the list [1,1,2,3,4,3,0,0] would become [1,2,3,4,0].

15. Create a list of temperatures in degrees Celsius with the values 25.2, 16.8, 31.4, 23.9, 28, 22.5, and 19.6, and assign it to a variable called temps. [Solution](15_Temperartures.py)
    a) Using one of the list methods, sort temps in ascending order.
    b) Using slicing, create two new lists, cool_temps and warm_temps, which contain the temperatures below and above 20 degrees celsius, respectively.
    c) Using list arithmetic, recombine cool_temps and warm_temps in into a new list called temps_in_celsius.

16. Write a python program that asks the user to enter some text and then counts how many articles are in the text. Articles are the words 'a', 'an', and 'the'[Solution](16_Count_Articles.py)

17. Write a Python program to replace last value of tuples in a list. [Solution](17_Tuple_Operations.py)
    Sample list: [(10, 20, 40), (40, 50, 60), (70, 80, 90)]
    Expected Output: [(10, 20, 100), (40, 50, 100), (70, 80, 100)]

18. Write a Python program to print a specified list after removing the 0th, 4th and 5th elements. [Solution](18_List_Operations.py)
    Sample List : ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
    Expected Output : ['Green', 'White', 'Black']

19. The keys in a dictionary are guaranteed to be unique, but the values are not. Write a function called count_values that takes a single dictionary as an argument and returns the number of distinct values it contains. [Solution](19_Dictionary_Operations.py)
    Given the input {???red???:1, ???green???:1, blue???:2},
    for example, it would return 2.
20. Write a Python program to construct the following pattern, using a nested for loop.[Solution](20_Pattern.py)

    ```sh
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *
    ```

21. a) Create a list in python. Delete the last element. List should contain at least 10 elements. [Solution](21_Multiple_Operations.py)
    (b) Take input the string ???banana???.print ???nan??? from it using python.
    (c) Write a Python Program to Make a Simple Calculator

22. Repeatedly ask the user to enter a team name and the how many games the team won and how many they lost. Store this information in a dictionary where the keys are the team names and the values are lists of the form [wins, losses]. [Solution](22_Dictionary_Operations.py)
    (a) Using the dictionary created above, allow the user to enter a team name and print out the team???s winning percentage.
    (b) Using the dictionary, create a list whose entries are the number of wins of each team.
    (c) Using the dictionary, create a list of all those teams that have winning records

23. Write a program that asks the user to enter a string. The program should create a new stringcallednew_string from the user???s string such that the second character is changed to anasterisk and three exclamation points are attached to the end of the string. Finally, printnew_string. [Solution](23_String_Manipulation.py)
    Typical output is shown below:
    Enter your string: Qbert
    Q\*ert!!!

24. (a) Given 2 strings, str1, and str2 return a new string made of the first, middle and last char of each of the input strings. characters from the 1st string will be in lowercase and characters from the 2nd string will be in uppercase use python [Solution](24_String_Operations.py)
    (b) Take a sentence as input. Take two integer numbers as input. Print the substring starting and ending at the positions same as those numbers, use python
    (c) Write program in python to find the prime numbers in a range using function

25. Write a python program that asks the user for an integer and creates a list that consists of the factors of that integer. [Solution](25_Factors.py)

26. Write a Python program that asks the user to enter a list of integers. Do the following: [Solution](26_List_Operations.py)
    (a) Print the total number of items in the list.
    (b) Print the last item in the list.
    (c) Print the list in reverse order.
    (d) Print Yes if the list contains a 5 and No otherwise.
    (e) Print the number of fives in the list.
    (f) Remove the first and last items from the list, sort the remaining items, and print the result.
    (g) Print how many integers in the list are less than 5.

27. Start with the list [8, 9, 10 ]. Do the following: [Solution](27_List_Operations_2.py)
    (a) Set the second entry (index 1) to 17
    (b) Add 4, 5, and 6 to the end of the list
    (c) Remove the first entry from the list
    (d) Sort the list
    (e) Double the list
    (f) Insert 25 at index 3
    The final list should equal [4,5,6,25,10,17,4,5,6,10,17]

28. The Fibonacci numbers are the sequence below, where the first two numbers are 1, and each number thereafter is the sum of the two preceding numbers. Write a python program that asks the user how many Fibonacci numbers to print and then prints that many. [Solution](28_Fibonacci.py)
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 . . .
