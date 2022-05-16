// CODE 3: Heaps can be used in sorting an array. In max-heaps, maximum element will always be at the root. Heap Sort uses this property of heap to sort the array.

#include <malloc.h>
#include <stdio.h>

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void heapify(int index, int *arr, int n)
{
    int root = index;
    int left = root * 2 + 1;
    int right = root * 2 + 2;

    if (left < n && arr[root] < arr[left])
        root = left;
    if (right < n && arr[root] < arr[right])
        root = right;
    if (root == index)
        return;
    
    // Swaps maximum with root and perform heapify
    swap(&arr[root], &arr[index]);
    heapify(root, arr, n);
}

void heapPop(int *arr, int n)
{
    for (int i = n - 1; i; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(0, arr, i);
    }
}

void heapSort(int *arr, int n)
{
    for (int idx = n / 2; idx >= 0; idx--)
        heapify(idx, arr, n);
    heapPop(arr, n);
}

void print(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        printf("%i ", arr[i]);
    printf("%i ", arr[n - 1]);
}

void main()
{
    // int n = 10;
    // int arr[] = {5, 0, 14, 2, 3, 17, 15, 10, 1, 12};
    int n; scanf("%i", &n);
    int *arr = malloc(sizeof n * n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    heapSort(arr, n);
    print(arr, n);
}

// INPUT: 
// 5
// 5
// 4
// 3
// 2
// 1

// OUTPUT:
// 1 2 3 4 5
