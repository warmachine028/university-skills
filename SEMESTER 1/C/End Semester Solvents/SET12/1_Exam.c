// CODE 1: Write a C program to concatenate two user given strings. Consider that the maximum length input strings is ‘n’ where ‘n’ is user given. Do not use “string.h”


#include <stdio.h>
#include <malloc.h>

int len(char *s)
{
    int length = 0;
    while (s[length] != '\0')
        length++;
    return length;
}

void main()
{
    int n;
    printf("Enter the maximum length of strings: ");
    scanf("%i", &n);
    getchar();

    char *str1 = malloc(sizeof(char) * n);
    printf("Enter the first string: ");
    gets(str1);

    char *str2 = malloc(sizeof(char) * n);
    printf("Enter the second string: ");
    gets(str2);

    int length = len(str1);
    int length2 = len(str2);
    str1 = realloc(str1, sizeof(char) * (length + length2));
    for (int i = 0; i < length2; i++)
        str1[length + i] = str2[i];

    str1[length + length2] = '\0';
    printf("The concatenated string is:\n%s", str1);
}
