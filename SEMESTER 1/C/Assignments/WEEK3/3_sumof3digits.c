//Code 3: Write a C program to find the sum of the digits of a user given positive integer less than 1000
#include <stdio.h>

void main()
{
    int num, sum = 0;

    printf("Enter a positive integer below 1000: ");
    scanf("%i", &num);

    int a = num;

    if (num<0 | num> 1000)
        printf("%i value is'nt in the range, please try again.", num);

    else if (num < 10)
        printf("The sum of the digits of %i is %i .", num, num);

    else if (num >= 10 & num < 100)
    {
        sum += a % 10;
        a /= 10;
        sum += a % 10;
        printf("The sum of the digits of %i is %i .", num, sum);
    }

    else if (num >= 100)
    {
        sum += a % 10;
        a /= 10;
        sum += a % 10;
        a /= 10;
        sum += a % 10;
        printf("The sum of the digits of %i is %i .", num, sum);
    }
}
// Output 0:
// Enter a positive integer below 1000 : 143 
// The sum of the digits of 143 is 8.

// Output 1:
// Enter a positive integer below 1000 : 45 
// The sum of the digits of 45 is 9.