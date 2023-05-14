// CODE 3: C program to write a function to delete a first element from a circular Linked List

#include <stdio.h>
#include <malloc.h>

#define createNode malloc(sizeof(node))
#define isEmpty tail ? 0 : 1

typedef struct node
{
    int data;
    struct node *next;
} node;

node *tail;

void append(int data)
{
    node *temp = createNode;
    temp->data = data;

    if (isEmpty)
        tail = temp,
        tail->next = tail;
    else
        temp->next = tail->next,
        tail->next = temp,
        tail = temp;
}

void poptop()
{
    if (isEmpty)
        printf("Linked list Empty");
    else
    {
        node *ref = tail->next;
        node *del = ref;
        if (ref->next == ref)
            tail = NULL;
        else
            ref = ref->next,
            tail->next = ref;
        printf("Node with data %i deleted from beginning", del->data);
        free(del);
    }
}

void traverse()
{
    printf("\nThe linked list: ");
    if (isEmpty)
        printf("Linked list Empty");
    else
    {
        for (node *ref = tail->next;;)
        {
            printf("%i ", ref->data);
            ref = ref->next;
            if (ref == tail->next)
                break;
        }
    }
}

void main()
{
    append(3);
    append(4);
    append(5);
    poptop();
    traverse();
}

// OUTPUT
// Node with data 3 deleted from beginning
// The linked list : 4 5