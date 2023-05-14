/*Code 6: A simple arithmetic calculator is capable of computing Addition, Subtraction, Division and Multiplication
operations on two operands (numbers). Write a C program to create a simple arithmetic calculator. The
program should take two numbers as input from user. It should produce the user options to select which
mathematical operation is to be performed on the numbers. The output should be the expected result after
performing the user selected operation on the user given numbers. (Hint. Use Switch Case)
Test Data:
Insert Numbers: 2 3
Select Operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
Select Option: 3
Result: 6
*/
//Code n:
#include <stdio.h>

void main()
{
    int choice, a, b;
    printf("Insert Numbers: ");
    scanf("%d%d", &a, &b);
    printf("Select Operation: ");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nSelect Option: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Result: %d", a + b);
            break;
        case 2:
            printf("Result: %d", a - b);
            break;
        case 3:
            printf("Result: %d", a * b);
            break;
        case 4:
            printf("Result: %.4f", (float)a / b);
            break;
        default:
            printf("Invalid Input");
    }
}
// Output 1:
// Insert Numbers: 45 667
// Select Operation: 
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// Select Option: 4
// Result: 0.0675

