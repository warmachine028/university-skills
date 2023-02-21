// CODE 1: Quick sort is based on the divide-and-conquer approach based on the idea of choosing one element as a pivot element and partitioning the array around it such that: Left side of pivot contains all the elements that are less than the pivot element Right side contains all elements greater than the pivot
// It reduces the space complexity and removes the use of the auxiliary array that is used in merge sort. Selecting a random pivot in an array results in an improved time complexity in most of the cases.

#include <stdio.h>
#include <malloc.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int divide(int *arr, int low, int high)
{
    int pivot = low;
    for (int i = low + 1; i < high + 1; i++)
    {
        if (arr[i] < arr[low])
            swap(&arr[i], &arr[++pivot]);
        swap(&arr[low], &arr[pivot]);
    }
    return pivot;
}

void sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivot = divide(arr, low, high);
        sort(arr, low, pivot);
        sort(arr, pivot + 1, high);
    }
}

void quickSort(int *arr, int n)
{
    sort(arr, 0, n - 1);
}

void print(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        printf("%i ", arr[i]);
    printf("%i ", arr[n - 1]);
}

void main()
{
    int n; scanf("%i", &n);
    int *arr = malloc(sizeof n * n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    quickSort(arr, n);
    print(arr, n);
}

// INPUT: 
// 5
// 4 3 1 5 2

// OUTPUT:
// 1 2 3 4 5
