/* CODE 5:
Write a C program to declare a one-dimensional integer array of size 10. Read user given numbers to store in the array. Now check and replace all the elements of the array by the absolute value of individual numbers.

Test Data:
Input: 5 -2 6 -1 0 5
Output: 5 2 6 1 0 5

*/

#include <stdio.h>

void main()
{
    int len = 10;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Enter the integer %i: ", i);
        scanf("%i", &arr[i]);
        arr[i] = arr[i] < 0 ? -arr[i] : arr[i];
    }
    printf("{");
    for (int i = 0; i < len - 1; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("%i", arr[len-1]);
    printf("}");
}