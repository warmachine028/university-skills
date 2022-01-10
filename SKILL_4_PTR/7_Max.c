/* CODE 7:
Write a program in C to find the maximum of two numbers using a pointer

Sample Input 0
First Number: 26
Second Number: 14

Sample Output 0
26 is the maximum number

*/

#include <stdio.h>
#define max(x, y) *x > *y ? *x : *y

void main()
{
    int a, b;
    printf("First Number: ");
    scanf("%i", &a);
    printf("Second Number: ");
    scanf("%i", &b);

    printf("\n%i is maximum number", max(&a, &b));
}