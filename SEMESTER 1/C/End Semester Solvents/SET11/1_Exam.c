// CODE 1: Write a C program to take two one-dimensional integer array of size ‘n’ as input from user where ‘n’ is user given. Read user given numbers to store in the arrays. Declare another array of same size (n) and store the element wise addition of previously taken array into the new one.


#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the no. of elements: ");
    scanf("%i", &n);

    int *arr1 = malloc(sizeof(int) * n);
    int *arr2 = malloc(sizeof(int) * n);

    int *summation = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %i element (1st array): ", i);
        scanf("%i", &arr1[i]);
        printf("Enter %i element (2nd array): ", i);
        scanf("%i", &arr2[i]);
        summation[i] = arr1[i] + arr2[i];
    }
    printf("The array with element wise addition is: [");

    for (int i = 0; i < n; i++)
        printf("%i, ", summation[i]);
    printf("]");
}