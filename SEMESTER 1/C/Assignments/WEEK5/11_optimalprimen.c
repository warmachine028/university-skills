//Code 11:Write a C program to check if a user given number is Prime or not.
#include <stdio.h>
#include <math.h>
void main()
{
    int n, temp = 1;
    printf("Enter a number to check primes: ");
    scanf("%i", &n);

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (!(n % i))
        {
            temp = 0;
            break;
        }
    }

    if (n <= 1)
        temp = 0;
    else if (n == 2)
        temp = 1;

    temp == 1 ? printf("%i is a prime Number", n) : printf("%i is a not a prime number", n);
}