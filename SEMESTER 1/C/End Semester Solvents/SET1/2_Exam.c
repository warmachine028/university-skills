// CODE 2: Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Now print the sum of the column wise maximum of the numbers stored in the array.


#include <stdio.h>

void main()
{
    int x = 2, y = 3;
    int arr[x][y];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Enter the [%i][%i] element: ", i, j);
            scanf("%i", &arr[i][j]);
        }

    int sum = 0;
    for (int i = 0; i < y; i++)
        sum += arr[0][i] > arr[1][i] ? arr[0][i] : arr[1][i];

    printf("The sum of columnwise maximas's are %i", sum);
}
