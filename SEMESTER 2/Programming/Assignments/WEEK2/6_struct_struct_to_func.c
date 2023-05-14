// CODE 6: Using the concept of passing Structures as function arguments and returning a structure from a function in C language, add two numbers.

#include <stdio.h>

typedef struct
{
    int integer;
} num;

num sum(num n1, num n2)
{
    num result;
    result.integer = n1.integer + n2.integer;
    
    // returning structure from function
    return result;
}

void main()
{
    num x1, x2, result;
    x1.integer = 9;
    x2.integer = 10;
    
    // passing structures as func. args
    result = sum(x1, x2);

    printf("Sum of %i, %i is %i", x1.integer, x2.integer, result.integer);
}

// OUTPUT
// Sum of 9, 10 is 19