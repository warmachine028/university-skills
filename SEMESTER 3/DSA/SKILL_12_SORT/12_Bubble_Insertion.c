// CODE 12: Given the unsorted list [61, 25,14, 3,17,21, 29], show what the contents of the list would be after each iteration of the loop as it is sorted using the following:
// a) Bubble sort
// b) Insertion sort (Use C)

#include <stdio.h>

// Function to Print the array
void print(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
        printf("%i, ", array[i]);
    printf("%i\n", array[n - 1]);
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// a) Bubble Sort
void bubble_sort(int array[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            if (array[i] > array[j])
                swap(&array[i], &array[j]);
            print(array, n);
        }
}

// b) Insertion Sort
void insertion_sort(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int position = i,
            value = array[i];

        while (position > 0 && array[position - 1] > value)
            array[position] = array[--position];
        
        array[position] = value; // Insertion Operation
        print(array, n);
    }
}

void main()
{
    int array[] = {61, 25, 14, 3, 17, 21, 29},
        n = sizeof(array) / sizeof(int);
    printf("Array: "), print(array, n);

    // Bubble Sort
    bubble_sort(array, n);
    printf("Final Array (After Bubble Sort): "), print(array, n);

    int array2[] = {61, 25, 14, 3, 17, 21, 29};
    printf("\nArray: "), print(array2, n);

    // Insertion Sort
    insertion_sort(array2, n);
    printf("Final Array (After Insertion Sort): "), print(array2, n);
}