// CODE 8: Write a C program to print the elements of an array in reverse order.

#include <stdio.h>
#include <malloc.h>

void main()
{
    int len = 9;
    int *arr = malloc(len * sizeof(len));

    printf("Enter the array below\n");
    for (int i = 0; i < len; i++)
        scanf("%i", &arr[i]);

    printf("The array in reverse order: \n");
    for (int i = 0; i < len; i++)
        printf("%i, ", arr[len - i - 1]);
}