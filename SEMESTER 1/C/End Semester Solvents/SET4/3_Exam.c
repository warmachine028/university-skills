// CODE 3: Write a C program to generate Fibonacci sequence up to nth term. The Fibonacci sequence is as follows: 0, 1, 1, 2, 3, 5, 8….


#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many terms(n): ");
    scanf("%i", &n);

    int first = 0, second = 1, third;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("%i, ", first);
        else if (i == 2)
            printf("%i, ", second);
        else
        {
            third = first + second;
            printf("%i, ", third);
            first = second;
            second = third;
        }
    }
    printf("...");
}
