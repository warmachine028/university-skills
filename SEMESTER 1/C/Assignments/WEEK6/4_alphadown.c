/* CODE 4:
Write a C program to print the following pattern up to ‘n’ lines.

A
B C
D E F
*/
#include <stdio.h>

void main()
{
    int n, temp = 65;
    printf("Enter how many lines of pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++, temp++)
        {
            if (temp > 90)
                temp = 65;
            printf("%c ", temp);
        }
        printf("\n");
    }
}