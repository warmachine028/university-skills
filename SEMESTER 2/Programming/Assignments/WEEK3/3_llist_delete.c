// CODE 3: Given a singly linked list and a position, delete a linked list node at the given position.

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

void traverse()
{
    if (head)
        for (node *ref = head; ref; ref = ref->next)
            printf("%i ", ref->data);
    else
        printf("Linked list empty");
}

void pop(int pos)
{
    node *del; // store del pointer
    
    // cant perform operation if list is already empty
    if (head == NULL)
        printf("\nLinked list empty\n");

    // deletes 0th element if pos <= 0
    else if (pos <= 0)
    {
        del = head;
        head = head->next;
        printf("\nNode deleted from position %i.\n", 0);
    }
    
    // for other conditions
    else
    {
        // reference pointer and previous pointer
        node *ref = head, *prev;
        int count = 0;

        // loop till next of ref next hits NULL
        while (ref->next)
        {
            prev = ref; // storing previous node
            ref = ref->next;
            count++;
        }

        // cant perfrom if position exceeds last index
        if (pos > count)
            printf("\nPosition exceeded, can't delete.\n");

        // deleting at specific location  
        else
        {
            del = ref;
            prev->next = ref->next;
            ref = NULL; // avoiding dangling pointers
            printf("\nNode deleted from position %i.\n", pos);
        }
    }
    free(del); // freeing the memory location
}

void main()
{
    append(3);
    append(5);
    append(6);
    append(7);
    append(8);

    printf("Linked list initially: ");
    traverse();  // given list
    int pos = 3; // given position

    pop(pos);
    printf("\nLinked list finally: ");
    traverse();
}

// OUTPUT 1 {pos = 0} 
// Linked list initially: 3 5 6 7 8 
// Node deleted from position 0.

// Linked list finally: 5 6 7 8

// OUTPUT 2 {pos = 3}
// Linked list initially: 3 5 6 7 8 
// Node deleted from position 3.

// Linked list finally: 3 5 6 8

// OUTPUT 3 {pos = 5}
// Linked list initially: 3 5 6 7 8 
// Position exceeded, can't delete.

// Linked list finally: 3 5 6 7 8
