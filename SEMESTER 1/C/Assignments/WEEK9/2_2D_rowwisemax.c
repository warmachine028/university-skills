/* CODE 2:
Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Now print the row wise maximum of the numbers stored in the array.

*/
#include <stdio.h>

void main()
{
    int i = 2, j = 3;
    int arr[i][j];

    for (int x = 0; x < i; x++)
    {
        int rmax = 0;

        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &arr[x][y]);
            if (arr[x][y]>rmax)
                rmax = arr[x][y];
        }

        printf("\nThe maximum value of this row is: %i\n\n", rmax);
    }
}