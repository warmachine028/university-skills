// CODE 0: Write a Program to find the factorial of a value


#include <stdio.h>

void main()
{
    int n, fact = 1;
    printf("Enter the number: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("%i! = %i", n, fact);
}
