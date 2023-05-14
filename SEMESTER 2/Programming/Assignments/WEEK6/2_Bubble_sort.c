// CODE 2: C program to show bubble sort

#include <stdio.h>

void swap(int *a, int *b)
{
    *b += *a;
    *a = *b - *a;
    *b -= *a;
}

void bsort(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void traverse(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        printf("%i, ", arr[i]);
    printf("%i\n", arr[size - 1]);
}

void main()
{
    printf("Bubble Sort: O(n^2) \n");
    int len = 5;
    int arr[] = {2, 1, 5, 4, 3};

    printf("Array before sorting: ");
    traverse(arr, len);

    bsort(arr, len);

    printf("Array after sorting: ");
    traverse(arr, len);
}