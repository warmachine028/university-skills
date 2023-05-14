// CODE 6: Write a C program to count the frequency of each element of an array

#include <stdio.h>
#include <malloc.h>

int count(int *array, int len, int element)
{
    int occurence = 0;
    for (int i = 0; i < len; i++)
        if (array[i] == element)
            occurence++;
    return occurence;
}

void main()
{
    int len = 9;

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
    for (int i = 0; i < index; i++)
        printf("%i occured %i times in the array.\n", uniqarr[i], count(arr, len, uniqarr[i]));
}