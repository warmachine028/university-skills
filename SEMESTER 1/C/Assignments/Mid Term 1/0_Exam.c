/* CODE 1:
Sum digit operation of numbers is defined as the sum of the digits of a given number .
After applying the sum digit operation on a number if a multidigit number is obtained then the operation
can be repeaated on the result until a single digit is obtained. This single digit obtained from any number is called the magic digit. Write a C program to read a user given number and find its magic digit.

Example: Magic digit of 156 = 1+5+6 = 12(multi digit) 1+2 = 3(single digit). so process stopped
*/

#include <stdio.h>

void main()
{
    int num, sum = 0;

    printf("Enter the number: ");
    scanf("%i", &num);

    while (num < 0) // A case to check user input for negative integers
    {
        printf("Please enter a positive integer: ");
        scanf("%i", &num);
    }

    for (int temp = num; temp > 0 || sum > 9; temp /= 10)
    {
        if (temp == 0)
        {
            temp = sum; // lOGIC
            sum = 0;
        }
        sum += temp % 10;
    }

    printf("The magic digit of '%i' is '%i'.", num, sum);
}

