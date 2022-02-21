/* CODE 5:
WAP to sort an array of given numbers using Insertion sort
*/

#include <stdio.h>

void isort(int *arr, int size)
{
    int key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        int j = i - 1;

        for (; j >= 0 && arr[j] > key; j--)
            arr[j + 1] = arr[j];
        arr[++j] = key;
    }
}

void main()
{
    int len;
    scanf("%i", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
        scanf("%i", &arr[i]);

    isort(arr, len);

    for (int i = 0; i < len; i++)
        printf("%i ", arr[i]);
}