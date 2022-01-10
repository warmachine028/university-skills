/* CODE 6:
Write a program in C to compute the sum of all elements in an array using pointers.

Sample Input 0
The number of elements to store in the array (max 10) : 5
5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6

Sample Output 0
The sum of array is: 20 

*/

#include <stdio.h>
#include <malloc.h>

int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

void main()
{
    int n;
    printf("The number of elements to store in the array (max 10) : ");
    scanf("%i", &n);

    int *array = malloc(sizeof n * n);
    printf("%i number of elements in the array :\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %i : ", i + 1);
        scanf("%i", &array[i]);
    }
    printf("\nThe sum of array is: %i", sum(array, n));
}