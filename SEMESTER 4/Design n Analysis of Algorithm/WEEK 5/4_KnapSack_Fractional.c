// CODE 4: In Fractional Knapsack, we can break items for maximizing the total value of knapsack. This problem in which we can break an item is also called the fractional knapsack problem. You are given n elements. Price and weight of each element is also given. Calculate the total price of the products that we can have using fractional knapsack algorithm.

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int weight;
    int price;
} Item;

void swap(Item *a, Item *b)
{
    Item t = *a;
    *b = *a;
    *a = t;
}

void sort(Item *items, int n)
{

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
        {
            double ratio1 = items[i].price / items[i].weight;
            double ratio2 = items[j].price / items[j].weight;

            if (ratio2 > ratio1)
                swap(&items[i], &items[j]);
        }
}

float knapSackFractional(int capacity, int *weights, int *prices, int n)
{
    Item *items = malloc(sizeof(Item) * n);
    for (int i = 0; i < n; i++)
        items[i].weight = weights[i],
        items[i].price = prices[i];
    sort(items, n);

    float totalPrice = 0;

    for (int i = 0; i < n; i++)
    {
        int weight = items[i].weight, price = items[i].price;
        if (capacity - weight >= 0) // Entire item can be Picked
        {
            capacity -= weight;
            totalPrice += price;
        }
        else // Fraction of the item can be picked
        {
            float fraction = (float)capacity / (float)weight;
            capacity -= weight * fraction;
            totalPrice += price * fraction;
            return totalPrice;
        }
    }
}

int main()
{

    int n, W;
    scanf("%i%i", &n, &W);

    int *weights = malloc(sizeof n * n);
    int *prices = malloc(sizeof n * n);

    for (int i = 0; i < n; i++)
        scanf("%i", &weights[i]);

    for (int i = 0; i < n; i++)
        scanf("%i", &prices[i]);

    float solution = knapSackFractional(W, weights, prices, n);
    printf("%.f", solution);
}

// INPUT:
// 3
// 50
// 10 20 30
// 60 100 120

// OUTPUT:
// 240

