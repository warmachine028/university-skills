/* CODE 3: Write a C program to print the following pattern up to ‘n’ lines.
A
A B
A B C

*/
#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        int temp = 65;
        for (int j = 0; j < i; j++, temp++)
        {
            temp = temp > 90 ? 65 : temp;
            printf("%c ", temp);
        }
        printf("\n");
    }
}
