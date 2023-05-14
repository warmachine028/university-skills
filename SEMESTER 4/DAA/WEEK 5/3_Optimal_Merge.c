// CODE 3: Optimal merge pattern is a pattern that relates to the merging of two or more sorted files in a single sorted file. This type of merging can be done by the two-way merging method.

#include <stdio.h>

// constants
const int N = 100;
#define True 1
#define min(x, y) x < y ? x : y

int minMergeCost(int i, int j, int arr[])
{
    int dp_matrix[N][N];
    _Bool visited[N][N];

    if (i == j)
        return 0;
    if (visited[i][j])
        return dp_matrix[i][j];

    visited[i][j] = True;

    int total = 0;
    for (int k = i; k <= j; k++)
        total += arr[k];

    int cost = __INT_MAX__;
    for (int k = i + 1; k <= j; k++)
        cost = min(cost, total + minMergeCost(i, k - 1, arr) + minMergeCost(k, j, arr));

    return cost;
}

void main()
{
    int arr[] = {5, 3, 2, 7, 9, 13};
    int n = sizeof arr / sizeof n;

    int solution = minMergeCost(0, n - 1, arr);
    printf("%i", solution);
}

// INPUT:
// 5, 3, 2, 7, 9, 13


// OUTPUT:
// 39