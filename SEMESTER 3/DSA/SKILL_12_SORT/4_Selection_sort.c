// CODE 4: Given the unsorted list [6, 5, 4, 3, 7, 1, 2], show what the contents of the list would be after each iteration of the loop as it is sorted using the following: a) Selection sort b) Insertion sort(using C)

#include <stdio.h>

void print(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
        printf("%i, ", array[i]);
    printf("%i\n", array[n - 1]);
}

// a) Selection Sort
void selection_sort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int position = i,
            value = array[i];

        for (int j = position + 1; j < n; j++)
            if (value > array[j])
                position = j;

        // Swapping places
        int temp = array[position];
        array[position] = array[i];
        array[i] = temp;
    }
    print(array, n);
}

// b) Insertion Sort
void insertion_sort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int position = i,
            value = array[i];

        while (position > 0 && array[position - 1] > value) // Finding position to insert
            array[position] = array[--position];

        // Insertion
        array[position] = value;
        print(array, n);
    }
    print(array, n);
}

void main()
{
    int array[] = {6, 5, 2, 4, 3, 7, 1, 2},
        n = sizeof(array) / sizeof(int);

    printf("Array: "), print(array, n);
    insertion_sort(array, n);

    int array2[] = {6, 5, 4, 3, 7, 1, 2};
    printf("\nArray: "), print(array2, n);
    selection_sort(array2, n);
}
