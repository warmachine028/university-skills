// CODE 0: A one-dimensional array of numbers contains all numbers between 1 and 100 in a jumbled order. The length of the array is 100. One of the numbers is missing and in place of that one number is repeated. Write a C program to find the missing number and the number that is repeated twice. Use a single array in your program.


#include <stdio.h>

int checktwice(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i, count = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;

            if (count > 1)
            {
                return arr[i];
                break;
            }
        }
}

int missing(int *arr, int n)
{
    for (int i = 1; i <= n; i++)
    {
        int failed = 1;
        for (int j = 0; j < n; j++)
            if (i == arr[j])
            {
                failed--;
                break;
            }
        if (failed)
            return i;
    }
}

void main()
{
    //  Tested for 10 elements:
    int arr[] = {1, 4, 5, 6, 7, 9, 2, 3, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Missing: %i\n", missing(arr, size));
    printf("Repeated Twice: %i", checktwice(arr, size));
    
}
