/* CODE 1:
Write a C program for array implementation of Stack
i.	Push
ii.	Pop (Dislpay "Stack is Empty" if stack is empty).
iii.Display Stack Top (Dislpay "Stack is Empty" if stack is empty).
iv.	Exit
*/

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int MAX;
    int TOP;
    int *array;
} stack;

int isEmpty(stack *stk)
{
    return stk->TOP < 0;
}

int isFull(stack *stk)
{
    return stk->TOP > stk->MAX - 1;
}

stack *createStack(int capacity)
{
    stack *stk = malloc(sizeof(stack));
    stk->MAX = capacity;
    stk->TOP = -1;
    stk->array = malloc(sizeof(int) * capacity);
    return stk;
}

void push(stack *stk)
{
    if (isFull(stk))
        return;
    int data;
    scanf("%i", &data);
    stk->array[++stk->TOP] = data;
}

void pop(stack *stk)
{
    if (isEmpty(stk))
    {
        printf("Stack is Empty\n");
        return;
    }
    stk->TOP--;
}

void peek(stack *stk)
{
    if (isEmpty(stk))
    {
        printf("Stack is Empty\n");
        return;
    }
    printf("-> %i\n", stk->array[stk->TOP]);
}

void main()
{
    int SIZE, choice = 1;
    printf("Enter the stack size: ");
    scanf("%i", &SIZE);

    stack *stk = createStack(SIZE);

    while (choice > 0 && choice < 4)
    {
        scanf("%i", &choice);
        switch (choice)
        {
        case 1: // Push
            push(stk);
            break;
        case 2: // Pop
            pop(stk);
            break;
        case 3: // Display Top
            peek(stk);
            break;
        default: // Exit
            break;
        }
    }
}