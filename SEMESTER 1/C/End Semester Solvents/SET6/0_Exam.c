// CODE 0: Write a C program to read a sentence input and capitalize each word of the sentence. The maximum length of the sentence is user given. Do not use “string.h”.


#include <stdio.h>
#include <malloc.h>

int uncapitalized(int n)
{
    if (n >= 97 && n <= 122)
        return 1;
    else
        return 0;
}

void main()
{
    int n;
    printf("Enter the maximum length: ");
    scanf("%i", &n);
    getchar();

    char *string = malloc(sizeof(char) * n);
    printf("Enter the string: ");
    gets(string);

    if (uncapitalized(string[0]))
        string[0] -= 32;

    for (int i = 1; string[i] != '\0'; i++)
        if (string[i - 1] == ' ' && string[i] != ' ')
            if (uncapitalized(string[i]))
                string[i] -= 32;

    puts(string);
}
