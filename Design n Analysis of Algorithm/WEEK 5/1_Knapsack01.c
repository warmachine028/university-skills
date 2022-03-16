// CODE 1: You are given n elements. Price and weight of each element is also given. You can only have items of total weight W. Calculate the total price of the products that we can have using 0-1 knapsack algorithm.

#include <stdio.h>
#include <malloc.h>

int max(int a, int b){ return a > b ? a : b; }

int knapSack01(int W, int *weights, int *prices, int n) {
    if (n == 0 || W == 0) 
        return 0;
    if (weights[n - 1] > W)
        return knapSack01(W, weights, prices, n - 1);
    
    int with = prices[n-1] + knapSack01(W - weights[n - 1], weights, prices, n - 1);
    int without = knapSack01(W, weights, prices, n - 1);
    
    return max(with, without);

}

int main() {
    int n, W;
    scanf("%i%i", &n, &W);
    
    int *weights = malloc(sizeof n * n);
    int *prices = malloc(sizeof n * n);
    
    for (int i=0; i<n; i++)
        scanf("%i", &weights[i]);
    for (int i=0; i<n; i++)
        scanf("%i", &prices[i]);
    
    int solution = knapSack01(W, weights, prices, n);
    printf("%i", solution);    
}