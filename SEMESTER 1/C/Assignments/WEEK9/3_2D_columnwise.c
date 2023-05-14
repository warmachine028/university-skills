/* CODE 3:
Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Now print the column wise maximum of the numbers stored in the array.

*/
#include <stdio.h>

void main()
{
    int i = 2, j = 3;
    int arr[i][j];

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &arr[x][y]);
        }
        printf("\n");
    }

    for (int x = 0; x < j; x++)
    {
        int max = arr[0][x] > arr[1][x] ? arr[0][x] : arr[1][x];
        printf("The maximum value of column %i is %i.\n", x, max);
    }
}