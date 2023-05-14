/* CODE 0: Write a C program to read a user given string of any size of your choice. Find the length of the string. Do not use ‘string.h’. 

*/
#include <stdio.h>

void main()
{
    int mychoice = 150;
    char string[mychoice];

    printf("Enter your string (<%i): ", mychoice - 1);
    gets(string);

    int i=0;
    while (string[i] != '\0')
        i++;

    printf("The length of the string is %i.", i);
}
