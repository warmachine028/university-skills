// CODE 3: C program to show selection sort

#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void ssort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[min])
                min = j;

        swap(&arr[min], &arr[i]);
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
    printf("Insertion Sort: O(1) \n");
    int len = 5;
    int arr[] = {2, 1, 3, 4, 3};

    printf("Array before sorting: ");
    traverse(arr, len);

    ssort(arr, len);

    printf("Array after sorting: ");
    traverse(arr, len);
}