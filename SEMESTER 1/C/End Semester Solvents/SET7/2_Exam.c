// CODE 2: Write a C program to print all prime numbers between ‘a’ and ‘b’ where ‘a’ and ‘b’ are user given.


#include <stdio.h>
#include <math.h>

int prime(int n)
{
    if (n <= 2)
        return 0;
    else
    {
        int primeflag = 1;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
            {
                primeflag--;
                break;
            }
        return primeflag ? 1 : 0;
    }
}

void main()
{
    int a, b;
    printf("Enter an upper limit: ");
    scanf("%i", &a);
    printf("Enter an upper limit: ");
    scanf("%i", &b);

    for (int i = a; i <= b; i++)
        if (prime(i))
            printf("%i, ", i);
}
