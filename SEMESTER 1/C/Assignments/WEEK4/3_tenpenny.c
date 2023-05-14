//Code 3: Write a C program to find the maximum of two user given integers using Ternary Operators only.
#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter the first and second number: ");
    scanf("%d %d", &a, &b);

    printf("The larger of %d and %d is %d. ", a, b, a > b ? a : b);
}
// Output 0
// Enter the first and second number: 12 14
// The larger of 12 and 14 is 14. 

// Output 1
// Enter the first and second number: 32 56
// The larger of 32 and 56 is 56. 

// Output 2
// Enter the first and second number: 23 12
// The larger of 23 and 12 is 23. 