// CODE 0: C program to create a simple linked list with 3 nodes.

#include <stdio.h>
#include <malloc.h>

// allocating memory block to node
#define createNode malloc(sizeof(node))

// node structure
typedef struct node
{
    int data;          // data element
    struct node *next; // address of next node
} node;                // an instance of node struct

node *head; // head pointer

void main()
{
    int n = 3; // performing 3 times
    for (int i = 0; i < n; i++)
    {
        // creating a node
        node *temp = createNode; // temporary node pointer
        temp->data = i + 1;      // storing data in node
        temp->next = NULL;       // initial next location

        // check if head is present
        if (head)
        {
            node *ref = head; // reference pointer

            // check if next node present
            while (ref->next) // to reach the last node
                ref = ref->next;
            
            // assigning next of last node to temp node
            ref->next = temp;
        }
        
        // head not found : List empty
        else
            head = temp; // assign temp to head : first node
        printf("Node with data '%i' was successfully created.\n", temp->data);
    }
}

// OUTPUT
// Node with data '1' was successfully created.
// Node with data '2' was successfully created.
// Node with data '3' was successfully created.