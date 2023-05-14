// CODE 3: A string is called a palindrome when spelled forward is same if spelled backward. Write a C program to read a user given string of any size of your choice. Check if the string is Palindrome or not. Do not use ‘string.h’.


#include <stdio.h>

int len(char *s)
{
    int length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

void main()
{
    int n = 100;
    char str[n];
    printf("Enter a string(<%i): ", n);
    gets(str);

    int length = len(str);
    int palindrome = 1;
    for (int i = 0; i < length / 2; i++)
        if (str[i] != str[length - i - 1])
        {
            palindrome--;
            break;
        }
    if (palindrome)
        printf("'%s' is a palindrome.", str);
    else
        printf("'%s' is not a palindrome.", str);
}
