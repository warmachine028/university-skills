// CODE 3: C program to show quick sort

#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[high]; // pivot

    int i = low - 1;
    for (int j = low; j < high; j++)
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }

    swap(&arr[i + 1], &arr[high]);
    return ++i;
}

void qsort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);

        qsort(arr, low, pivot - 1);
        qsort(arr, pivot + 1, high);
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
    int arr[] = {2, 1, 3, 4, 3};

    printf("Array before sorting: ");
    traverse(arr, len);

    qsort(arr, 0, len);

    printf("Array after sorting: ");
    traverse(arr, len);
}