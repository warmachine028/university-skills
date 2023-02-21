// CODE 1: You are given an array of size N. You need to select K elements from the array such that the difference between the max number among selected and the min number among selected array elements should be minimum. Print the minimum difference.

#include <stdio.h>
#include <stdlib.h>
#define min(a, b) a < b ? a : b

int cmpfunc(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int max_min(int *nums, int n, int k)
{
    // sorting the array
    qsort(nums, n, sizeof n, cmpfunc);

    int result = __INT_MAX__;
    for (int i = 0; i < n - k + 1; i++)
        result = min(result, nums[i + k - 1] - nums[i]);
    
    return result;
}

void main()
{
    int n, k;
    scanf("%i %i", &n, &k);

    int *arr = malloc(sizeof n * n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    int result = max_min(arr, n, k);
    printf("%i", result);
}

// INPUT:
// 5
// 3
// 1
// 2
// 3
// 4
// 5

// OUTPUT:
// 2
