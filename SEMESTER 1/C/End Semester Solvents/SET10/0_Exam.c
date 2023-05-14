// CODE 0: Write a C program to read ‘n’ numbers from user into an array where ‘n’ is user given. Print the difference of the sum of positive and sum of negative numbers.


#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%i", &n);

    int sum1 = 0, sum2 = 0;
    int *arr = malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %i: ", i);
        scanf("%i", &arr[i]);

        arr[i] > 0 ? sum1 += arr[i] : (sum2 += arr[i]);
    }
    
    int difference = sum2 - sum1 >= 0 ? sum2 - sum1 : sum1 - sum2;
    printf("The difference of sums of +ve & -ve numbers is: %i", difference);
}
