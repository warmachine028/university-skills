// CODE 6: C program to delete a element from a Doubly Linked List

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

node *head;

void append(int data)
{
    node *temp = createNode;
    temp->next = NULL;
    temp->data = data;
    temp->prev = NULL;

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

void deleteany(int pos)
{
    node *del;
    if (isEmpty)
        printf("Linked list Empty.");
    else if (pos < 0)
        printf("Can't delete in negative Position");
    else if (pos == 0)
    {
        del = head;
        if (head->next)
            head = head->next,
            head->prev = NULL;
        else
            head = NULL;
        free(del);
    }

    else
    {
        int count = 0;
        node *ref = head;
        while (ref->next && count < pos)
            ref = ref->next,
            count++;
        if (pos > count)
            printf("Size exceeded can't delete.");
        else
        {
            del = ref;
            ref->prev->next = ref->next;
            if (ref->next)
                ref->next->prev = ref->prev;
            free(del);
        }
    }
}

void traverse()
{
    if (isEmpty)
        printf("\nLinked list Empty");
    else
        for (node *ref = head; ref; ref = ref->next)
            printf("%i ", ref->data);
}

void main()
{
    append(12);
    append(13);
    append(18);
    append(19);
    append(16);
    traverse();
    
    printf("\n");
    deleteany(0);

    printf("\n");
    traverse();
}
// OUTPUT
// 12 13 18 19 16 

// 13 18 19 16