/* CODE 2: Write a C program to read ‘n’ numbers from user into an array where ‘n’ is user given. Now, input may contain numbers repeated multiple times. Find the unique numbers and store it in a separate array.

*/
#include <stdio.h>
#include <malloc.h>

void main()
{
    int n, index = 0;
    printf("Enter how many numbers: ");
    scanf("%i", &n);

    int *arr = malloc(sizeof(int) * n);
    int *uniqarr = malloc(sizeof(int) * n);

    printf("Enter the %i numbers\n", n);
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        int flag = 1;
        for (int j = 0; j < n; j++)
            if (uniqarr[j] == element)
                flag--;
        if (flag)
        {
            uniqarr[index] = element;
            index++;
        }
    }

    printf("The array with unique numbers is:\n");
    for (int i = 0; i < index; i++)
        printf("%i ", uniqarr[i]);
}
