// CODE 2: Write a program to implement a sort technique in which the sorted array is built one entry at a time.

#include <stdio.h>
int size;

void insertion_sort(int *array)
{
    for (int i = 0; i < size; i++)
    {
        int item = array[i];
        int j = i - 1;
        while (j >= 0 && item < array[j])
            array[j + 1] = array[j],
                      j--;
        array[++j] = item;
    }
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

    insertion_sort(arr);
    print(arr);
}