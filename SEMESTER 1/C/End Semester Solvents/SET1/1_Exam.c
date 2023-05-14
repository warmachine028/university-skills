// CODE 1: Write a C program to print all prime numbers up to ‘n’ where ‘n’ is user given.


#include <stdio.h>
#include <math.h>

void main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%i", &n);

    if (n < 2)
        printf("No prime numbers found.");
    else
        for (int i = 2 ; i <= n; i++)
        {
            int flag = 1;
            for (int j = 2; j <= sqrt(i); j++)
                if (i % j == 0)
                {
                    flag--;
                    break;
                }
            if (flag)
                printf("%i, ", i);
        }
}