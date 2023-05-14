// CODE 2: Write a C program to declare a one-dimensional integer array of size ‘n’ where ‘n’ is user given. Read user given numbers to store in the array. Now read another number from the user and count the number of occurrences of that number in the array.


#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%i", &n);

    int arr[n];
    printf("Enter the elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%i", &arr[i]);

    int number;
    printf("Enter a number: ");
    scanf("%i", &number);

    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == number)
            count++;

    printf("'%i' occurred %i times.", number, count);
}
