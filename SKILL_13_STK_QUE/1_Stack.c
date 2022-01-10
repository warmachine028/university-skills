// CODE 1: Write a C program to implement stack using array.

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int capacity;
    int *array;
    int top;
} Stack;

Stack *createStack(int capacity)
{
    Stack *stack = malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->array = malloc(sizeof(int) * capacity);
    stack->top = 0;
    return stack;
}

int isFull(Stack *stack)
{
    return stack->top == stack->capacity;
}

int isEmpty(Stack *stack)
{
    return !stack->top;
}

int push(int num, Stack * stack)
{
    if (isFull(stack))
        return -1;
    stack->array[stack->top++] = num;
    return 0;
}

int pop(Stack *stack)
{
    if (isEmpty(stack))
        return -1;
    return stack->array[--stack->top];
}

int peek(Stack *stack)
{
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top - 1];
}

void print(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("STACK EMPTY\n");
        return;
    }
    for (int i = 0; i < stack->top - 1; i++)
        printf("%i, ", stack->array[i]);
    printf("%i\n", stack->array[stack->top - 1]);
}

