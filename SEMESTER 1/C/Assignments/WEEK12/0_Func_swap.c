/* CODE 0:
Write the function definition of the following function declaration in C programming
language. Use it to swap two numbers.Here, ‘a’ and ‘b’ are formal arguments to accept
the addresses of numbers passed to it.
    
void swap(int *a, int *b);

*/

#include <stdio.h>

// Function prototyping
void swap();

void main()
{
    int a, b;

    printf("Enter 2 numbers to swap: ");
    scanf("%i %i", &a, &b);

    printf("The values of 'a' and 'b' before function call are: %i, %i", a, b);

    swap(&a, &b);

    printf("\nThe values of 'a' and 'b' after function call are: %i, %i", a, b);
}

void swap(int *a, int *b)
{
    printf("\nInside the function");
    *a += *b;
    *b = *a - *b;
    *a += -*b;
}
