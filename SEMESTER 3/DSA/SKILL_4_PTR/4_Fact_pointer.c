/* CODE 4:
Write a program in C to find the factorial of a given number using pointers

Sample Input 0
ENTER THE NUMBER:5

Sample Output 0
FACTORIAL IS 120
*/

#include <stdio.h>

void fact(unsigned long long int *n) // FACTORIAL - RECURSION - POINTERS
{
    if (*n > 1)
    {
        unsigned long long int temp = *n - 1;
        fact(&temp);
        *n *= temp;
    }
}

void main()
{
    unsigned long long int n;
    printf("ENTER THE NUMBER: ");
    scanf("%lli", &n);
    fact(&n);
    printf("FACTORIAL IS %lli", n);
}
