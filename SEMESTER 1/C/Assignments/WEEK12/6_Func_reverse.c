/* CODE 6:
Write the function definition of the following function declaration in C programming
language. Use this function to reverse a user given string. Use the function declared &
defined in Question no.5. Here, ‘s’ is formal arguments to accept the address of the
string passed to it.
    
char* strrev(char *s);

*/

#include <stdio.h>
#include <stdlib.h>
#include "Question no.5.c"

char *strrev();

void main()
{
    int size = 100;
    char *string = malloc(size * sizeof(char));

    printf("Enter the string: ");
    gets(string);

    printf("The reverse of '%s' is '%s'.", string, strrev(string));
}

char *strrev(char *s)
{
    int size = str_len(s);

    char *reversestr = malloc(size * sizeof(char));

    for (int i = 0; i < size; i++)
        reversestr[i] = s[size - 1 - i];
    reversestr[size] = '\0';

    s = reversestr;
}
