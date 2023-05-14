// CODE 2: Write a C program to take a string input from user and count the number of digits. Assume that the maximum length of string is 10.


#include <stdio.h>

void main()
{
    int digits = 0;

    int maxlength = 10;
    char string[maxlength];
    printf("Enter a string(<10):");
    gets(string);

    for (int i = 0; string[i] != '\0'; i++)
        if (string[i] >= 48 && string[i] <= 57)
            digits++;
    printf("The string '%s' contain %i digit(s).", string, digits);
}
