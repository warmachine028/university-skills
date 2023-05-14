// CODE 2: You have been given an array of size N consisting of integers. In addition you have been given an element M you need to find and print the index of the last occurrence of this element M in the array if it exists in it, otherwise print -1. Consider this array to be 1 indexed.

#include <stdio.h>
#include <malloc.h>

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
    int n, key = 1;
    scanf("%i %i", &n, &key);

    int *arr = malloc(sizeof n * n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);
    printf("%i", linearSearch(arr, key, 5) + 1);
}

// INPUT:
// 5 1
// 1 2 3 4 1

//OUTPUT:
// 5