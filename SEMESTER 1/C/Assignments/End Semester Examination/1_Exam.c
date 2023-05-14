/* CODE 1:
Write a C program to concatenate two user given strings. Consider that the maximum length input strings is ‘n’ where ‘n’ is user given. Do not use “string.h”

*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter the maximum length of strings: ");
    scanf("%i", &n);
    getchar();

    char *str1 = malloc(sizeof(char) * n);
    char *str2 = malloc(sizeof(char) * n);

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // To calculate length of 1st string
    int length = 0;
    for (length; str1[length] != '\0'; length++)
        ;
    
    // To add new charactrers to the 1st string
    for (int i = 0; str2[i] != '\0'; i++, length++)
        str1[length] = str2[i];

    // Adding terminating character at the end
    str1[length] = '\0';

    printf("The new string after concatenating is: \n%s", str1);
}
