# ASSIGNMENT 9: QUEUE, POSTFIX AND INFIX STUFFS

1. Write a program in C to implement Queue using Array [Solution](1_QUE_Arr.c)
   i. Insert
   ii. Delete
   iii.Display
   iv. Exit

   Input Format
   First line contains the Menu followed Input for given menu

   Constraints
   NA

   Output Format
   The output based on the Menu

   Sample Input 0
   1
   23
   1
   120
   1
   45
   3
   2
   3
   2
   3
   4

   Sample Output 0

   ->23
   ->120
   ->45

2. Implement a Circular Queue using arrays with the following operations. [Solution](2_Circular_Queue.c)
   i. Insert (Display "Queue Overflow" if queue is full).
   ii. Delete (Display "Queue Underflow" if queue is empty).
   iii. Display (Display NULL if queue is empty).
   iv. Exit

   Input Format
   First line contains the Menu followed Input for given menu.
   Constraints
   NA

   Output Format
   Print the out put based on the Menu

   Sample Input 0
   1
   12
   1
   30
   1
   45
   3
   4

   Sample Output 0
   12 30 45

3. Write a program to evaluate Postfix expression [Solution](3_PostFix_Evaluation.py)
   Input Format

   The first input will be a single integer N denoting the number of test cases to take. After this there will be exactly N lines, each line a valid postfix string. The string will be a valid postfix expression consisting of only integers and binary operators (+, -, \*, / and ?). Every integer and operator will be compulsorily separated by a SPACE. The symbol ‘?’ denotes the end of expression

   Constraints

   NA

   Output Format

   Exactly N lines, each line denoting the output of the expression. In case the output is in fractions, please print only the integer part of the output.

   Sample Input 0
   4
   12 23 + 14 - ?
   2 43 12 \* + 12 + ?
   12 3 + 12 3 + \* 12 3 + / ?
   32 34 12 \* + 1 2 + \* 1 1 + / 23 21 - \* ?

   Sample Output 0
   21
   530
   15
   1320

4. Write a C program to Convert an infix expression into postfix expression. [Solution](4_Infix_to_postfix.c)
   Input Format

   The first input will be a single integer N denoting the number of test cases to take. followed by N infix strings. Binary operators (+, -, \*, / and ?) and parenthesis. Every integer, operator and parenthesis will be compulsorily separated by a SPACE. The symbol ‘?’ denotes the end of expression.

   Constraints

   NA

   Output Format

   N lines denoting postfix expression. Every integer and operator must be separated by a single SPACE

   Sample Input 0

   1
   ( ( 32 + 34 \* 12 ) \* ( 1 + 2 ) / ( 1 + 1 ) ) \* ( 23 - 21 ) ?
   Sample Output 0

   32 34 12 \* + 1 2 + \* 1 1 + / 23 21 - \*
