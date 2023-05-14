/* CODE 5:
A string is called a palindrome when spelled forward is same if spelled backward. 
Write a C program to read a user given string of any size of your choice. 
Check if the string is Palindrome or not. Do not use ‘string.h’.
Example:
Input: madam
Output: Palindrome

*/
#include <stdio.h>

void main()
{
    int mychoice = 150;
    char string[mychoice], size = 0, flag = 0;

    printf("Enter a string: ");
    gets(string);

    while (string[size] != '\0')
        size++;

    int i = 0;
    for (i; i < size / 2; i++)
        string[i] == string[size - 1 - i] ? 
                     flag++ : flag;

    flag == i ? printf("Palindrome") : 
                printf("Not Palindrome");
}