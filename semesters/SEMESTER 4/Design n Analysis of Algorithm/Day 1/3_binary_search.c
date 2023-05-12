// CODE 3: You have been given an array A consisting of N integers. All the elements in this array A are unique. You have to answer some queries based on the elements of this array. Each query will consist of a single integer x. You need to print the rank based position of this element in this array considering that the array is 1 indexed. The rank based position of an element in an array is its position in the array when the array has been sorted in ascending order.
// Note: It is guaranteed that all the elements in this array are unique and for each x belonging to a query, value x shall exist in the array

#include <stdio.h>

int binarySearch(int *arr, int key, int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int queries[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
        printf("%i\n", binarySearch(arr, queries[i], n) + 1);
    return 0;
}