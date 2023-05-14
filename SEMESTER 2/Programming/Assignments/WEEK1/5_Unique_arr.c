// CODE 5: Write a C program to print all unique elements in an array.

#include <stdio.h>
#include <malloc.h>

void main()
{
    int len = 7;

    int *arr = malloc(len * sizeof(int));
    int *uniqarr = malloc(len * sizeof(int));
    
    printf("Enter the array\n");
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        printf("Enter the %i element: ", i);
        scanf("%i", &arr[i]);

        int unique = 1;
        for (int j = 0; j < index; j++)
            if (uniqarr[j] == arr[i])
                unique = 0;

        if (unique)
            uniqarr[index] = arr[i], index++;
    }

    printf("The array with unique elements is:\n");
    for (int i = 0; i < index; i++)
        printf("%i, ", uniqarr[i]);
}
