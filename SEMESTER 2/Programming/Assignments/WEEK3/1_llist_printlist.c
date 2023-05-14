// CODE 1: C program to write a general-purpose function printList() that prints any given list.

#include <stdio.h>
#include <malloc.h>
#define createNode malloc(sizeof(node))

typedef struct node
{
    int data;
    struct node *next;
} node;

// printing a linked list
void printList(node *ref)
{
    // print till reference ptr hits NULL 
    for (ref; ref; ref = ref->next)
        printf("%i ", ref->data);
}

void main()
{
    // creating nodes
    node *node0 = createNode;
    node *node1 = createNode;
    node *node2 = createNode;

    node *head = node0;

    // Initializing node 0
    node0->data = 12;
    node0->next = node1;

    // Initializing node 1
    node1->data = 25;
    node1->next = node2;

    // Initializing node 2
    node2->data = 90;
    node2->next = NULL;

    printf("The linked list is: ");
    printList(head);
}

// OUTPUT
// The linked list is : 12 25 90