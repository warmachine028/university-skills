//Code 3: Write a C program to print the following sequence of numbers up to ‘n’ where ‘n’ is user given: 2, 4, 6, 8 ….
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the value of 'n': ");
    scanf("%i", &n);
    while (n <= 0)
    {
        printf("n must be a natural number for the sequence to exist.\n");
        printf("Please re-enter the value of n: ");
        scanf("%i", &n);
    }
    for (int i = 1; i <= n; i++)
        printf("%i, ", i * 2);
    printf("...");
}