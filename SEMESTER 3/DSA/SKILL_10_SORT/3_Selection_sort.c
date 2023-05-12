/* CODE 3:
WAP to sort an array of given numbers using selection sort method.

*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void ssort(int *arr, int size, int steps)
{
    for (int i = 0; i < size - 1 && i < steps; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[min])
                min = j;

        swap(&arr[min], &arr[i]);
    }
}

void main()
{
    int N, iterations;
    scanf("%i %i", &N, &iterations);
    int arr[N];
    for (int i = 0; i < N; i++)
        scanf("%i", &arr[i]);

    ssort(arr, N, iterations); // Selection SORT

    for (int i = 0; i < N; i++)
        printf("%i ", arr[i]);
}