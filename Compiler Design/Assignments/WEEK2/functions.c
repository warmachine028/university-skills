#include <stdio.h>

int printf(const char *, ...),
    scanf(const char *, ...);

void main()
{
    int i, number = 10;
    scanf("%i", &i);
    printf("%i", number);
    printf("%i", i);
    scanf("%d", &number);
}