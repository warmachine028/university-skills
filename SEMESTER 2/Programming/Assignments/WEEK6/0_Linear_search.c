// CODE 0: C program to perform a linear search.

#include <stdio.h>

int linsearch(int item, int *array, int size)
{
    int found = 0, pos = 0;

    while (pos < size && !found)
        array[pos] == item ? found++ : pos++;

    return found ? pos : -1;
}

void main()
{
    printf("Linear Search: O(n) \n");
    int len = 5;
    int arr[] = {1, 2, 3, 4, 5};

    int item = 5; // 8
    int res = linsearch(item, arr, len);

    if (res < 0)
        printf("%i not found.", item);
    else
        printf("%i found at position %i.", item, res);
}
