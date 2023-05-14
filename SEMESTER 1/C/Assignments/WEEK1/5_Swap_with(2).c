// Code 5: C program to swap 2 numbers with temp variable.
#include <stdio.h> // preprocessor command - header file

int main()
{
    int num1, num2, temp; // initialization

    printf("Enter the num1: "); // Input num1 from user
    scanf("%d", &num1);

    printf("Enter the num2: "); // Input num2 from user
    scanf("%d", &num2);
    // Before Swapping
    printf("The numbers before swapping are %d and %d.\n", num1, num2);

    // Swapping
    temp = num2;
    num2 = num1;
    num1 = temp;

    // After Swapping
    printf("The numbers after swapping are %d and %d.", num1, num2);

    return 0;
}
