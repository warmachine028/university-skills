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
