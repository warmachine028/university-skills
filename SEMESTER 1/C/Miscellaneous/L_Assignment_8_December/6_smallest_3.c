/* CODE 6:
Write a C program to find minimum between three numbers. 
*/
#include <stdio.h>

void main()
{
    int num1, num2, num3;
    printf("Enter the 3 numbers: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    printf("Minimum of these 3 is: ");
    if (num1 < num2)
        num1 < num3 ? printf("%i ", num1) : printf("%i ", num3);
    else if (num2 < num3)
        printf("%i ", num2);
    else
        printf("%i ", num3);
}
// OUTPUTS:
// Enter the 3 numbers: 12 0 -99
// Minimum of these 3 is: -99

// Enter the 3 numbers: 45 44 90
// Minimum of these 3 is: 44