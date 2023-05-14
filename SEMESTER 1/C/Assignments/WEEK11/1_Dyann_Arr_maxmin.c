/* CODE 1:
Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now print the maximum and minimum of the numbers stored in the array.

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
    }

    int min;
    int max = min = array[0];
    for (int i = 0; i < n; i++)
        if (array[i] < min)
            min = array[i];
        else if (array[i] > max)
            max = array[i];

    printf("Min = %i\nMax = %i", min, max);
}
