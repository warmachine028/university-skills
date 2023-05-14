
#include <stdio.h>

void main()
{
    int num, sum = 0;
    printf("Enter the last value: ");
    scanf("%i", &num);

    
    for (int i = 1; i <= num; i++)
    {
        int fact = 1;
        i == num ? printf("%i! = ", i) : printf("%i! + ", i);
        for (int j = 1; j <= i; j++)
            fact *= j;
        sum += fact;
    }
    printf("%i", sum);
}