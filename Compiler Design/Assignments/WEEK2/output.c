#include <stdio.h>

int writef(const char *, ...),
    readf(const char *, ...);

void main()
{
    int i, number = 10;
    readf("%i", &i);
    writef("%i", number);
    writef("%i", i);
    readf("%d", &number);
}