/* CODE 5:
Write the function definition of the following function declaration in C programming
language. Use this function to calculate the length of a user given String.Here, ‘s’ is
formal arguments to accept the address of the string passed to it.
    
int strlen(char *s);

*/

#include <stdio.h>
#include <stdlib.h>

int strlen(char *s);

void main()
{
    int size = 100;
    char *string = malloc(size * sizeof(char));

    printf("Enter the string: ");
    gets(string);

    printf("The size of '%s' is %i.", string, strlen(string));
}

int strlen(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    
    return i;
}
// _______________________________
// NOTE: I changed the <function name> from strlen() to str_len() intentionally 
// as it was throwing this warning in the console: 

// conflicting types for built-in function 'strlen' [-Wbuiltin-declaration-mismatch]
//    int strlen();
//        ^~~~~~