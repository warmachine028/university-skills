/* CODE 2: 
WAP to implement binary search.
*/
#include <stdio.h>

int binsearch(int item, int *array, int len)
{
    int low = 0;
    int high = len - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] == item)
            return mid;

        if (array[mid] > item)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

void main()
{
    printf("Binary Search: O(log n) \n");
    int len = 5;
    int arr[] = {1, 2, 3, 4, 5};

    int item = 5; // 8
    int res = binsearch(item, arr, len);

    if (res < 0)
        printf("%i not found.", item);
    else
        printf("%i found at position %i.", item, res);
}
