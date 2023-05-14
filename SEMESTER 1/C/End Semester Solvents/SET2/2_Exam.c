// CODE 2: Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now print the maximum and minimum of the numbers stored in the array.


#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the size of the 1D array: ");
    scanf("%i", &n);

    int *array = malloc(n * sizeof(int));

    int max, min;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %i of the array: ", i);
        scanf("%i", &array[i]);

        i == 0 ? max = min = array[i] : array[0];
        array[i] > max ? max = array[i] : max;
        array[i] < min ? min = array[i] : min;
    }

    printf("The maximum : %i\n", max);
    printf("The minimum : %i  ", min);
}
