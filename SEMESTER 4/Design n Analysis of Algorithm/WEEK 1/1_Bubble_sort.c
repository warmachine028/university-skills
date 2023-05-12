// CODE 1: You have been given an array A of size N . you need to sort this array non-decreasing oder using bubble sort. However, you do not need to print the sorted array . You just need to print the number of swaps required to sort this array using bubble sort

#include <stdio.h>
#include <malloc.h>

void swap(int *low, int *high)
{
    int temp = *low;
    *low = *high;
    *high = temp;
}

int bubbleSort(int *arr, int n)
{
    int swaps = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            if (arr[i] > arr[j])
                swaps += 1,
                swap(&arr[i], &arr[j]);
    return swaps;
}

void main()
{
    int n; scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    int swaps = bubbleSort(arr, n);
    printf("%i ", swaps);
}

// INPUT: 
// 5
// 1 2 3 4 5

// OUTPUT:
// 0
