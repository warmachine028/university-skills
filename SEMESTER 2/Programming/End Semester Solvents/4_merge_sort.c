// CODE 4: Write a program to implement a sort technique that works by repeatedly stepping through the list to be sorted.

#include <stdio.h>
int size;

void merge(int *array, int low, int mid, int high)
{
    int l_length = mid - low + 1;
    int r_length = high - mid;

    int left[l_length];
    int right[r_length];

    // Storing elements in arrays
    for (int i = 0; i < l_length; i++)
        left[i] = array[low + i];

    for (int i = 0; i < r_length; i++)
        right[i] = array[mid + i + 1];

    int lindex = 0;
    int rindex = 0;
    int aindex = low; // 0

    while (lindex < l_length && rindex < r_length)
    {
        if (left[lindex] <= right[rindex])
            array[aindex] = left[lindex],
            lindex++;

        else
            array[aindex] = right[rindex],
            rindex++;
        aindex++;
    }
    
    // Inserting rest of the elements in array
    for (int i = lindex; i < l_length; i++)
        array[aindex] = left[i],
        aindex++;

    for (int i = rindex; i < r_length; i++)
        array[aindex] = right[i],
        aindex++;
}

void merge_sort(int *array, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        merge_sort(array, low, mid);
        merge_sort(array, mid + 1, high);

        merge(array, low, mid, high);
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
    int array[] = {7, 1, 4, 12, 67, 33, 45};
    size = sizeof array / sizeof array[0];

    merge_sort(array, 0, size);
    print(array);
}