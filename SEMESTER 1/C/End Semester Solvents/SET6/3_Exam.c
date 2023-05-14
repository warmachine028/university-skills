/* CODE 3: Write a C program to print the following pattern up to ‘n’ lines.
A
B C
D E F

*/

#include <stdio.h>

void main()
{
    int n;
    printf("Enter how many lines: ");
    scanf("%i", &n);

    int letter = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++, letter++)
        {
            if (letter > 90)
                letter = 65;
            printf("%c", letter);
        }
        printf("\n");
    }
}
