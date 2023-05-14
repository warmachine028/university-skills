//Code 0: Write a C program to find the sum of first ‘n’ natural numbers. Consider that ‘n’ is user input.
#include <stdio.h>

void main()
{
    int num;
    printf("Enter the last natural number: ");
    scanf("%i", &num);

    while (num <= 0)
    {
        printf("%d is not a natural number, try again: ", num);
        scanf("%i", &num);
    }

    printf("The sum of %d natural numbers is %d", num, (num*num+num)/2);
}
