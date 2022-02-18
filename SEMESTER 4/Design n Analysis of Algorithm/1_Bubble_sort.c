#include <stdio.h>

void swap(int *low, int *high)
{
    int *temp = &low;
    *low = *high;
    *high = temp;
}

int sort(int *arr, int n)
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
    int n;
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    int swaps = sort(arr, n);
    printf("%i ", swaps);
}