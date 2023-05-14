// CODE 5: C program to create and insert element in a Doubly Linked List. Perform traversal in forward and reverse direction and print the elements.

#include <stdio.h>
#include <malloc.h>

#define createNode malloc(sizeof(node))
#define isEmpty head ? 0 : 1

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
} node;

node *head, *tail;

void append(int data)
{
    node *temp = createNode;

    temp->prev = NULL;
    temp->data = data;
    temp->next = NULL;
    tail = temp;

    if (isEmpty)
        head = temp;
    else
    {
        node *ref = head;
        while (ref->next)
            ref = ref->next;
        ref->next = temp;
        temp->prev = ref;
    }
}

void traverse()
{
    if (isEmpty)
        printf("Linked list Empty");
    else
        for (node *ref = head; ref;)
        {
            printf("%i ", ref->data);
            ref = ref->next;
        }
}

void reverse()
{
    if (isEmpty)
        printf("Linked list Empty");
    else
        for (node *ref = tail; ref;)
        {
            printf("%i ", ref->data);
            ref = ref->prev;
        }
}

void main()
{
    append(10);
    append(11);
    append(12);
    append(13);
    append(14);
    printf("\nLinked list (fwd): ");
    traverse();
    printf("\nLinked list (rev): ");
    reverse();
}

// OUTPUT
// Linked list (fwd): 10 11 12 13 14 
// Linked list (rev): 14 13 12 11 10