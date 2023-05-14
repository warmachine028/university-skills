//Code 7: C program to calculate simple interest.
#include <stdio.h> // preprocessor command - header file

int main()
{
    // Initialization
    float principal, ROI, amount;
    int year;

    // Inputs
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &ROI);

    printf("Enter the time (in years): ");
    scanf("%i", &year);

    // Calcualtion
    amount = principal * (1 + ROI * year);

    printf("\nThe amount to be recieved after %i year(s) @ %f is: %f", year, ROI, amount); //Output

    return 0;
}

// // Output 1
// Enter the principal amount: 10000
// Enter the rate of interest: 0.4
// Enter the time (in years): 2

// The amount to be recieved after 2 year(s) @ 0.400000 is: 18000.000000

// // Output 2
// Enter the principal amount: 120000
// Enter the rate of interest: 0.7
// Enter the time (in years): 3

// The amount to be recieved after 3 year(s) @ 0.700000 is: 372000.000000

