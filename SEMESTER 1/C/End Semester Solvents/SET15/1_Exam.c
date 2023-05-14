// CODE 1: Write a C program to read numbers from user until user enters ‘0’. Now find the sum of positive numbers among all input numbers. Do not use array.

#include <stdio.h>

void main()
{
    int input = 404, sum = 0;
    for (int i; input != 0; i++)
    {
        printf("Enter an integer (else '0' to exit): ");
        scanf("%i", &input);
        sum += input > 0 ? input : 0;
    }
    printf("The sum of all positive number(s) is: %i", sum);
}
