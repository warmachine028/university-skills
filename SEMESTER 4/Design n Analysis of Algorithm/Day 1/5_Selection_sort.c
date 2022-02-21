// CODE 4: Consider an Array a of size N Iterate from 1 to N In ith iteration select the i th minimum and swap it with a[i]
// You are given an array a, size of the array N and an integer x.Follow the above algorithm and print the state of the array after x iterations have been performed.

#include <stdio.h>
#include <malloc.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ssort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int selection = arr[i];
        int position = i;

        // select minimum most
        for (int j = position + 1; j < n; j++)
            (selection > arr[j]) && (position = j);

        swap(&arr[position], &arr[i]); // swap
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    ssort(arr, n);
    // OUTPUT:
    for (int i = 0; i < n; i++)
        printf("%i ", arr[i]);

    return 0;
}