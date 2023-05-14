// CODE 7: C program to write a function to get nth node in a Linked List

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

// returns nth node if found else NULL
node *nthnode(int n)
{
    node *ref = head;
    int count = 0;
    while (ref)
    {
        if (count == n)
            return ref;
        count++;
        ref = ref->next;
    }
    if (n >= count || n < 0)
        return NULL;
}

void main()
{
    append(2);
    append(4);
    append(16);
    append(256);
    append(65536);

    int pos = 0;
    node *n = nthnode(pos);

    if (n)
        printf("Node %i has value: %i", pos, n->data);
    else
        printf("No node present in position %i", pos);
}

// OUTPUT 1 {pos = -9}
// No node present in position -9

// OUTPUT 2 {pos = 3}
// Node 3 has value: 256

// OUTPUT 3 {pos = 9}
// No node present in position 9