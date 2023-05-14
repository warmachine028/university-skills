//Code 0:Write a C program to print "Yes" if an user given integer is a multiple of 7 and not a multiple of 9, else print "NO"
#include <stdio.h>

void main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);

    input % 7 == 0 && input % 9 != 0 ? printf("YES") : printf("NO");
}
//Output 1:
// Enter the integer : 14 
// 14 is an even integer.

// Output 2:
// Enter the integer : 81 
// 81 is an odd integer.