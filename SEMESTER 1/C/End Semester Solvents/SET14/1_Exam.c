// CODE 1: Write a C program to take a 2x3 matrix input from user. Now, take another number input from user and replace all elements which are below this number in the matrix by ‘0’.


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

    int int_;
    printf("Enter another integer: ");
    scanf("%i", &int_);

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (arr[i][j] < int_)
                arr[i][j] = 0;
            printf("%i ", arr[i][j]);
        }
        printf("\n");
    }
}
