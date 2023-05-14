// CODE 3: A strict integer array is a fixed size array. If user attempts to store more elements than the array can actually accommodate then the array will start storing the new elements from the beginning. Suppose an array has size 10, then if user attempts to store 11th element, it will be stored in 1st position and so on. Write a C program to create a strict array of size 10. Read user given numbers to store in the array. User will decide the total number of inputs.

#include <stdio.h>

void main()
{
    int length = 10, count = 0;
    int arr[length];

    int input;
    for (int i = 0;; i++)
    {
        printf("Enter a number (or '-1' to exit): ");
        scanf("%i", &input);
        if (input == -1)
            break;
        
        i = i == length ? 0 : i;
        arr[i] = input;
        count++;
    }

    printf("The strict integer array is: [");
    count = count > length ? length : count;
    for (int i = 0; i < count; i++)
        printf("%i, ", arr[i]);
    printf("]");
}
