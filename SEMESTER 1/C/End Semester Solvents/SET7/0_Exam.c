// CODE 0: A warehouse has a collection of boxes of different dimensions. The dimension of a box is defined by the height, width and depth of the box. A 2D array can be used to store the dimension of boxes. The matrix can have 3 columns. Each row of the 2D matrix can store the height, width and depth of one box respectively. Write a C program to read the dimension of 10 boxes in a 2D array. Print the dimension of the box having maximum volume.

#include <stdio.h>

void main()
{
    int boxes = 10, dimensions = 3;
    int arr[boxes][dimensions];

    int maxvolume, maxbox;
    for (int i = 1; i <= boxes; i++)
    {
        printf("_____Box %i_____\n", i);
        printf("Enter the height: ");
        scanf("%i", &arr[i][0]);

        printf("Enter the width: ");
        scanf("%i", &arr[i][1]);

        printf("Enter the deptht: ");
        scanf("%i", &arr[i][2]);

        int volume = arr[i][0] * arr[i][1] * arr[i][2];
        if (i == 1)
            maxvolume = volume, maxbox = 1;
        else
            volume > maxvolume ? maxvolume = volume, maxbox = i : 1;
    }
    printf("The box with max volume was box %i with dimentions:", maxbox);
    printf("\nHeight: %i\nWidth: %i\nDepth: %i", arr[maxbox][0], arr[maxbox][1], arr[maxbox][2]);
}
