// CODE 2: C program to convert infix expression to postfix

#include <stdio.h>
#include <string.h>
#include <malloc.h>

// A stack structure
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

int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// A utility function to return
// precedence of a given operator
// Higher returned value means
// higher precedence
int preceedence(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}


char infixToPostfix(char *expr)
{
    int n = strlen(expr);

    // creating a stack
    stack stk = {-1, n, malloc(sizeof(int) * n)};
    
    int k = -1;
    for (int i = 0; expr[i]; i++)
    {
        // If character is operand add to output.
        if (isOperand(expr[i]))
            expr[++k] = expr[i];

        // If character is ‘(’, push to stack.
        else if (expr[i] == '(')
            push(&stk, expr[i]);

        // If character is ‘)’, pop and output from the stack until ‘(‘ is found.
        else if (expr[i] == ')')
        {
            while (!isEmpty(&stk) && peek(&stk) != '(')
                expr[++k] = pop(&stk);

            if (!isEmpty(&stk) && peek(&stk) != '(')
                return -1; // invalid expression
            else
                pop(&stk);
        }

        else // an operator is encountered
        {
            while (!isEmpty(&stk) && preceedence(expr[i]) <= preceedence(peek(&stk)))
                expr[++k] = pop(&stk);
            push(&stk, expr[i]);
        }
    }

    // pop all the operators from the stack
    while (!isEmpty(&stk))
        expr[++k] = pop(&stk);

    expr[++k] = '\0';

    return *expr;
}

void main()
{
    // char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
    char exp[] = "A+b*3";
    infixToPostfix(exp);
    puts(exp);
}