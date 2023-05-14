/* CODE 0:
Write a C program to print the following pattern up to ‘n’ lines.
*
* *
* * *

*/
#include <stdio.h>
void main()
{
    int n;
    printf("Enter how many lines of pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}
