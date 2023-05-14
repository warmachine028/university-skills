/* CODE 4:
Write a C program to read a user given string of any size of your choice. Find the reverse of the string. Do not use ‘string.h’.
Example:
Input: Hello
Output: olleH

*/
#include <stdio.h>

void main()
{
    int mychoice = 150, size = 0;
    char string [mychoice], 
      revstring [mychoice];

    printf("Enter a string: ");
    gets(string);

    while (string[size] != '\0')
        size++;

    for (int i = 0; i < size; i++)
        revstring[i] = string[size - 1 - i];
    revstring[size] = '\0';

    puts(revstring);
}