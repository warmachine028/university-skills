/* CODE 8:
Write a C program to check whether a number is divisible by 5 and 11 or not. 
*/
#include <stdio.h>

void main()
{
    int number;
    printf("Enter the number: ");
    scanf("%i", &number);

    (number % 5 || number % 11) ? printf("%i is'nt divisible by 5 & 11. ", number)
                                : printf("%i is divisible by 5 & 11.", number);
}

// OUTPUTS:
// Enter the number: 990
// 990 is divisible by 5 & 11.

// Enter the number: 935
// 935 is divisible by 5 & 11.

// Enter the number: 825
// 825 is divisible by 5 & 11.

// Enter the number: 45
// 45 is'nt divisible by 5 & 11. 