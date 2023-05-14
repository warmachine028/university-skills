//Code 6:Write a C program to find the sum of ‘n’ user given integers. Where ‘n’ is the total number of  integers to be given as input by the user.
#include <stdio.h>

void main()
{
    int n, i;
    printf("Enter the value of 'n': ");
    scanf("%i", &n);

    while (n < 0)
    {
        printf("Please enter a positive integer: ");
        scanf("%i", &n);
    }
    
    int temp = 1, sum = 0;
    while (temp <= n)
    {
        printf("Enter the number %i: ", temp);
        scanf("%i", &i);
        sum += i;
        temp++;
    }
    printf("The sum of %d user given numbers is: %d. ", n, sum);
}