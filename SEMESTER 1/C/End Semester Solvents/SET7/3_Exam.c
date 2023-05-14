/* CODE 3: Write a C program to print the following pattern up to ‘n’ lines.
A
B B
C C C

*/

#include <stdio.h>

void main()
{
    int n;
    printf("How many lines: ");
    scanf("%i", &n);

    int letter = 65;
    for (int i = 0; i < n; i++)
    {
        letter = letter > 90 ? 65 : letter;
        for (int j = 0; j <= i; j++)
            printf("%c ", letter);
        letter++;
        printf("\n");
    }
}
