// CODE 1: Write a C program to read a user given string of any size of your choice. Consider that the user input contains only alphabets. Convert all the lowercase characters to uppercase. Note that the input may contain uppercase alphabets as well. Do not use ‘string.h’.


#include <stdio.h>
#include <malloc.h>

int uncapitalized(int a)
{
    return a >= 97 && a <= 122 ? 1 : 0;
}

void main()
{
    int n;
    printf("Enter the number of characters: ");
    scanf("%i", &n);
    getchar();

    char *str = malloc(sizeof(char) * n);
    printf("Enter the string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
        if (uncapitalized(str[i]))
            str[i] -= 32;

    printf("Capitalized string: %s", str);
}
