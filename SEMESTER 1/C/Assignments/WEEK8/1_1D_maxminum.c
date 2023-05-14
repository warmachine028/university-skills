/* CODE 1:
Write a C program to declare a one-dimensional integer array of size 10. Read user given numbers to store in the array. Now print the maximum and minimum of the numbers stored in the array.

*/
#include <stdio.h>

void main()
{
    int len = 10, sum = 0;
    int arr[len];
    int min = 0, max = 0;

    for (int i = 0; i < len; i++)
    {
        printf("Enter the integer %i: ", i);
        scanf("%i", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("The minimum value in the array is %i . \n", min);
    printf("The maximum value in the array is %i .", max);

}