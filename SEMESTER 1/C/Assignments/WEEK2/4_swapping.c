/*

Write a C program to take two integers (a, b) 
input and swap the values.

Test Data:
Input a: 2
Input b: 5
*/

#include <stdio.h>

int main()
{
    int a = 2;
    int b = 5;
    printf(" Before Swapping: %d, %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf(" After Swapping: %d, %d", a, b);
    return 0;
}