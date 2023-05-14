// CODE 0: C program to Insert in beginning of a circular linked list

#include <stdio.h>
#include <malloc.h>
#define createNode malloc(sizeof(node))

// returns 1 if tail is NULL else 0
#define isEmpty tail ? 0 : 1

typedef struct node
{
    int data;
    struct node *next;
} node;

// last element of cll
node *tail;

// optimised insertion in a cll
void push(int data)
{
    node *temp = createNode;
    temp->data = data;

    if (isEmpty)
        tail = temp,
        tail->next = tail;
    else
        temp->next = tail->next,
        tail->next = temp;
}

void traverse()
{
    if (isEmpty)
        printf("Linked list Empty");
    else
    {
        node *ref = tail->next;
        do
        {
            printf("%i ", ref->data);
            ref = ref->next;
        } while (ref != tail->next);
    }
}

void main()
{
    push(3);
    push(5);
    push(6);
    push(7);
    push(8);

    printf("The linked list: ");
    traverse();
}

// OUTPUT:
// The linked list: 8 7 6 5 3