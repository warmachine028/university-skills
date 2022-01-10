/* CODE 1: 
Write a program to find the sum and average of n number using pointer.

Input: Enter the size of n=5
Enter 5 number: 6, 4, 8, 10, and 12

Sample Output 0
Sum= 30; Average=6
*/

#include <stdio.h>
#include <malloc.h>

void main()
{
    int n, sum = 0;
    printf("Enter the size of n = ");
    scanf("%i", &n);

    int *array = malloc(n * sizeof n);

    printf("Enter the %i numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%i, ", &array[i]),
            sum += array[i];

    printf("Sum = %i; Average = %i", sum, sum / n);
}
