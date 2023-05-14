//Code 10:Write a C program to find the GCD of two user given integers.
#include <stdio.h>

void main()
{
    int a, b, smaller, GCD;
    printf("Enter 2 numbers to compute GCD: ");
    scanf("%i %i", &a, &b);

    smaller = b > a ? b : a;

    for (int i = 1; i <= smaller; i++)
    {
        if (!(a % i) && !(b % i))
            GCD = i;
    }

    printf("GCD of %i and %i is: %i", a, b, GCD);
}