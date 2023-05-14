// Code 1: C program to find the area of a triangle.
#include <stdio.h> // preprocessor command - header file

int main()
{
    // Initialization
    float area, base, height; 

    // Inputting
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the height: ");
    scanf("%f", &height);

    // Calculation
    area = base * height * 0.5; 

    printf("The area of the triangle of base %f and height %f is %f.", base, height, area);

    return 0;
}

// // Output 0
// Enter the base: 12
// Enter the height : 14 
// The area of the triangle of base 12.000000 and height 14.000000 is 84.000000.

// // Output 1
// Enter the base : 3 
// Enter the height : 6 
// The area of the triangle of base 3.000000 and height 6.000000 is 9.000000.