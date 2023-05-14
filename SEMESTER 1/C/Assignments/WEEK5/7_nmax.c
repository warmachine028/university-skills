//Code 7:Write a C program to find the maximum of ‘n’ user given integers. Where ‘n’ is the total number  of integers to be given as input by the user.
#include <stdio.h>

void main()
{
    int n, max;
    printf("Enter the value of 'n': ");
    scanf("%i", &n);

    while (n <= 0)
    {
        printf("%i is not a positive natural integer ! ", n);
        printf("Please enter a positive natural integer: ");
        scanf("%i", &n);
    }

    printf("Enter number 1:");
    scanf("%i", &max);

    for (int temp, i = 2; i <= n; i++)
    {
        printf("Enter number %i:", i);
        scanf("%i", &temp);

        if (temp > max)
            max = temp;
    }
    printf("The maximum of %i given integer(s) is: %i.", n, max);
}