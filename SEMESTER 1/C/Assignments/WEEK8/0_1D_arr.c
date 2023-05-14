/* CODE 0:
Write a C program to declare a one-dimensional integer array of size 10. Read user given numbers to store in the array. Find the sum of the elements of the array

*/
#include <stdio.h>

void main()
{
    int len = 10, sum = 0;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter the integer %i: ", i);
        scanf("%i", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of %i elements of the array is: %i", len, sum);
}