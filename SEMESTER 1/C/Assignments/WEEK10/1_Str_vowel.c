/* CODE 1:Write a C program to read a user given string of any size of your choice.Find the total number of vowels in the string.

*/

#include <stdio.h>

void main()
{
    int mychoice = 150, count=0;
    char string[mychoice];

    char vowels [] = "AaEeIiOoUu";
    printf("Enter a string: ");
    gets(string);

    for (int i=0; string[i] != '\0'; i++)
    {
        for (int j = 0; vowels[j] != '\0'; j++)
            if (string[i] == vowels[j])
                count++;
    }
    printf("The string contains %i vowels.", count);
}