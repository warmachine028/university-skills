/* CODE 5:
Write a C program to declare a matrix of size 2×3. Read user given numbers to store in the matrix. Now find the transpose of the matrix.

*/
               Illustration

     [[ 1 2 4 ]            a00 a01 a02
A  =  [ 4 5 6 ]]           a10 a11 a12
    
     [[ 1 4 ]         a00 a10       a00 a01
AT =  [ 2 5 ]         a01 a11  -->  a10 a11
      [ 4 6 ]]        a02 a12       a20 a21

#include <stdio.h>

void main()
{
    int i = 2, j = 3;
    int A [i][j],
        AT[j][i];

    // Insertting Values in Matrix

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &A[x][y]);
            AT[y][x] = A[x][y];
        }
        printf("\n");
    }

    // Printing the Actual Matrix
    printf("The Actual matrix: A=\n");

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
            printf(" %i ", AT[x][y]);
        printf("\n");
    }

    // Printing the Transposed Matrix
    printf("The Transposed matrix: AT =\n");

    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < i; y++)
            printf(" %i ", AT[x][y]);
        printf("\n");
    }    
}
