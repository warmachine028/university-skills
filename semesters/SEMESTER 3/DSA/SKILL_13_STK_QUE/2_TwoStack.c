// CODE 2: Write down a C program to implement multiple stacks.
#include <malloc.h>
#include <stdio.h>

typedef struct
{
    int capacity;
    int *array;
    int top1, top2;
} TwoStack;

TwoStack *create2Stack(int capacity)
{
    TwoStack *two_stack = malloc(sizeof(int));
    two_stack->capacity = capacity;
    two_stack->array = malloc(sizeof(int) * capacity);
    two_stack->top1 = 0;
    two_stack->top2 = capacity - 1;
    return two_stack;
}

int isFull(TwoStack *twoStack)
{
    return !(twoStack->top1 < twoStack->top2 + 1);
}

int isEmpty(TwoStack *twoStack, int n)
{
    return n == 1 ? !twoStack->top1 : twoStack->top2 == twoStack->capacity - 1;
}

int push(TwoStack *twoStack, int data, int n)
{
    if (isFull(twoStack))
        return -1;
    twoStack->array[n == 1 ? twoStack->top1++ : twoStack->top2--] = data;
    return 0;
}

int pop(TwoStack *twoStack, int n)
{
    if (isEmpty(twoStack, n))
        return -1;
    return twoStack->array[n == 1 ? --twoStack->top1 : ++twoStack->top2];
}

int peek(TwoStack *twoStack, int n)
{
    return isEmpty(twoStack, n) ? -1 : twoStack->array[n == 1 ? twoStack->top1 : twoStack->top2];
}

void print(TwoStack *twoStack)
{
    printf("Stack 1: ");
    if (isEmpty(twoStack, 1))
        printf("EMPTY\n");
    else
    {
        for (int i = 0; i < twoStack->top1 - 1; i++)
            printf("%i, ", twoStack->array[i]);
        printf("%i\n", twoStack->array[twoStack->top1 - 1]);
    }
    printf("Stack 2: ");
    if (isEmpty(twoStack, 2))
        printf("EMPTY\n");
    else
    {
        for (int i = twoStack->capacity - 1; i > twoStack->top2 + 1; i--)
            printf("%i, ", twoStack->array[i]);
        printf("%i\n", twoStack->array[twoStack->top2 + 1]);
    }
}