/* CODE 3:
Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now create another array of same size and store the elements in the reverse order.

*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%i", &n);

    int *array = malloc(n * sizeof(int));
    int *revarray = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %i element: ", i);
        scanf("%i", &array[i]);
        revarray[n - i - 1] = array[i];
    }

    printf("The reversed array is: \n");
    for (int i = 0; i < n; i++)
        printf("%i, ", revarray[i]);
}