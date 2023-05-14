
#include <stdio.h>

void main()
{
    int lines, integer = 1, space, i, j;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);

    for (i = 0; i < lines; i++)
    {
        for (space = 1; space <= lines - i; space++)
            printf("  ");       // printing spaces

        for (j = 0; j <= i; j++)
        {
            integer = (j == 0 || i == 0) ? 1 : 
            integer * (i - j + 1) / j;
            printf("%4d", integer);
        }
        printf("\n");
    }
}