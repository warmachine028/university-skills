// CODE 1: Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Now print the maximum and minimum of the numbers stored in the array.


#include <stdio.h>

void main()
{
    int x = 2, y = 3;
    int arr[x][y];

    int min, max;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Enter element at [%i][%i]: ", i, j);
            scanf("%i", &arr[i][j]);

            if (i == 0 && j == 0)
                min = max = arr[i][j];
            else
            {
                max = arr[i][j] > max ? arr[i][j] : max;
                min = arr[i][j] < min ? arr[i][j] : min;
            }
        }

    printf("MAX: %i\n", max);
    printf("MIN: %i  ", min);
}
