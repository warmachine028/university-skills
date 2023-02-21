// CODE 2: You are given n elements. Price and weight of each element is also given. You can only have items of total weight W. Calculate the total price of the products that we can have using 0 - 1 knapsack algorithm.

#include <stdio.h>
#include <malloc.h>
#define max(a, b) a > b ? a : b

int knapSack(int W, int wt[], int val[], int n)
{
    int table[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
        for (int w = 0; w <= W; w++)
            if (!(i && w))
                table[i][w] = 0;
            else if (wt[i - 1] <= w)
                table[i][w] = max(val[i - 1] + table[i - 1][w - wt[i - 1]], table[i - 1][w]);
            else
                table[i][w] = table[i - 1][w];

    return table[n][W];
}

int main()
{
    int n, W;
    scanf("%i %i", &n, &W);

    int *wt = malloc(sizeof(int) * n);
    int *val = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
        scanf("%i", &wt[i]);

    for (int i = 0; i < n; i++)
        scanf("%i", &val[i]);

    printf("%i", knapSack(W, wt, val, n));
}

// INPUT: 
// 3
// 50
// 10 20 30
// 60 100 120

// OUTPUT:
// 220
