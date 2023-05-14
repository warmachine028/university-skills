// CODE 2: Write a C program to read ‘n’ numbers from user into an array where ‘n’ is user given. Now, input may contain numbers repeated multiple times. Find the unique numbers and store it in a separate array.

#include <stdio.h>
#include <malloc.h>

void main()
{
    int n;
    printf("Enter how many integers: ");
    scanf("%i", &n);

    int *arr = malloc(sizeof(int) * n);
    int *uniqarr = malloc(sizeof(int) * n);
    
    int unindx = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %i integer: ", i);
        scanf("%i", &arr[i]);

        int unique = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] == uniqarr[j])
                unique--;

        if (unique)
        {
            uniqarr[unindx] = arr[i];
            unindx++;
        }
    }

    printf("The array with unique integers: ");
    for (int i = 0; i < unindx; i++)
        printf("%i, ", uniqarr[i]);
}
