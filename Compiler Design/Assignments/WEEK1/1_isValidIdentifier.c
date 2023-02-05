// CODE 1: Write a program to validate an Identifier in C

#include "isValidIdentifier.c"

void main()
{
    char identifier[] = "AnIdentifier_12qj__ ";
    if (isValidIdentifier(identifier))
        printf("Valid identifier");
    else
        printf("Not a valid identifier");
}