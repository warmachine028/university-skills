// CODE 4: C program to write a function to delete the last element from a circular Linked List

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

void pop()
{
    if (isEmpty)
        printf("\nLinked list Empty");
    else
    {
        node *ref = tail->next;
        node *del = ref;
        if (ref->next == ref)
            tail = NULL;
        else
        {
            while (ref->next != tail)
                ref = ref->next;
            del = tail;
            ref->next = tail->next;
            tail = ref;
        }
        printf("\n%i deleted from list.", del->data);
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
    append(3);
    append(4);
    append(5);
    traverse();
    pop();
    traverse();
}

// OUTPUT
// The linked list: 3 4 5
// 5 deleted from list. 
// The linked list : 3 4