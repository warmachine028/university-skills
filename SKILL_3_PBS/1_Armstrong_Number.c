/* CODE 1: 
C program to find Armstrong numbers between 1 to n

Input
Enter lower limit: 1
Enter upper limit: 1000

Output
Armstrong numbers between 1 and 1000 are:
1, 2, 3, 4, 5, 6, 7, 8, 9, 370, 371, 407
*/
#include <stdio.h>
#include <malloc.h>
#include <math.h>

int len(int n)
{
    int sum = 0;
    for (; n; n /= 10, sum++);
    return sum;
}

int *split(int n, int size)
{
    int *arr = malloc(sizeof(n) * size);
    for (int i = size - 1; i >= 0; i--, n /= 10)
        arr[i] = n % 10;

    return arr;
}

int armstrong(int n)
{
    int size = len(n);
    int *arr = split(n, size);
    float sum = 0;
    for (int i = 0; i < size; i++)
        sum += pow(arr[i], size);
    return n == (int)sum;
}

void main()
{
    int ll, ul;
    printf("Enter lower limit: ");
    scanf("%i", &ll);
    printf("Enter upper limit: ");
    scanf("%i", &ul);

    printf("Armstrong numbers between %i and %i are:\n", ll, ul);
    for (ll; ll <= ul; ll++)
        if (armstrong(ll))
            printf("%i, ", ll);
}