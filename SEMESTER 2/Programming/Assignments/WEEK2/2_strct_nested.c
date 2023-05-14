// CODE 2: Write a C program to demonstrate example of nested structure. Create a structure dateOfBirth which will be declared inside the structure student.

#include <stdio.h>
#define MAX_NAME 100

typedef struct
{
    char name[MAX_NAME];
    int roll_no;
    long long enrollment_no;

    // nested structure
    struct dateOfBirth
    {
        int dd;
        int mm;
        int yy;
    } DOB;
} record;

void main()
{
    record stud1;

    printf("Enter student details below\n");
    printf("Name: ");
    gets(stud1.name);
    printf("Roll No.: ");
    scanf("%i", &stud1.roll_no);
    printf("Enrollment No.: ");
    scanf("%lli", &stud1.enrollment_no);

    // initialization of nested struct
    printf("Date of birth (dd/mm/yy): ");
    scanf("%i/%i/%i", &stud1.DOB.dd, &stud1.DOB.mm, &stud1.DOB.yy);

    // displaying
    printf("\nStudent details:\n");
    printf("Name: %s\n", stud1.name);
    printf("Roll No.: %i\n", stud1.roll_no);
    printf("Enrollment No.: %lli\n", stud1.enrollment_no);
    printf("Date of Birth: %i/%i/%i\n", stud1.DOB.dd, stud1.DOB.mm, stud1.DOB.yy);
}

// OUTPUT
// Enter student details below
// Name: Pritam Kundu
// Roll No.: 80
// Enrollment No.: 12020009001101
// Date of birth (dd/mm/yy): 15/03/2002

// Student details:
// Name: Pritam Kundu
// Roll No.: 80
// Enrollment No.: 12020009001101
// Date of Birth: 15/3/2002