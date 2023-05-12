/* CODE 5:
Write a program in C to sort an array using Pointer

Sample Input 0
Input the number of elements to store in the array : 5
Input 5 number of elements in the array :
element - 1 : 25
element - 2 : 45
element - 3 : 89
element - 4 : 15
element - 5 : 82
 
Sample Output 0
The elements in the array after sorting:                                                                    
 element - 1 : 15                                                                                             
 element - 2 : 25                                                                                             
 element - 3 : 45                                                                                             
 element - 4 : 82                                                                                             
 element - 5 : 89  
*/

#include <stdio.h>
#include <malloc.h>

void swap(int *x, int *y)
{
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

void ssort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
            min = arr[min] > arr[j] ? j : min;
        min != i ? swap(arr + min, arr + i) : min;
    }
}

void main()
{
    int n;
    printf("Input the number of elements to store in the array : ");
    scanf("%i", &n);

    printf("Input %i number of elements in the array :\n", n);
    int *array = malloc(n * sizeof n);
    for (int i = 0; i < n;)
    {
        printf("element - %i : ", ++i);
        scanf("%i", &array[i - 1]);
    }

    ssort(array, n);   // SELECTION - SORTING - ARRAY

    printf("The elements in the array after sorting:");
    for (int i = 0; i < n;)
        printf("\n element - %i : %i", i, array[i++]);
}
