// CODE 2: Write a C program that uses a recursive function to add first ‘n’ natural numbers where ‘n’ is user given.


#include <stdio.h>

int sum(int n)
{
    return n <= 1 ? 1 : n + sum(n - 1);
}

void main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%i", &n);
    printf("The sum of %i natural numbers is %i", n, sum(n));
}
