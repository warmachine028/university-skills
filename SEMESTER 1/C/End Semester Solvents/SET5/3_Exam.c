// CODE 3: Write a C program to declare a matrix of size 2×3. Read user given numbers to store in the matrix. Now find the transpose of the matrix.


#include <stdio.h>

void main()
{
    int x = 2, y = 3;
    int A[x][y];
    int AT[y][x];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Enter element[%i][%i]: ", i, j);
            scanf("%i", &A[i][j]);
            AT[j][i] = A[i][j];
        }

    printf("\nThe actual matrix: \n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            printf("%i ", A[i][j]);
        printf("\n");
    }

    printf("\nThe transposed matrix: \n");
    for (int j = 0; j < y; j++)
    {
        for (int i = 0; i < x; i++)
            printf("%i ", AT[j][i]);
        printf("\n");
    }
}
// [[1, 2, 3]    -> [[1,4],
//  [4, 5, 6]]       [2,5],
//                   [3,6]]

// a00 -> a00  a01 -> a10  a02 -> a20
// a10 -> a01  a11 -> a11  a12 -> a21