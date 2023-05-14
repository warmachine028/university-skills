// CODE 1: Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now create another array of same size and store the elements in the reverse order.


#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%i", &n);

    int *arr = malloc(sizeof(char) * n);
    int *arr1 = malloc(sizeof(char) * n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element no. %i: ", i + 1);
        scanf("%i", &arr[i]);
        arr1[n - i - 1] = arr[i];
    }

    printf("The reversed array is: \n");
    for (int i = 0; i < n; i++)
        printf("%i, ", arr1[i]);
}
