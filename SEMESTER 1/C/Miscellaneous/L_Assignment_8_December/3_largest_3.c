/* CODE 3:
Program to find largest number among three numbers. 
*/
#include <stdio.h>

void main()
{
    int num1, num2, num3;
    printf("Enter the 3 numbers: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    printf("Largest of these 3 is: ");
    if (num1 > num2)
        num1 > num3 ? printf("%i ", num1) : printf("%i ", num3);
    else if (num2 > num3)
        printf("%i ", num2);
    else
        printf("%i ", num3);
}
// OUTPUTS:
// Enter the 3 numbers: 23 244 2559
// Largest of these 3 is: 2559

// Enter the 3 numbers: 23 -99 890
// Largest of these 3 is : 890