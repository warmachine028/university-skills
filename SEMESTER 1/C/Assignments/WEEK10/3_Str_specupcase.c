/* CODE 3:
Write a C program to read a user given string of any size of your choice. Consider that the user input contains only alphabets. Convert all the lowercase characters to uppercase. Note that the input may contain uppercase alphabets as well. Do not use ‘string.h’.
Example:
Input: Hello
Output: HELLO

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