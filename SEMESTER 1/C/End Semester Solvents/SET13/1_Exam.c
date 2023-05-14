// CODE 1: Write a C program to find the average of ‘n’ user given numbers where ‘n’ is user given. Do not use array.


#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many numbers: ");
    scanf("%i", &n);

    int i = 0, input;
    int sum = 0;

    for (i; i < n; i++)
    {
        printf("Enter the %i integer: ", i);
        scanf("%i", &input);
        sum += input;
    }
    float average = sum / i;
    printf("The average of the %i numbers is %.2f.", n, average);
}
