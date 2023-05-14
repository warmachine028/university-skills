/* CODE 3:
Write a C program to print the following pattern up to ‘n’ lines.

1
2 3
4 5 6
*/
#include <stdio.h>

void main()
{
    int n, temp = 1;
    printf("Enter how many lines of pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++, temp++)
            printf("%i ", temp);
        printf("\n");
    }
}