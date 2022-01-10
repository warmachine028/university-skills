// CODE 2: There is  a sorted set of numbers given 33,44,55,57,62,64,67,71,73,74,76,78,79,89,99. Write down a binary search program in C - programming language to find out the position of “78”.

#include <stdio.h>
#include "1_Binary_Search.c"

void main()
{
    int arr[] = {33, 44, 55, 57, 62, 64, 67, 71, 73, 74, 76, 78, 79, 89, 99},
        n = sizeof(arr) / sizeof(int),
        key = 78;

    int result = binarySearch(arr, key, n);
    
    if (result >= 0)
        printf("Item %i found at %i position of array.", key, result);
    else
        printf("Item not found in array");

}