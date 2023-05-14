/*Code 4:
5. The following Grading system is used to calculate the grades obtained by a student in a paper at UEM,
Kolkata:

Marks Grade
>=90 O
>=80 E
>=70 A
>=60 B
>=50 C
>=40 D
<40 F

Write a C program to take marks obtained by a student as input and print the Grade as per the Grading
system.
Test Data:
Insert Marks: 89
Grade: E
*/

#include <stdio.h>

void main()
{
    int marks;
    printf("Insert Marks: ");
    scanf("%i", &marks);

    if (marks>=90)
        printf("Grade: O");
    else if (marks>=80)
        printf("Grade: E");
    else if (marks>=70)
        printf("Grade: A");
    else if (marks>=60)
        printf("Grade: B");
    else if (marks>=50)
        printf("Grade: C");
    else if (marks>=40)
        printf("Grade: D");
    else
        printf("Grade: F");
}

//Output 1:
// Insert Marks: 89
// Grade: E

//Output 2:
// Insert Marks: 23
// Grade: F