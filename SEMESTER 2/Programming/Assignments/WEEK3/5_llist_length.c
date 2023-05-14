// CODE 5: C program to print the Length of a Linked List

#include <stdio.h>
#include <malloc.h>
#define createNode malloc(sizeof(node))

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head;

void append(int data)
{
    node *temp = createNode;
    temp->data = data;
    temp->next = NULL;

    if (head)
    {
        node *ref = head;
        while (ref->next)
            ref = ref->next;
        ref->next = temp;
    }
    else
        head = temp;
}

// recieves head of the linked list
int len(node *ref)
{
    int count = 0;
    while (ref)
    {
        count++;
        ref = ref->next;
    }
    return count;
    // traverse till ref hits last node then returns length
}

void main()
{
    append(50);
    append(80);
    append(90);
    append(60);
    append(20);

    printf("Length of the linked list is: %i", len(head));
}

// OUTPUT
// Length of the linked list is : 5