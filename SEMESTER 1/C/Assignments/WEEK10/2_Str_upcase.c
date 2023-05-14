/* CODE 2:
Write a C program to read a user given string of any size of your choice. Consider that the user input contains only lowercase alphabets. Convert the entire string to uppercase. Do not use ‘string.h’.

*/
#include <stdio.h>

void main()
{
    int flag = 0;
    int mychoice = 150;
    char string[mychoice];

    printf("Enter a string: ");
    gets(string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 97 && string[i] <= 122)
            string[i] -= 32;
    }

    puts(string);
}