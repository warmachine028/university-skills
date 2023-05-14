/* CODE 2:
Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now read another number from the user and check whether that number is present in the array or not. If present, print the index position of the element. Otherwise print “Not Present”

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

    int element, i, flag = 1;
    printf("Enter the element to search: ");
    scanf("%i", &element);

    for (i = 0; i < n; i++)
        if (array[i] == element)
        {
            flag--;
            printf("Element '%i' found at position %i.", element, i);
            break;
        }

    flag ? printf("Not found") : 0;
}
