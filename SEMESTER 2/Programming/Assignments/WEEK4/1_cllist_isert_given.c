// CODE 1: C program to Insert after a given element of a circular linked list

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

void insertafter(int element, int data)
{
    int found = 0;

    // do nothing if linked list is empty
    if (isEmpty)
        printf("\nLinked list Empty.");
    else
    {
        node *ref = tail->next;
        // traverse till node is found
        do
        {
            if (ref->data == element)
            {
                found++;
                break;
            }
            ref = ref->next;
        } while (ref != tail->next);

        // node present
        if (found)
        {
            node *temp = createNode;
            temp->data = data;
            temp->next = ref->next;
            ref->next = temp;

            // if found node is last node
            // insert after tail and init tail to temp
            if (ref == tail)
                tail = temp;
        }
        // node absent
        else
            printf("\nElement not found");
    }

    if (found)
        printf("\n%i successfully inserted after %i", data, element);
    else
        printf("\nCan't insert data");
}

void traverse()
{
    printf("\nThe linked list: ");
    if (isEmpty)
        printf("\nLinked list Empty");
    else
    {
        node *ref = tail->next;
        while (1)
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
    append(4);
    append(5);
    append(6);

    traverse();

    // given element = 3
    insertafter(3, 8);
    printf("\n");

    // given element = 9
    insertafter(9, 78);
    printf("\n");

    // given element = 8
    insertafter(8, 99);
    traverse();
}

// OUTPUT
// The linked list: 3 4 5 6
// 8 successfully inserted after 3

// Element not found
// Can't insert data

// 99 successfully inserted after 8
// The linked list: 3 8 99 4 5 6