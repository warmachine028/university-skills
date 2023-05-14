/* CODE 4:
Write a C program to take two user given matrix each of size 2×3. Now find the addition of the matrices.

*/
#include <stdio.h>

void main()
{
    int i = 2, j = 3;
    int Matrix[i][j],
        Matrix1[i][j];

    printf("The first Matrix:\n");

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &Matrix[x][y]);
        }
        printf("\n");
    }

    printf("The Second Matrix:\n");

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &Matrix1[x][y]);
        }
        printf("\n");
    }

    printf("The addition of the 2 matrices is:\n");

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
            printf("%i ", Matrix[x][y] + Matrix1[x][y]);
        printf("\n");
    }
}