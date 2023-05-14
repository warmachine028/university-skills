// CODE 6: C program to search an element in a Linked List

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

int len()
{
    node *ref = head;
    int count = 0;

    while (ref)
    {
        count++;
        ref = ref->next;
    }
    return count;
}

// returns position of element or -1
int search(int data)
{
    node *temp = head;
    int pos = 0;
    while (temp)
    {
        if (temp->data == data)
            break;
        temp = temp->next;
        pos++;
    }

    // return -1 if pos exceeds length of list
    return pos == len() ? -1 : pos;
}

void main()
{
    append(30);
    append(40);
    append(50);
    append(60);
    append(70);

    // taking user input
    int item;
    printf("Enter the item: ");
    scanf("%i", &item);

    int result = search(item);
    
    // positive result indicates item found
    if (result >= 0)
        printf("%i found at position %i.", item, result);
    // else negative result indicates absent item
    else
        printf("%i not found.", item);
}

// OUTPUT 1
// Enter the item: 30
// 30 found at position 0.

// OUTPUT 2
// Enter the item: 70
// 70 found at position 4.

// OUTPUT 3
// Enter the item: 99
// 99 not found.