/* CODE 2:
Program to check whether number is EVEN or ODD. 

*/
#include <stdio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%i", &num);

    num % 2 ? printf("ODD") : printf("EVEN");
}
// OUTPUTS:
// Enter a number: 34
// EVEN

// Enter a number: 33
// ODD