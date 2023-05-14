/* CODE 2: 
Write a C program to declare a one-dimensional integer array of size 10. Read user given numbers to store in the array. Now read another number from the user and check whether that number is present in the array or not. If present, print the index position of the element. Otherwise print “Not Present”

*/
#include <stdio.h>

void main()
{
    int len = 10, flag = 0, value = 0;
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        printf("Enter the integer %i: ", i);
        scanf("%i", &arr[i]);
    }

    printf("Now enter the integer to find: ");
    scanf("%i", &value);

    for (int i = 0; i < len; i++)
    {
        if (value == arr[i])
        {
            printf("Element found at position %i of the array.", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Not Present");
}