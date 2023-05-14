// CODE 2: A number is said to be an Armstrong number if the sum of the cubes of the digits of that number is equal to that number itself. Write a C program to print all Armstrong numbers within a user given limit (a, b). If no Armstrong number is found, then print “No Armstrong Number Found”.


#include <stdio.h>
#include <math.h>

int len(unsigned long long n)
{
    int count = 0;
    while (n != 0)
        n /= 10, count++;

    return count;
}

int armstrong(unsigned long long n)
{
    int digits = len(n);
    unsigned long long flag = n;
    int sum = 0;
    for (int i = 0; i < digits; i++)
    {
        sum += pow(flag % 10, digits);
        flag /= 10;
    }
    return n == sum ? 1 : 0;
}

void main()
{
    unsigned long long a, b;
    printf("Enter limits (a, b): ");
    scanf("%llu%llu", &a, &b);

    int noarmstrong = 1;

    for (unsigned long long i = a; i < b; i++)
        if (armstrong(i))
        {
            noarmstrong = 0;
            printf("%llu, ", i);
        }
    if (noarmstrong)
        printf("No Armstrong Number Found");
}
