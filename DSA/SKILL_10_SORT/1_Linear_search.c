/* CODE 1: 
WAP to implement Linear Search.
*/

#include <stdio.h>

int linsearch(long int item, long int *array, int size)
{
    int found = 0, pos = 0;

    while (pos < size && !found)
        array[pos] == item ? found++ : pos++;

    return found ? pos : -1;
}

void main()
{
    int len;
    long int item;
    scanf("%i %li", &len, &item);

    long int arr[len];
    for (int i = 0; i < len; i++)
        scanf("%i", &arr[i]);

    printf("%i", linsearch(item, arr, len));
}
