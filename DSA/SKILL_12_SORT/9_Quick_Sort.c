// CODE 9: Write a C program to implement quick sort.

#include <malloc.h>
#include <stdio.h>

void swap(int *int1, int *int2)
{
    int temp = *int1;
    *int1 = *int2;
    *int2 = temp;
}

int divide(int array[], int low, int high)
{
    int pivot = low;
    for (int i = low + 1; i< high + 1; i++)
        if (array[i] < array[low])
            swap(&array[i], &array[++pivot]);
    swap(&array[low], &array[pivot]);
    return pivot;
}

void sort(int array[], int low, int high)
{
    if (low < high)
    {
        // Finding partition
        int division = divide(array, low, high);
        // sorting array till partition
        sort(array, low, division - 1);
        // sorting array from partition
        sort(array, division + 1, high);
    }
}

void quickSort(int array[], int n)
{
    sort(array, 0, n - 1);
}

void print(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
        printf("%i, ", array[i]);
    printf("%i\n", array[n - 1]);
}

void main()
{
    int array[] = {1, 99, 2, -9, 9, 7, 8, 7},
        n = sizeof(array) / sizeof(int);
    print(array, n);

    quickSort(array, n);
    print(array, n);
}
