// CODE 2: Write a C program to read a user given string of any size of your choice. Find the reverse of the string. Do not use ‘string.h’.

#include <stdio.h>
#include <malloc.h>

int len(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char *reverse(char *s)
{
    int length = len(s);
    for (int i = 0; i < length / 2; i++)
    {
        s[i] += s[length - 1 - i];
        s[length - 1 - i] = s[i] - s[length - 1 - i];
        s[i] += -s[length - 1 - i];
    }
}

void main()
{
    int n;
    printf("Enter the maximum length of string: ");
    scanf("%i", &n);
    getchar();

    char *string = malloc(sizeof(char) * n);
    printf("Enter the string: ");
    gets(string);
    
    reverse(string);
    
    printf("Reversed string: %s", string);
}
