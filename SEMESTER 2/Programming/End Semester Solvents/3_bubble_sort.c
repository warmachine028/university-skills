// CODE 3: Write a program to implement a sort technique that works by repeatedly stepping through the list to be sorted.

#include <stdio.h>
#define swap(a, b) a ^= b, b ^= a, a ^= b
int size;

int bsort(int *arr)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        for (int j = i; j < size; j++)
            if (arr[i] > arr[j])
                count++,
                    swap(arr[i], arr[j]);

    return count;
}

void print(int *array)
{
    for (int i = 0; i < size - 1; i++)
        printf("%i, ", array[i]);

    printf("%i\n", array[size - 1]);
}

void main()
{
    int arr[] = {7, 1, 4, 12, 67, 33, 45};
    size = sizeof arr / sizeof arr[0];

    int swap = bsort(arr);
    print(arr);
    printf("swaps: %i", swap);
}