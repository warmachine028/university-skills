/* CODE 2:
 A matrix (a) is said to be Upper Triangular if it satisfies the following conditions:
     𝑎[𝑖][𝑗] = { 𝑥, 𝑖 ≤ 𝑗, 𝑥 ≠ 0
                0, 𝑖 > 𝑗

Write a C program to check if a user given matrix of size 3×3 is upper triangular or not.
*/

#include <stdio.h>

void main()
{
    int x = 3, y = 3;
    int arr[x][y];

    int flag = 1;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Enter the [%i][%i] element: ", i, j);
            scanf("%i", &arr[i][j]);
            if (i <= j && arr[i][j] == 0)
                flag = 0;
            else if (i > j && arr[i][j] != 0)
                flag = 0;
        }

    printf("The %ix%i matrix is: \n", x, y);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            printf("%i ", arr[i][j]);
        printf("\n");
    }
    if (flag)
        printf("The matrix is an upper triangular matrix");
}
// 1 2 3 0 1 2 0 0 1