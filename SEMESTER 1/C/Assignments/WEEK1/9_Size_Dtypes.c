// Code 9: C program to find the size of various datatypes.
#include <stdio.h> // preprocessor command - header file

int main()
{
    // Initialization
    int intType;       // Integer Data type
    float floatType;   // Float Data type
    long longType;     // Long Data type
    double doubleType; // Double Data type
    char charType;     // char Data type

    // Output
    printf("\nSize of Integer type data is %ld bytes.", sizeof(intType));
    printf("\nSize of Float type data is %ld bytes.", sizeof(floatType));
    printf("\nSize of Long type data is %ld bytes.", sizeof(longType));
    printf("\nSize of Double type data is %ld bytes.", sizeof(doubleType));
    printf("\nSize of Char type data is %ld byte.\n", sizeof(charType));

    return 0;
}

// Size of Integer type data is 4 bytes.
// Size of Float type data is 4 bytes. 
// Size of Long type data is 4 bytes.  
// Size of Double type data is 8 bytes.
// Size of Char type data is 1 byte.   
