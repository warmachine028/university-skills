// CODE 0: Write a C program to create, declare and initialize structure.

#include <stdio.h>

// creation
typedef struct
{
    int empno;
    char *name;
    float basicpay;
}employee;

void main()
{
    // declaration
    employee emp1;

    // initialization
    emp1.empno = 4328;
    emp1.name = "Vinay Prasad";
    emp1.basicpay = 30000.0f;
}
