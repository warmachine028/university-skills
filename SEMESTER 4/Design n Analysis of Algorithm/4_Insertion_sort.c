// CODE 4: You have been given an A array consisting of N integers. All the elements in this array are guaranteed to be unique. For each position i in the array A you need to find the position A[i] should be present in, if the array was a sorted array. You need to find this for each i and print the resulting solution.

#include <stdio.h>
#include <malloc.h>

void isort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int position = i;
        int value = arr[position];

        // find position
        while (position > 0 && arr[position - 1] > value)
            arr[position] = arr[position - 1], position--;
        arr[position] = arr[i]; // insert
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0, i < n; i++)
        scanf("%i", &arr[i]);

    isort(arr, n);

    for (int i = 0, i < n; i++)
        printf("%i ", arr[i]);
}