//Code 2:Write a C program to find the multiples of 3,5,7 within the range [a, b] where a, b is user given  integer.
#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter the values of [a, b]: ");
    scanf("%i %i", &a, &b);

    while (b < a)
    {
        printf("Upperlimit can'nt be smaller than lower limit\n");
        printf("Please Reenter the value of 'b': ");
        scanf("%i", &b);
    }

    for (int i = a; i <= b; i++)
    {
        if (!(i % 3))
            printf("%i is a multiple of 3\n", i);
        if (!(i % 5))
            printf("%i is a multiple of 5\n", i);
        if (!(i % 7))
            printf("%i is a multiple of 7\n", i);
    }
}
