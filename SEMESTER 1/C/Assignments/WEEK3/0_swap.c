//Code 0: Write a C program to take 2 integers (a,b) from user and swap their values without using 3rd variable.
#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter the first number (a) and second number (b): ");
    scanf("%i %i", &a, &b);

    printf("Values before swapping:\n");
    printf("%i, %i", a, b);

    a += b;
    b = a - b;
    a -= b;

    printf("\nValues after swapping:\n");
    printf("%i, %i", a, b);
}