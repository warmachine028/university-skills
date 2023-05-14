/* CODE 4:
C program to check whether a person is eligible for voting or not?
*/
#include <stdio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);

    age >= 18 ? printf("Eligible") : printf("Not Eligible");
}

// OUTPUTS:
// Enter your age: 7
// Not Eligible
  
// Enter your age: 18
// Eligible
 
// Enter your age: 99
// Eligible