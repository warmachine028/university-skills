// CODE 4: Given a singly linked list and a position, delete a linked list node at the given position.

#include <stdio.h>
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

void empty(node **head)
{   // **head : pointer pointing to head pointer
    // creating reference and next pointers
    node *ref = *head, *nxt;
    while (ref)
    {
        nxt = ref->next; // storing next adress
        free(ref);       // freeing occupied memory
        ref = nxt;       // reassigning nxt to ref
    }
    *head = NULL; // avoiding dangling pointer
}

void main()
{
    int pos;

    append(143);
    append(185);
    append(187);
    append(130);
    printf("The list: ");
    traverse();

    // freeing linked list
    empty(&head); // sending address of head pointer

    printf("\nThe list: ");
    traverse();
}

// OUTPUT
// The list: 143 185 187 130 
// The list: Linked list empty