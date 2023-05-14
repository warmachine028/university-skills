/* CODE 7:
Write a C program to check if a user given String is palindrome or not .Use the function
declared & defined in Question no.5.

*/
#include <stdio.h>
#include <stdlib.h>
#include "Question no.5.c"

int palindrome(char *s);

void main()
{
    int size = 100;
    char *string = malloc(size * sizeof(char));

    printf("Enter the string: ");
    gets(string);

    if (palindrome(string))
        printf("'%s' is a palindrome.", string);
    else
        printf("'%s' isn't a palindrome.", string);
}

int palindrome(char *s)
{
    int size = str_len(s);

    int i = 0, flag = 0;
    for (i; i < size / 2; i++)
        if (s[i] == s[size - 1 - i])
            flag++;

    return flag == i;
}
