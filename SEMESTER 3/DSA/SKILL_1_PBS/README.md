# ASSIGMENT NO.-1 (Conditional Statements and Loops)

1. Write a Python program to find those numbers which are divisible by 7 and multiple of 5, between 1500 and 2700 (both included). [Solution](1_Div_by_57.py)
   INPUT:
   Case 1:
   Enter the lower range: 1500
   Enter the upper range: 2700
   OUTPUT:
   1505,1540,1575,1610,1645,1680,1715,1750,1785,1820,1855,1890,1925,1960,1995,2030,2065,2100,2135,2170,2205,2240,2275,2310,2345,2380,2415,2450,2485,2520,2555,2590,2625,2660,2695

2. Write a Python program to convert temperatures to and from celsius, fahrenheit. [Solution](2_C_to_F.py)
   [ Formula : c/5 = f-32/9 [ where c = temperature in celsius and f = temperature in fahrenheit ]
   INPUT:
   60°C
   OUTPUT:
   140 in Fahrenheit

3. Write a Python program to guess a number between 1 to 9. [Solution](3_Guess.py)
   INPUT:
   Guess a number between 1 and 10 until you get it right : 5  
   OUTPUT:
   Well guessed!

   Note : User is prompted to enter a guess. If the user guesses wrong then the prompt appears again until the guess is correct, on successful guess, user will get a "Well guessed!" message, and the program will exit.

4. Write a Python program that accepts a word from the user and reverse it. [Solution](4_Reverse.py)
   INPUT:
   Input a word to reverse: ecruoser3w  
    OUTPUT:
   w3resource

5. Write a Python program to count the number of even and odd numbers from a series of numbers. [Solution](5_Odd_Even.py)
   Input: numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9)
   Expected Output :
   Number of even numbers : 5
   Number of odd numbers : 4

6. Write a Python program that prints each item and its corresponding type from the following list. [Solution](6_Type_correpond.py)
   INPUT:
   datalist = [1452, 11.23, 1+2j, True, 'w3resource', (0, -1), [5, 12], {"class":'V', "section":'A'}]
   OUTPUT:

   ```py
      Type of 1452 is <class 'int'>
      Type of 11.23 is <class 'float'>
      Type of (1+2j) is <class 'complex'>
      Type of True is <class 'bool'>
      Type of w3resource is <class 'str'>
      Type of (0, -1) is <class 'tuple'>
      Type of [5, 12] is <class 'list'>
      Type of {'class': 'V', 'section': 'A'} is < class 'dict'>
   ```

7. Write a Python program that prints all the numbers from 0 to 6 except 3 and 6. [Solution](7_Print_except_3_6.py)
   Note : Use 'continue' statement.
   Input: 6
   Expected Output : 0 1 2 4 5

8. Write a Python program to get the Fibonacci series between 0 to 50.
   Note : The Fibonacci Sequence is the series of numbers : [Solution](8_50_Fibo.py)
   0, 1, 1, 2, 3, 5, 8, 13, 21, ....
   Every next number is found by adding up the two numbers before it.
   INPUT: 50
   Expected Output : 1 1 2 3 5 8 13 21 34

9. Write a Python program which iterates the integers from 1 to 50. For multiples of three print "Fizz" instead of the number and for the multiples of five print "Buzz". For numbers which are multiples of both three and five print "FizzBuzz". [Solution](9_BuzzFizz.py)
   Input:
   Enter no:51
   Sample Output :
   fizzbuzz
   1
   2
   fizz
   4
   buzz
   .
   .
   .

10. Python program to check whether the string is Symmetrical or Palindrome [Solution](10_Palindrome.py)
    Input: khokho
    Output:
    The entered string is symmetrical
    The entered string is not palindrome
    :
11. Reverse words in a given String in Python [Solution](11_Reverse_Words.py)
    Input : str = geeks quiz practice code
    Output : str = code practice quiz geeks

12. Python program to capitalize the first and last character of each word in a string [Solution](12_Cap_first_last.py)
    Input: hello world
    Output: HellO WorlD

13. Python program to check if a string has at least one letter and one number [Solution](13_Alphanumeric.py)
    Input: welcome2ourcountry34
    Output: True

14. Python program to count number of vowels using sets in given string
    Input : GeeksforGeeks [Solution](14_Count_vowel.py)
    Output : No. of vowels : 5

15. Python program to split and join a string [Solution](15_split_join_str.py)
    Input: ['Geeks', 'for', 'Geeks']
    Output: Geeks-for-Geeks
