// CODE 0: C program to Push Pop operations on stack.

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int MAX;
    int top;
    int *array;
} stack;

stack createStack(int capacity)
{
    stack stk;
    stk.MAX = capacity;
    stk.top = -1;
    stk.array = malloc(sizeof(int) * capacity);
    return stk;
}

int isEmpty(stack *stk)
{
    return stk->top < 0;
}

int isFull(stack *stk)
{
    return stk->top > stk->MAX - 1;
}

void push(stack *stk, int data)
{
    if (isFull(stk))
        printf("\nSTACK OVERFLOW");
    else
        stk->array[++stk->top] = data,
        printf("\n%i pushed into stack", data);
}

int pop(stack *stk)
{
    if (isEmpty(stk))
        printf("\nSTACK UNDERFLOW");
    else
    {
        int data = stk->array[stk->top--];
        printf("\n%i popped from stack", data);
        return data;
    }
}

int peek(stack *stk)
{
    if (isEmpty(stk))
        printf("\nSTACK EMPTY");
    else
    {
        int data = stk->array[stk->top];
        printf("\nTOP -> %i", data);
        return data;
    }
}

void display(stack *stk)
{
    if (isEmpty(stk))
        printf("STACK EMPTY");
    else
    {
        printf("\nSTACK: ");
        for (int i = 0; i <= stk->top; i++)
            printf("%i ", stk->array[i]);
    }
}

void main()
{
    int max;
    printf("Enter maximum capacity of stack: ");
    scanf("%i", &max);

    stack stk = createStack(--max);

    int choice;
    while (choice)
    {
        printf("\n_OPTIONS_");
        printf("\n0. EXIT");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. PEEK");
        printf("\n4. DISPLAY\n");

        printf("\nEnter your choice: ");
        scanf("%i", &choice);

        while (choice < 0 || choice > 4)
        {
            printf("\nInvalid Choice. Try Again: ");
            scanf("%i", choice);
        }

        int data;
        switch (choice)
        {
        case 0: // EXIT
            printf("Exitting");
            break;
        case 1: // PUSH
            printf("Enter data: ");
            scanf("%i", &data);
            push(&stk, data);
            break;
        case 2: // POP
            pop(&stk);
            break;
        case 3: // PEEK
            peek(&stk);
            break;
        case 4: // DISPLAY
            display(&stk);
        default:
            break;
        }
    }
}
