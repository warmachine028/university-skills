// CODE 2: C program to Insert in linked list,

#include <stdio.h>
#include <malloc.h>
#define createNode malloc(sizeof(node))

typedef struct node
{
    int data;
    struct node *next;
} node;

// global: head pointer
node *head;

// appending a node
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
    // checks if head is present
    if (head)
        for (node *ref = head; ref; ref = ref->next)
            printf("%i ", ref->data);
    // absent head : empty linked list
    else
        printf("Linked list empty");
}

void main()
{

    // appending datas
    append(1);
    append(10);
    append(100);
    append(1000);
    append(10000);

    // displaying
    printf("The linked list is: ");
    traverse();
}

// OUTPUT
// The linked list is : 1 10 100 1000 10000