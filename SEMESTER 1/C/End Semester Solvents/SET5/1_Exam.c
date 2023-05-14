/* CODE 1: Write the function definition of the following function declaration in C programming language. Use this function to calculate the length of a user given String. Here, ‘s’ is formal arguments to accept the address of the string passed to it.
                        int strlen(char* s);

*/

#include <stdio.h>
#include <malloc.h>

int strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

void main()
{
    int n;
    printf("Enter the maxlength of string: ");
    scanf("%i", &n);
    getchar();

    char *string = malloc(n * sizeof(char));
    printf("Enter the string: ");
    gets(string);

    printf("Length of string: %i", strlen(string));
}
