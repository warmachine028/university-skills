// Code 2: C program to swap 2 numbers without temp variable.
#include <stdio.h> // preprocessor command- header file

int main()
{
    int num1, num2; // initialization

    printf("Enter the num1: "); // Input num1 from user
    scanf("%d", &num1);

    printf("Enter the num2: "); // Input num2 from user
    scanf("%d", &num2);
    // Before Swapping
    printf("The numbers before swapping are %d and %d.\n", num1, num2);

    // Swapping
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    // After Swapping
    printf("The numbers after swapping are %d and %d.", num1, num2);

    return 0;
}
// // Output 1
// Enter the num1 : 12 
// Enter the num2 : 13 
// The numbers before swapping are 12 and 13. The numbers after swapping are 13 and 12.

// // Output 2
// Enter the num1 : 34 
// Enter the num2 : 43 
// The numbers before swapping are 34 and 43. The numbers after swapping are 43 and 34.