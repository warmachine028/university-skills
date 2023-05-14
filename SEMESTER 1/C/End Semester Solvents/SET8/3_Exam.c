// CODE 3: Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now check and replace all the elements of the array by the absolute value of individual numbers.


#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the size of 1D array: ");
    scanf("%i", &n);

    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %i: ", i);
        scanf("%i", &arr[i]);
        arr[i] = arr[i] < 0 ? -arr[i] : arr[i];
    }
    
    printf("The array with absolute values: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
}
