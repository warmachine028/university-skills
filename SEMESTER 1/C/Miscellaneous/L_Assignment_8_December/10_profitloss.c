/* CODE 10:
Write a C program to calculate profit or loss.
*/
#include <stdio.h>

void main()
{
    int sp, cp;
    printf("Enter the cost and selling prices: ");
    scanf("%i %i", &cp, &sp);

    int result = sp - cp;
    sp > cp ? printf("Profit of %i .", result) 
            : printf("Loss  of  %i .", -result);
}
// OUTPUTS:
// Enter the cost and selling prices: 500 10000
// Profit of 9500 .

// Enter the cost and selling prices: 60 40
// Loss of 20 .