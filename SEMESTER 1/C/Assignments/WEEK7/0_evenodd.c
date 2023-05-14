#include <stdio.h>

void main()
{
    int num;
    scanf("%i", &num);

    num % 2 ? printf("Odd") : printf("Even");
}