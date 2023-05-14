#include <stdio.h>

void main()
{
    int n, sum = 0;
    scanf("%i", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    n == sum ? printf("Perfect") : printf("Not Perfect");
}