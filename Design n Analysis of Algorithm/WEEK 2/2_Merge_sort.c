// CODE 2: Merge sort is a divide-and-conquer algorithm based on the idea of breaking down a list into several sub-lists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

#include <malloc.h>
#include <stdio.h>

void merge(int *arr, int low, int mid, int high)
{
    int len1 = mid - low + 1;
    int len2 = high - mid;

    // building 2 seperate arrays
    int array1[len1], array2[len2];

    for (int i = 0; i < len1; i++)
        array1[i] = arr[low + i];

    for (int i = 0; i < len2; i++)
        array2[i] = arr[mid + i + 1];

    // Copying the elements into the new array
    int i = 0, j = 0, k = low;
    while (i < len1 && j < len2)
    {
        if (array1[i] <= array2[j])
            arr[k] = array1[i++];
        else
            arr[k] = array2[j++];
        k++;
    }

    while (i < len1)
        arr[k++] = array1[i++];

    while (j < len2)
        arr[k++] = array2[j++];
}

void sort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        sort(arr, low, mid);        // first sub array
        sort(arr, mid + 1, high);   // second sub array
        merge(arr, low, mid, high); // merging the 2 arrays by partition
    }
}

void mergeSort(int *arr, int n)
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
    // int n = 5;
    // int arr[] = {9, 8, -1, 3, 2};
    int n; scanf("%i", &n);
    int *arr = malloc(sizeof n * n);

    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    mergeSort(arr, n);
    print(arr, n);
}

// INPUT:
// 5
// 1 4 3 2 5

// OUTPUT:
// 1 2 3 4 5
