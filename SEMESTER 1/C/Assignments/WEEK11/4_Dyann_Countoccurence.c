/* CODE 4:
Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now read another number from the user and count the number of occurrences of that number in the array.

    Test Data:
    Input: 2 4 5 7 8
    Output: 8 7 5 4 2

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

    int num, count = 0;
    printf("\nEnter number: ");
    scanf("%i", &num);

    for (int i = 0; i < n; i++)
        array[i] == num ? count++ : 0;

    if (count)
        printf("Number '%i' has appeared %i times.", num, count);
    else
        printf("Number '%i' is'nt present in array.", num);
}