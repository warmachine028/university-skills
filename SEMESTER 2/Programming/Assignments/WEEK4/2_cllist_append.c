// CODE 2: C program to Insert at the end of a circular linked list

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

int append(int data)
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

void traverse()
{
    printf("The linked list: ");
    if (isEmpty)
        printf("\nLinked list Empty");
    else
    {
        for (node *ref = tail->next;;)
        {
            printf("%i ", ref->data);
            ref = ref->next;
            if (ref == tail->next)
                break;
        }
    }
}

void main()
{
    append(3);
    append(7);
    append(8);
    append(9);
    append(10);
    traverse();
}

// OUTPUT:
// The linked list : 3 7 8 9 10