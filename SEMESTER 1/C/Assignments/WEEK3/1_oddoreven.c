//Code 1:Write a C program to check whether the given integer is an even or an odd integer
#include <stdio.h>

void main()
{
    int integer;
    printf("Enter the integer: ");
    scanf("%i", &integer);

    if (integer == 0)
        printf("%i is neither an even nor an odd integer.", integer);

    else if (integer % 2)
        printf("%i is an odd integer.", integer);

    else
        printf("%i is an even integer.", integer);

}
// Output 0
// Enter the integer : 0 
// 0 is neither an even nor an odd integer.

// Output 1
// Enter the integer : 24 
// 24 is an even integer.

// Output 2
// Enter the integer : 255 
// 255 is an odd integer.