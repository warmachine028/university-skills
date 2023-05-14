// CODE 1: Write a C program to read a user given string of length ‘n’ where ‘n’ is user given. Find the total number of vowels in the string.



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

    int vowel = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        char letter = string[i];
        if (letter == 'A' || letter == 'a'
         || letter == 'E' || letter == 'e'
         || letter == 'I' || letter == 'i'
         || letter == 'O' || letter == 'o'
         || letter == 'U' || letter == 'u')
            vowel++;
    }
    printf("Total number of vowels in the above string is: %i ", vowel);
}
