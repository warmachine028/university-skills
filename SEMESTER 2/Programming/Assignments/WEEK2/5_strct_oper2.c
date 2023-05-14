// CODE 5: Write a C program to add two distances in feet and inches using structure. Final result will be printed in the form of feet and inches.

#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
} d1, d2, result;

void main()
{
    printf("Enter the lengths (feet-inches)\n");
    printf("Distance 1: ");
    scanf("%i' %i\"", &d1.feet, &d1.inch);
    printf("Distance 2: ");
    scanf("%i' %i\"", &d2.feet, &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch > 12)
        result.inch -= 12, result.feet += 1;
    
    printf("Total distance: %i' %i\"", result.feet, result.inch);
}

// OUTPUT
// Enter the lengths (feet-inches)
// Distance 1: 12' 13"
// Distance 2: 14' 14"
// Total distance: 28' 3"