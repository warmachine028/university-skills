//Code 1: Write a C program to take a user given year and verify if it is a leap year or not.

#include <stdio.h>

void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4)
    {
        printf("Year is not even divisible by 4...\n");
        printf("%d is'nt a leap year.", year);
    }
    else
    {
        printf("Year is divisible by 4.\n");
        if (year % 100)
        {
            printf("But year is not divisible by 100 !\n");
            printf("\nHence %d is a leap year.", year);
        }
        else
        {
            printf("Year is divisible by 100\n");
            if (year % 400)
            {
                printf("But year is not divisible by 400 !\n");
                printf("\nHence %d is'nt a leap year.", year);
            }
            else
            {
                printf("Year is divisible by 400 also.\n");
                printf("\nHence %d is a leap year.", year);
            }
        }
    }
}
