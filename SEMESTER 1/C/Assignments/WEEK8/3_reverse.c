/* CODE 3:
Write a C program to declare a one-dimensional integer array of size 10. Read user given numbers to store in the array. Now create another array of same size and store the elements in the reverse order.

Test Data:
Input: 2 4 5 7 8
Output: 8 7 5 4 2
*/
#include <stdio.h>

void main()
{
    int len = 10, sum = 0;
    int arr1[len], arr2[len];
    
    for (int i = 0; i < len; i++)
    {
        printf("Enter the integer %i: ", i);
        scanf("%i", &arr1[i]);
        arr2[len-i-1] = arr1[i];
    }


    printf("\n{");

    for (int i = 0; i < len; i++)
        printf("%i ,", arr2[i]);

    printf("} ");
}