/* CODE 4:
WAP to sort an array of given numbers using bubble sort method.
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    *b += *a;
    *a = *b - *a;
    *b -= *a;
}

int bsort(int *arr, int size)
{
    int swap_no = 0;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swap_no++;
            }
    return swap_no;
}

void main()
{
    int len;
    scanf("%i", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
        scanf("%i", &arr[i]);

    printf("%i", bsort(arr, len)); //Bubble SORT
}
