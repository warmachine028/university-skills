// CODE 3: C program to show merge sort

#include <stdio.h>

void merge(int *arr, int low, int mid, int high)
{
    // Length of 2 arrays
    int len1 = mid - low + 1;
    int len2 = high - mid;

    // 2 arrays
    int array1[len1];
    int array2[len2];

    // Storing elements in arrays
    for (int i = 0; i < len1; i++)
        array1[i] = arr[low + i];

    for (int j = 0; j < len2; j++)
        array2[j] = arr[mid + 1 + j];

    // ititializing indices
    int i = 0;
    int j = 0;
    int k = low;

    // Comparing subsequent elements of both subaaarrays
    while (i < len1 && j < len2)
    {
        // 1st array's i'th item < 2nd array's j'th item
        if (array1[i] <= array2[j])
        {
            arr[k] = array1[i];
            i++;
        }
        else
        {
            arr[k] = array2[j];
            j++;
        }
        k++;
    }

    // Inserting rest of the elements in array
    while (i < len1)
    {
        arr[k] = array1[i];
        i++;
        k++;
    }

    while (j < len2)
    {
        arr[k] = array2[j];
        j++;
        k++;
    }
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

void traverse(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
        printf("%i, ", arr[i]);
        
    printf("%i\n", arr[size - 1]);
}

void main()
{
    printf("Merge Sort: O(nlog(n)) \n");
    int len = 7;
    int arr[] = {7, 1, 4, 12, 67, 33, 45};

    printf("Array before sorting: ");
    traverse(arr, len);

    msort(arr, 0, len);

    printf("Array after sorting: ");
    traverse(arr, len);
}
