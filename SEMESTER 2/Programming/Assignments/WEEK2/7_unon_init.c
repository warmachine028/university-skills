// CODE 7: Write a C program to declare, initialize an union in C programming languages.

#include <stdio.h>
#include <string.h>

// creation
typedef union
{
    int empno;
    char name[30];
    float basicpay;
} emp;

void main()
{
    // declaration
    emp emp1;

    // initialization
    emp1.empno = 4328;
    strcpy(emp1.name, "Vinay Prasad");
    emp1.basicpay = 30000.0f;

    // members get overwritten by last declaration on the same memory location
    printf("%i\n", emp1.empno);
    printf("%s\n", emp1.name);
    printf("%.2f", emp1.basicpay);
}

// OUTPUT
// 1189765120 <- As we can see that the previous data's got corrupted
//            <- because the memory location got overwritten 
// 30000.00   <- by this latest declaration of member var.