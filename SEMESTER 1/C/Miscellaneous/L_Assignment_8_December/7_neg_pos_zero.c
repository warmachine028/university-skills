/* CODE 7:
Write a C program to check whether a number is negative, positive or zero. 
*/
#include <stdio.h>

void main()
{
    int integer;
    printf("Enter an integer: ");
    scanf("%i", &integer);

    (integer == 0) ? printf("zero")
                   : (integer > 0) ? printf("%i is Positive", integer)
                                   : printf("%i is Negative", integer);
}
// OUTPUTS:
// Enter an integer: -99
// -99 is Negative

// Enter an integer: 0
// zero

// Enter an integer: 88
// 88 is Positive
// nm,sec,roll, computer assignment 4