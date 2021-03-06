# ASSIGNMENT 6: DOUBLY LINKED LIST

1. Write a program to create a doubly linked list. [Solution](1_DoublyLinkedList.py)

   Input Format
   The first line of input contains n, the number of elements in the linked list. The next n lines contain one element each, the data values for each node.

   Sample Input 0
   2
   16
   13

   Sample Output 0
   16
   13

2. Write a menu program for following operation of Doubly Linked List toInsert a node at beginning. [Solution](2_InsertAtBeginningDLL.py)

   Input Format
   The first line contains an integer n , the number of elements to be inserted at the head of the list. The next n lines contain an integer each, the elements to be inserted, one per function call.

   Sample Input 0
   5
   383
   484
   392
   975
   321

   Sample Output 0
   321
   975
   392
   484
   383

3. Write a menu program for following operation of Doubly Linked List to Insert a node as per given position. [Solution](3_InsertAtAnyPosition.py)

   Input Format
   The first line contains an integer n, the number of elements in the linked list. Each of the next n lines contains an integer DoublyLinkedListNode[i].data. The next line contains an integer data, the data of the node that is to be inserted. The last line contains an integer position .

   Sample Input 0
   3
   16
   13
   7
   1
   2

   Sample Output 0
   16 13 1 7

4. Write a menu program for following operation of Doubly Linked List to Insert a node at the last of the linked list. [Solution](4_InsertTailDLL.py)

   Input Format:
   The first line contains an integer n, the number of elements in the linked list. The next n lines contain an integer each, the value that needs to be inserted at tail.

   Sample Input 0
   4
   141
   302
   164
   530
   474

   Sample Output 0
   141
   302
   164
   530
   474

5. Write a program to delete a node at beginning of Doubly Linked List. [Solution](5_DeleteBeginningDLL.py)

   Sample Input 0
   2 -> 4 -> 6 -> 8 -> 33 -> 67 -> NULL

   Sample Output 0
   4 -> 6 -> 8 -> 33 -> 67 -> NULL

6. Write a program to delete a node as per given position of Singly Linked List. [Solution](6_DeleteAtAnyPosition.py)

   Input Format:
   The first line of input contains an integer n, the number of elements in the linked list. Each of the next n lines contains an integer, the node data values in order. The last line contains an integer, position , the position of the node to delete.

   Sample Input: 0
   8
   20 6 2 19 7 4 15 9
   3

   Sample Output: 0
   20 6 2 7 4 15 9

7. Write a program to delete last node of Doubly Linked List. [Solution](7_DeleteTailDLL.py)

   Sample Input 0
   The list contains: 10 20 30 40

   Sample Output 0
   The list contains: 10 20 30

8. Given two doubly linked list, write a program to combine/concatenate the doubly linked list . [Solution](8_ConcatDLL.py)

   Sample Input 0
   List 1: 2 4 6 8 10
   List 2: 1 3 5 7 9

   Sample Output 0
   Combined list: 2 4 6 8 10 1 3 5 7 9
