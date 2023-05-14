// CODE 2: Write a C program to convert decimal to binary number using the function.

#include <stdio.h>

void dectobin(int n)
{
    if (n > 0)
    {
        dectobin(n / 2);
        printf("%i", n % 2);
    }
}

void main()
{
    int dec = 65;
    printf("The binary of %i is ", dec);
    dectobin(dec);
}
