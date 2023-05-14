/* CODE 4:
Write a C program to declare a one-dimensional integer array of size 10. Read user given numbers to store in the array. Now read another number from the user and count the numberof occurrences of that number in the array.

Test Data:

Input:
Enter Array: 1 2 1 2 2 3 2 1
Enter Number: 2
Output:
Number 2 has appeared 4 times

*/
#include <stdio.h>

void main()
{
    int len = 10, value, occurence = 0;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter the integer %i: ", i);
        scanf("%i", &arr[i]);
    }

    printf("Enter the integer to count: ");
    scanf("%i", &value);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == value)
            occurence += 1;
    }

    printf("Number %i has apperared %i time(s).", value, occurence);
}