/* CODE 3: Write a C program to print the following pattern up to ‘n’ lines.
A
A B
A B C
*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many lines: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        int ascii = 65;
        for (int j = 1; j <= i; j++, ascii++)
        {
            ascii = ascii < 90 ? 65 : ascii;
            printf("%c ", ascii);
        }
        printf("\n");
    }
}