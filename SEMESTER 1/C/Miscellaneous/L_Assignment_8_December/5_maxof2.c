/* CODE 5:
Write a C program to find maximum between two numbers.
*/
#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter the 2 numbers: ");
    scanf("%i %i", &num1, &num2);

    printf("The maximum of %i and %i is %i .", num1, num2, num1 > num2 ? num1 : num2);
}

// OUTPUTS:
// Enter the 2 numbers: 13 14
// The maximum of 13 and 14 is 14 .

// Enter the 2 numbers: 19 -9
// The maximum of 19 and -9 is 19 .
