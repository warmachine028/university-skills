// CODE 2: Write a C program to print the Fibonacci sequence in reverse order starting from n th term where ‘n’ is user given. You may declare any function if required.


#include <stdio.h>

int fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

void main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%i", &n);

    printf("The fibonacci sequence in reverse order is: \n");
    for (int i = n; i != 0; i--)
        printf("%i, ", fib(i));
}
