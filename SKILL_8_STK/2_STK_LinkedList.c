/* CODE 2:
Write a C Program to implement Stack using Linked List with Following Menu.
i.	Push
ii.	Pop (Display "Stack is Empty" if stack is empty).
iii.Display Stack Top (Display "Stack is Empty" if stack is empty).
iv.	Exit

*/

#include <stdio.h>
#include <malloc.h>
#define createNode malloc(sizeof(node))

typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct
{
    int MAX, TOP;
    node *head, *tail;
} stack;

stack *createStack(int capacity)
{
    stack *stk = malloc(sizeof(stack));
    stk->MAX = capacity;
    stk->TOP = -1;
    stk->head = NULL;
    stk->tail = NULL;
    return stk;
}

void push(stack *stk)
{
    if (stk->TOP == stk->MAX - 1)
        return;
    node *temp = createNode;
    temp->next = NULL;
    scanf("%i", &temp->data);
    if (stk->tail)
        stk->tail->next = temp;
    else
        stk->head = temp;
    stk->tail = temp;
    stk->TOP++;
}

void pop(stack *stk)
{
    if (stk->head == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }
    if (stk->head->next)
    {
        node *ref = stk->head, *prev;
        while (ref->next)
            prev = ref,
            ref = ref->next;
        prev->next = NULL;
        stk->tail = prev;
    }
    else
        stk->head = NULL;
    stk->TOP--;
}

void peek(stack *stk)
{
    if (stk->head == NULL)
        printf("Stack is Empty\n");
    else
        printf("->%i\n", stk->tail->data);
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