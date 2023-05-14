// CODE 4: Write a C program, to delete an element from an array

#include <stdio.h>
#include <malloc.h>

int delete (int *arr, int len, int element)
{
    int index;
    for (index = 0; index < len + 1; index++)
        if (arr[index] == element)
            break;
    if (index > len)
        return 0;
    else
        for (index; index < len - 1; index++)
            arr[index] = arr[index + 1];
    return 1;
}

void main()
{
    int len = 5;
    int *arr = malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++)
        arr[i] = i + 1;

    int item = 5;
    if (delete (arr, len, item))
        printf("Element '%i' deleted from the array.\n", item), len--;
    else
        printf("Element '%i' not found in the array.\n", item);

    printf("The array now is: ");
    for (int i = 0; i < len; i++)
        printf("%i, ", arr[i]);
}