//Code 8: C program to find Quotient and remainder of 2 numbers.
#include <stdio.h> // preprocessor command - header file

int main()
{
    // Initialization
    int divisor, dividend, remainder, quotient;

    // Inputs
    printf("Enter the dividend: ");
    scanf("%i", &dividend);

    printf("Enter the divisor: ");
    scanf("%i", &divisor);

    // Calculation
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("The quotient of %i and %i is: %i", dividend, divisor, quotient);
    printf("\nThe remaider of %i and %i is: %i", dividend, divisor, remainder);

    return 0;
}

// // Output 1
// Enter the dividend: 72
// Enter the divisor: 12
// The quotient of 72 and 12 is: 6
// The remaider of 72 and 12 is: 0

// // Output 2
// Enter the dividend: 13
// Enter the divisor: 23
// The quotient of 13 and 23 is: 0 
// The remaider of 13 and 23 is: 13
