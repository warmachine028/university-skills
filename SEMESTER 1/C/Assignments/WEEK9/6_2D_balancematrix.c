/* CODE 6:
A matrix is said to be balanced if it satisfies the following conditions:
    i) The element at ith row and jth column is equal to the element at jth row and ith column
    ii) All elements have same value at ith row and jth column position if i = j

Write a C program to check if a user given matrix of size 3×3 is balanced or not. Example: The following matrix is a balanced matrix.
                        [  1  −2   3 ]
                        [ −2   1   1 ]
                        [  3   1   1 ]

*/

                        Illustration
Conditions:
 i)   A[i][j] = A[j][i]
ii)   A[0][0] = A[1][1] = A[2][2]

                    [[  1  −2   3 ]
                A =  [ −2   1   1 ]
                     [  3   1   1 ]]
 i) Condition 1:
    here,   A[0][1] = A[1][0] = -2,
            A[0][2] = A[2][0] =  3,      -->     Condition 1 Satisfied.
            A[1][2] = A[2][1] =  1.

ii) Condition 2:
    here,
       A[0][0] = A[1][1] = A[2][2] = 1.  -->     Condition 2 Satisfied.
                Hence, A is a balanced Matrix

#include <stdio.h>

void main()
{
    int i = 3, j = 3, flag = 0;
    int Matrix[i][j];

    // Inputting Values in Matrix

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &Matrix[x][y]);
        }
        printf("\n");
    }

    // Checking Conditions 1 & 2
    int temp = Matrix[0][0];
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            if (x == y && x != 0)
                flag += Matrix[x][y] == temp ? 1 : 0;
            flag += Matrix[x][y] == Matrix[y][x] ? 1 : 0;
        }
    }

    // The matrix must pass (i*j)+(i-1) number of comparisions to become balanced here flag==12 for 3×3 Matrix

    flag == (i * j + i - 1) ? printf("The Matrix is a balanced matrix.") : printf("The Matrix is an unbalanced matrix. ");
}
