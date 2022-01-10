/* CODE 2:
Write a program to swap two pointer values with and without using temporary/third variable.

Sample Input 0
10, 23       

Sample Output 0
23, 10
*/

#include <stdio.h>

void swap1(int *x, int *y) // with using temp
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int *x, int *y) // without using temp
{
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

void main()
{
    int a = 10, b = 23;
    swap2(&a, &b);
    printf("%i, %i", a, b);
}
