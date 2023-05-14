// CODE 2: Write a C program to find the sum of ‘n’ user given integers. Where ‘n’ is the total number of integers to be given as input by the user. Do not use Array.


#include <stdio.h>

void main()
{
    int n;
    printf("Enter the total no. of integers: ");
    scanf("%i", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int flag;
        printf("Enter integer %i: ", i);
        scanf("%i", &flag);
        sum += flag;
    }
    printf("The sum of %i user given inputs: %i", n, sum);
}
