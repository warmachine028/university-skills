//Code 4: Write a C program to find the sum of the following series up to ‘n’ terms where ‘n’ is user given:  1^2 + 2^2 + 3^2 + ⋯ + n^2
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the value of 'n': ");
    scanf("%i", &n);

    while (n <= 0)
    {
        printf("n must be a natural number for the sequence to exist.\n");
        printf("Please re-enter the value of n: ");
        scanf("%i", &n);
    }
    printf("The sum of the series : 1^2 + 2^2 + 3^2 + ... + n^2 is %i .", (n * n + n) * (2 * n + 1) / 6);
}