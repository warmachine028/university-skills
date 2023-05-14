// CODE 1: Write a Program to check whether a number is prime

#include <stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%i", &n);

    if (n <= 1)
        printf("%i isn't prime", n);
    else
    {
        int flag = 1;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
            {
                flag--;
                break;
            }

        if (flag)
            printf("%i is prime", n);
        else
            printf("%i isn't prime", n);
    }
}
