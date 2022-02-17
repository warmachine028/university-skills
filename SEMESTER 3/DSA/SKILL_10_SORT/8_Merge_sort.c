/* CODE 8: 
C program to show merge sort
*/

#include <stdio.h>

void merge(int *arr, int low, int mid, int high)
{
    // Length of 2 arrays
    int len1 = mid - low + 1;
    int len2 = high - mid;

    // 2 arrays
    int array1[len1], array2[len2];

    // Storing elements in arrays
    for (int i = 0; i < len1; i++)
        array1[i] = arr[low + i];

    for (int i = 0; i < len2; i++)
        array2[i] = arr[mid + 1 + i];

    // ititializing indices
    int i = 0, j = 0, k = low;

    // Comparing subsequent elements of both subaaarrays
    while (i < len1 && j < len2)
    {
        // 1st array's i'th item < 2nd array's j'th item
        if (array1[i] <= array2[j])
            arr[k] = array1[i++];
        else
            arr[k] = array2[j++];
        k++;
    }

    // Inserting rest of the elements in array
    while (i < len1)
        arr[k++] = array1[i++];
    while (j < len2)
        arr[k++] = array2[j++];
}

void msort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        msort(arr, low, mid);
        msort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void main()
{
    int len = 5;
    int arr[] = {1, 4, 3, 2, 5};

    msort(arr, 0, len);

    for (int i = 0; i < len; i++)
        printf("%i ", arr[i]);
}
