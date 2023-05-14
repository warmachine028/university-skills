// CODE 4: Write a C program to create a structure named student having two arrays name and marks, name is the character array of 30 characters and marks is the integer array of 5 integers. Name will store the name of the student and marks will store the marks of 5 subjects. Display the total and percentage obtained.

#include <stdio.h>
#define MAX_NAME 30
#define subjects 5

typedef struct
{
    char name[MAX_NAME];
    int marks[subjects];
} student;

void main()
{
    student s1;

    printf("Enter name: ");
    gets(s1.name);

    int total = 0;
    printf("Enter the marks (%i subjects): ", subjects);
    for (int i = 0; i < subjects; i++)
        scanf("%i", &s1.marks[i]),
            total += s1.marks[i];

    printf("TOTAL: %i\n", total);
    printf("PERCENTAGE: %.2f", (float)total / subjects);
}

// OUTPUT 
// Enter name: Pritam Kundu
// Enter the marks (5 subjects): 56 78 90 99 58
// TOTAL: 381
// PERCENTAGE: 76.20