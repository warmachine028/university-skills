/* CODE 3:
Write a program in C to store n elements in an array and print the elements using pointer.


Sample Input 0
The number of elements to store in the array :5
5 number of elements in the array :
element - 0 : 8
element - 1 : 17
element - 2 : 21
element - 3 : 3
element - 4 : 29

Sample Output 0
The elements you entered are:                                                                               
 element - 0 : 8                                                                                              
 element - 1 : 17                                                                                              
 element - 2 : 21                                                                                              
 element - 3 : 3                                                                                              
 element - 4 : 29  



*/
#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("The number of elements to store in the array: ");
    scanf("%i", &n);
    printf("%i number of elements in the array :\n", n);

    int *array = malloc(n * sizeof n);
    for (int i = 0; i < n; i++)
    {
        printf("element - %i : ", i);
        scanf("%i", array + i);
    }
    printf("The elements you entered are:");
    for (int i = 0; i < n; i++)
        printf("\n element - %i : %i", i, array[i]);
}