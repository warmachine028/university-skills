//Code 2:Write a C program to find the maximum of 3 user given integers
#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the 3 integers: ");
    scanf("%i %i %i", &a, &b, &c);

    printf("\nThe numbers were: ");
    printf("\na = %i \nb = %i \nc = %i\n", a, b, c);

    if (a > b & a > c)
        printf("\n%i is the maximum of all the 3 integers.", a);

    else if (b > a & b > c)
        printf("\n%i is the maximum of all the 3 integers.", b);

    else
        printf("\n%i is the maximum of all the 3 integers.", c);
}

// Output:
// Enter the 3 integers: 1000899 100445 30000443

// The numbers were: 
// a = 1000899       
// b = 100445        
// c = 30000443      

// 30000443 is the maximum of all the 3 integers.