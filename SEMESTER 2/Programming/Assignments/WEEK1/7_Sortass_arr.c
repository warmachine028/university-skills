// CODE 7: Write a C program to sort elements of an array in ascending order.
// COMPLEXITY: nlogn

#include <stdio.h>
#include <malloc.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++)
        if (arr[j] < pivot)
            swap(&arr[i], &arr[j]), i++;

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        sort(arr, low, pi - 1);
        sort(arr, pi + 1, high);
    }
}

void main()
{
    int len = 7;
    int *arr = malloc(len * sizeof(len));

    printf("Enter the array of length %i\n", len);

    for (int i = 0; i < len; len++)
        scanf("%i", &arr[i]);

    sort(arr, 0, len - 1);  // sorting the array

    printf("The sorted array is:\n");
    for (int i = 0; i < len; i++)
        printf("%i, ", arr[i]);
}
