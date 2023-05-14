// CODE 2: Write a C program to take two user given matrix each of size 2×3. Now find the addition of the matrices. The program should print a message if the addition is not possible.

#include <stdio.h>

void input(int x, int y, int arr[x][y])
{
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Enter element for [%i][%i]: ", i, j);
            scanf("%i", &arr[i][j]);
        }
}

void main()
{
    int x = 2, y = 3;
    int arr1[x][y];
    int arr2[x][y];

    printf("___Matrix 1___\n");
    input(x, y, arr1);

    printf("___Matrix 2___\n");
    input(x, y, arr2);

    printf("\nAddition of the matrices: \n");
    printf("[");
    for (int i = 0; i < x; i++)
    {
        printf("[");
        for (int j = 0; j < y; j++)
            printf("%i ", arr1[i][j] + arr2[i][j]);
        printf("]");
        i == x - 1 ? printf("]") : i;
        printf("\n");
    }
}
