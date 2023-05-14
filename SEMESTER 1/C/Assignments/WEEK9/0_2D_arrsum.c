/* CODE 0:
Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Find the sum of the elements of the array.

*/
#include <stdio.h>

void main()
{
    int i = 2, j = 3, sum = 0;
    int arr[i][j];

    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &arr[x][y]);
            sum += arr[x][y];
        }
        printf("\n");
    }
    printf("The sum of all values in the array is %i", sum);
}