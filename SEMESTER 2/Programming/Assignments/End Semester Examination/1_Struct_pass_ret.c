// CODE 1: (2) Using the concept of passing Structures as function arguments and returning a structure from a function in C language, add two numbers.

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int integer;
} num;

num *createnum(int data)
{
    num *temp = malloc(sizeof(num));
    temp->integer = data;
    return temp;
}

// takes 2 structuures
num *sum(num *n1, num *n2)
{
    num *temp = createnum(n1->integer + n2->integer);

    // returning structure from function
    return temp;
}

void main()
{
    num *x1 = createnum(9);
    num *x2 = createnum(10);

    // passing structures as func. args
    num *result = sum(x1, x2);

    printf("Sum of %i, %i is %i", x1->integer, x2->integer, result->integer);
}

// OUTPUT:
// Sum of 9, 10 is 19