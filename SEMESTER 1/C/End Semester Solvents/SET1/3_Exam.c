// CODE 3: Write a C program to read a user given string of length ‘n’ where ‘n’ is user given. Find the length of the string. Do not use ‘string.h’.

#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the maximum length: ");
    scanf("%i", &n);
    getchar();
    char *string = malloc(n * sizeof(char));

    printf("Enter the string: ");
    gets(string);

    int size = 0;
    while (string[size] != '\0')
        size++;
    printf("The size of the string is: %i", size);
}
