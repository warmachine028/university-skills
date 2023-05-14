// CODE 3: C program for Infix to postfix conversion using stack

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <malloc.h>

// Stack type
typedef struct
{
    int top;
    int MAX;
    int *array;
} stack;

int isEmpty(stack *stk)
{
    return stk->top == -1;
}

char peek(stack *stk)
{
    return stk->array[stk->top];
}

char pop(stack *stk)
{
    if (!isEmpty(stk))
        return stk->array[stk->top--];
    return '$';
}

void push(stack *stk, char op)
{
    stk->array[++stk->top] = op;
}

int evalPostfix(char *expr)
{
    int n = strlen(expr);

    // creating a stack
    stack stk = {-1, n, malloc(sizeof(int) * n)};

    for (int i = 0; expr[i]; i++)
    {
        // If character is number, push it to the stack.
        if (isdigit(expr[i]))
            push(&stk, expr[i] - '0');

        // If character is operator, pop two elements from stack apply the operator
        else
        {
            int val1 = pop(&stk);
            int val2 = pop(&stk);
            switch (expr[i])
            {
            case '+':
                push(&stk, val2 + val1);
                break;
            case '-':
                push(&stk, val2 - val1);
                break;
            case '*':
                push(&stk, val2 * val1);
                break;
            case '/':
                push(&stk, val2 / val1);
            }
        }
    }
    return pop(&stk);
}

void main()
{
    char exp[] = "231*+9-";
    evalPostfix(exp);
    printf("\npostfix evaluation: %i", evalPostfix(exp));
}