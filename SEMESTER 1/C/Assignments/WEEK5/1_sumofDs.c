//Code 1: Write a C program to find the sum of the digits of a user given integer.
#include <stdio.h>

void main()
{
    int number, temp, sum = 0;
    printf("Enter the number: ");
    scanf("%i", &number);

    while (number < 0)
    {
        printf("Please enter a positive integer: ");
        scanf("%i", &number);
    }

    temp = number;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    printf("The sum of digits of %i is %i", number, sum);
}