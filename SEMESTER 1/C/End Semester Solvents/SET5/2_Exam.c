// CODE 2: Write a C program to declare a two-dimensional integer array of size 2×3. Read user given numbers to store in the array. Now print the sum of the row wise maximum of the numbers stored in the array.

#include <stdio.h>

void main()
{
    int x = 2, y = 3;
    int arr[x][y];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            printf("Enter [%i][%i] element: ", i, j);
            scanf("%i", &arr[i][j]);
        }
    int sum = 0;
    for (int i = 0; i < x; i++)
        if (arr[i][0] > arr[i][1])
            if (arr[i][0] > arr[i][2])
                sum += arr[i][0];
            else
                sum += arr[i][2];
        else if (arr[i][1] > arr[i][2])
            sum += arr[i][1];
        else
            sum += arr[i][2];

    printf("The sum of rowwise maxima's are %i", sum);
}

// [ [ 1, 2, 3 ],
//   [ 6, 1, 4 ] ]