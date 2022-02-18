// CODE 2: You have been given an array of size N consisting of integers. In addition you have been given an element M you need to find and print the index of the last occurrence of this element M in the array if it exists in it, otherwise print -1. Consider this array to be 1 indexed.

#include <stdio.h>

int linearSearch(int *arr, int key, int n)
{
    int index = -1;
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            index = i;
    return index;
}

int main()
{
    int key = 1;
    int arr[] = {1, 2, 3, 4, 1};
    printf("%i", linearSearch(arr, key, 5) + 1);
    return 0;
}