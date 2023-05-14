/* CODE 5:
Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now check and replace all the elements of the array by the absolute value of individual numbers.

*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%i", &n);

    int *array = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %i element: ", i);
        scanf("%i", &array[i]);
        if (array[i] < 0)
            array[i] = -array[i];
    }

    printf("The array with absolute values: ");
    for (int i = 0; i < n; i++)
        printf("%i, ", array[i]);
}