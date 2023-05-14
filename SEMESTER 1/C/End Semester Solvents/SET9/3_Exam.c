// CODE 3: Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Find the sum of the elements of the array

#include <stdio.h>

void main()
{
    int x = 2, y = 3;
    int array[x][y];

    int sum = 0;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Enter element [%i][%i] :", i, j);
            scanf("%i", &array[i][j]);
            sum += array[i][j];
        }
    printf("The sum of all elements of the array is: %i", sum);
}
