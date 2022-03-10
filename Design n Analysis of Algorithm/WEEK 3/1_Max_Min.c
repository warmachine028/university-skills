// CODE 1: you are given an array of size N. You need to select K elements from the array such that the difference between the max number among selected and the min number among selected array elements should be minimum. Print the minimum difference.

/*
5
3
1
2
3
4
5

2
*/
#include <stdio.h>

int maxmin(int *arr, int i, int j, int n, int k)
{
    int result = arr[i];
    if (n < k || n < 1)
        return result;
    for (int idx = i; idx < j; idx++)
        
    return result;
}

int compute_max_min(int *nums, int n, int k)
{
    return maxmin(nums, 0, n, n, k);
}

void main()
{
    int n = 5, k = 3;
    int nums[] = {1, 2, 3, 4, 5};
    int result = compute_max_min(nums, n, k);
    printf("%i", result);
}