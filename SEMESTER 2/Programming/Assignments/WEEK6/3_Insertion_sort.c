// CODE 3: C program to show insertion sort

#include <stdio.h>

void isort(int *arr, int size)
{
    int key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        int j = i - 1;

        for (; j >= 0 && arr[j] > key; j--)
            arr[j + 1] = arr[j];
        arr[++j] = key;
    }
}

void traverse(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        printf("%i, ", arr[i]);
    printf("%i\n", arr[size - 1]);
}

void main()
{
    printf("Insertion Sort: O(n^2) \n");
    int len = 5;
    int arr[] = {2, 1, 5, 4, 3};

    printf("Array before sorting: ");
    traverse(arr, len);

    isort(arr, len);

    printf("Array after sorting: ");
    traverse(arr, len);
}