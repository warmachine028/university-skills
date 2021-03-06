# ASSIGMENT NO. – 7 (Related to Circular Linked List)

1. Write a program to create a singly circular linked list. [Solution](1_CircularLinkedList.py)
   Input Format
   The first line of input contains n, the number of elements in the linked list. The next n lines
   contain one element each, the data values for each node.
   Constraints
   NA
   Output Format
   NA
   Sample Input 0
   No. of input node 3
   16
   13
   18
   Sample Output 0
   16
   13
   18

2. Write a menu program for following operation of Circular Linked List to Insert a node at beginning. [Solution](2_InsertAtBeginningCLL.py)
   Input Format
   The first line contains an integer n , the number of elements to be inserted at the head of the list.
   The next n lines contain an integer each, the elements to be inserted, one per function call.
   Constraints
   NA
   Output Format
   NA
   Sample Input 0
   Input the number of nodes: 3
   Input data for node 1 : 67
   Input data for node 2 : 15
   Input data for node 3 : 8

   Data entered in the list are :
   Data 1 = 67
   Data 2 = 15
   Data 3 = 8
   Input data to be inserted at the beginning: 10

   Sample Output 0
   10
   67
   15
   8

3. Write a menu program for following operation of Circular singly Linked List to Insert a node as per given position. [Solution](3_InsertAtAnyPosition.py)
   Input Format
   The first line contains an integer n, the number of elements in the linked list. Each of the next n
   lines contains an integer circular Linked List Node[i].data. The next line contains an integer data,
   the data of the node that is to be inserted. The last line contains an integer position .
   Constraints
   NA
   Output Format
   NA
   Sample Input 0
   Input the number of nodes: 3
   Input data for node 1 : 22
   Input data for node 2 : 15
   Input data for node 3 : 80

   Data entered in the list are :
   Data 1 = 22
   Data 2 = 15
   Data 3 = 80
   Input the position to insert a new node: 3
   Input data for the position 3 : 7
   Sample Output 0
   After insertion the new list are :
   Data 1 = 22
   Data 2 = 15
   Data 3 = 7
   Data 4 = 80

4. Write a menu program for following operation of Circular Linked List to Insert a node at the last of the linked list. [Solution](4_InsertTailCLL.py)
   Input Format
   The first line contains an integer n, the number of elements in the linked list. The next n lines
   contain an integer each, the value that needs to be inserted at tail.
   Constraints
   NA
   Output Format
   NA
   Sample Input 0
   Input the number of nodes: 3
   Input data for node 1 :71
   Input data for node 2 : 50
   Input data for node 3 : 18

   Data entered in the list are :
   Data 1 = 71
   Data 2 = 50
   Data 3 = 18
   Input data to be inserted at the end: 43
   Sample Output 0
   71
   50
   18
   43

5. Write a program to delete a node at beginning of Circular singly Linked List. Given a linked list, the task is to remove the first node of the linked list and update the head [Solution](5_DeleteBeginningCLL.py)
   pointer of the linked list.
   Sample Input 0
   12 -> 40 ->1 6 ->28 -> 33 -> 17
   Sample Output 0
   40-> 16 ->28 -> 33 -> 17

6. Write a program to delete a node as per given position of Circular Linked List. [Solution](6_DeleteAtAnyPosition.py)
   Input Format
   The first line of input contains an integer n, the number of elements in the linked list. Each of the
   next n lines contains an integer, the node data values in order. The last line contains an integer,
   position, the position of the node to delete.
   Sample Input 0
   No. of Node 5
   20
   6
   2
   19
   7
   Node to be deleted 3
   Sample Output 0
   20 6 19 7
   Explanation 0
   The original list contain 20-> 6->2->19->7.
   After deleting the node at position 3 , the list is 20->6->19->7

7. Write a program to delete last node of Circular Linked list. [Solution](7_DeleteTailCLL.py)
   Here just declare a temporary pointer temp and assign it to head of the list. We also need to keep track of
   the second last node of the list. For this purpose, two pointers ptr and ptr1 will be used where ptr will point
   to the last node and ptr1 will point to the second last node of the list.
   Sample Input
   The list contains: 23 12 43 10
   Sample Output
   The list contains: 23 12 43
