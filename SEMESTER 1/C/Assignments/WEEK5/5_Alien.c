//Code 5: A number is said to be an Armstrong number if the sum of the cubes of the digits of that number  is equal to that number itself. Write a C program to check if a user given integer is Armstrong  number or not. (Example: 153 is Armstrong number. As, 13 + 53 + 33 = 153)
#include <stdio.h>

void main()
{
    int number;
    printf("Enter a number: ");
    scanf("%i", &number);

    while (number < 0)
    {
        printf("Please enter a positive integer: ");
        scanf("%i", &number);
    }

    int sum = 0, temp = number;
    while (temp > 0)
    {
        sum += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }
    (number == sum) ? printf("%i is an armstrong number", number) : printf("%i is not an armstrong number", number);
}