// Code 0: C program to find the area of a circle.
#include <stdio.h> // preprocessor command - header file

int main()
{
    float radius, area, pi; // initialization

    pi = 3.14f;                               // Value of pi
    printf("Enter the radius of the circle: "); // Input from user
    scanf("%f", &radius);
    area = pi * radius * radius; // Calculation

    printf("The area of the circle of radius %f is %f.\n", radius, area);
    return 0;
}
// Output
// Enter the area of the circle : 25
// The area of the circle of radius 25.000000 is 1962.500122.