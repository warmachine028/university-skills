// CODE 1: Write a C program to read employee details like name, employee id and salary using structure and then print the entered values.

#include <stdio.h>
#include <malloc.h>
#define MAX_NAME 100

typedef struct
{
    char name[MAX_NAME];
    int empid;
    float salary;
} employee;

void main()
{
    employee emp1;
    
    printf("Input details below\n");
    printf("employee_name: ");
    gets(emp1.name);
    printf("employee_ID: ");
    scanf("%i", &emp1.empid);
    printf("salary: ");
    scanf("%f", &emp1.salary);

    // displaying details
    printf("\nEmployee Details: \n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %i\n", emp1.empid);
    printf("Salary: %.2f\n", emp1.salary);
}

OUTPUT
Input details below
employee_name: Vinay Prasad
employee_ID: 1233
salary: 120000

Employee Details:
Name: Vinay Prasad
ID: 1233
Salary: 120000.00
