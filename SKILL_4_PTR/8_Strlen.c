/* CODE 8:
Write a program in C to calculate the length of the string using pointer.(Without library function)

Sample Input 0
datastructure

Sample Output 0
Length of String is 13
*/

#include <stdio.h>
#include <malloc.h>


int len(char *str)
{
    int length = 0;
    for (length; str[length] != '\0'; length++);
    return length;
}


void main()
{
    int n;
    printf("Enter max possible length of string: ");
    scanf("%i", &n);
    getchar();

    char *string = malloc(n);
    printf("Enter the string: ");
    scanf("%[^\n]s", string);
    
    printf("Length of String is %i", len(string));
}
