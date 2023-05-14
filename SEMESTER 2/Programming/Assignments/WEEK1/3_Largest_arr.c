// CODE 3: Write a program in C to get the largest element of an array using the function

#include <stdio.h>
#include <malloc.h>

int max(int *array, int len)
{
    int max;
    for (int i = 0; i < len; i++)
        max = i == 0 || array[i] > max ? array[i] : max;
    return max;
}

void main()
{
    int len = 5;
    int *arr = malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
        arr[i] = i + 1;

    printf("The largest element in the array is: %i", max(arr, len));
}
