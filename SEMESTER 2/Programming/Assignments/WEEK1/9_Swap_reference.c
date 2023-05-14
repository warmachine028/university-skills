// CODE 9: Write a C program to swap elements using call by reference

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int a = 24, b = 28;
    printf("The values before swapping %i and %i.", a, b);
    swap(&a, &b);
    printf("The values after  swapping %i and %i.", a, b);
}