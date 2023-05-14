/* Code 10a:
Write a C program to calculate the GCD of 2 numbers .
*/
#include <stdio.h>

void main()
{
    int a, b, r;

    printf("Enter how 2 numbers: ");
    scanf("%d %d", &a, &b);

    a = abs(a);
    b = abs(b);

    if (a == 0 && b == 0)
        printf("The GCD can not be calculated");

    else
    {
        while (a % b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        printf("GCD = %d", b);
    }
}