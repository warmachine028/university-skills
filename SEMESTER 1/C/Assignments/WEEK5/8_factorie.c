//Code 8:Write a C program to find the factorial of a user given number ‘n’. Assume that n <= 12
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the value of 'n': ");
    scanf("%i", &n);

    while (n < 0 || n > 12)
    {
        if (n < 0)
        {

            printf("%i is not a positive natural integer !\n .", n);
            printf("Please enter a positive natural integer: ");
            scanf("%i", &n);
        }
        else if (n > 12)
        {
            printf("Please enter a number lower than 12: ");
            scanf("%i", &n);
        }
    }

    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("%i! = %i", n, fact);
}