// CODE 1: Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now read another number from the user and check whether that number is present in the array or not. If present, print the index position of the element. Otherwise print “Not Present”.


#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter thes size of the 1D array: ");
    scanf("%i", &n);

    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %i: ", i);
        scanf("%i", &arr[i]);
    }

    int find;
    printf("Enter the element to find: ");
    scanf("%i", &find);

    int flag = 0, i = 0;
    for (i; i < n; i++)
        if (arr[i] == find)
        {
            flag++;
            break;
        }
    
    if (flag)
        printf("'%i' found at %i", find, i);
    else
        printf("Not Present");
}
