// CODE 2: (8) C program to show insertion sort for an unsorted list [60, 50, 90, 30, 70, 10]

#include <stdio.h>
int size;

void isort(int *arr)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        for (; j >= 0 && arr[j] > key; j--)
            arr[j + 1] = arr[j];
        arr[++j] = key;
    }
}

void print(int *arr)
{
    printf("{");
    for (int i = 0; i < size - 1; i++)
        printf("%i, ", arr[i]);
    printf("%i}\n", arr[size - 1]);
}

void main()
{
    int arr[] = {60, 50, 90, 30, 70, 10};
    size = sizeof arr / sizeof arr[0];

    printf("Array before sorting: ");
    print(arr);

    isort(arr);

    printf("Array after sorting: ");
    print(arr);
}

// OUTPUT
// Array before sorting: {60, 50, 90, 30, 70, 10}
// Array after sorting: {10, 30, 50, 60, 70, 90} 