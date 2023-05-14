/* CODE 1:
Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Now print the maximum and minimum of the numbers stored in the array.

*/
#include <stdio.h>

void main()
{
    int i = 2, j = 3;
    int arr[i][j];
    int maximum = 0, minimum = 0;
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            printf("Enter the value at [%i][%i]: ", x, y);
            scanf("%i", &arr[x][y]);
            if (arr[x][y]>maximum)
                maximum = arr[x][y];
            else if (arr[x][y]<minimum)
                minimum = arr[x][y];
        }
        printf("\n");
    }



    printf("Minimum value of the array is : %i\n", minimum);
    printf("Maximum value of the array is : %i", maximum);
}