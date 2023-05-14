//Code 6: C program to find the average of 2 numbers.
#include <stdio.h> // preprocessor command - header file

int main()
{
    // initialization
    int num1, num2; 
    float average;

    // Inputting
    printf("Enter the num1: "); 
    scanf("%d", &num1);

    printf("Enter the num2: "); 
    scanf("%d", &num2);

    // Calculation
    average = (num1 + num2) / 2.0;     

    printf("The average of %i and %i is %f .", num1, num2, average);

    return 0;
}
// // Output 1
// Enter the num1 : 20 
// Enter the num2 : 30 
// The average of 20 and 30 is 25.000000.

// // Output 2
// Enter the num1 : 1200 
// Enter the num2 : 6790 
// The average of 1200 and 6790 is 3995.000000 .
