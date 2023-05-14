/* CODE 0:
Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. 
Find the sum of the elements of the array. 
(Hint: Use Dynamic memory allocation)

*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, sum = 0;
    printf("Enter size of the array: ");
    scanf("%i", &n);

    int *array = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) // To stor3 values
    {
        printf("Enter the %i element: ", i);
        scanf("%i", &array[i]);
        sum += array[i];
    }

    printf("The sum of %i numbers is %i", n, sum);
}