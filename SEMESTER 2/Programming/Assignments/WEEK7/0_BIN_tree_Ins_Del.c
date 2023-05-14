// CODE 0: C program to perform insertion and deletion from a binary tree

#include <stdio.h>
#include <malloc.h>

// Macro to get root status
#define isEmpty root ? 0 : 1

// Structure of a node
typedef struct BINTree
{
    struct BINTree *left;
    int data;
    struct BINTree *right;
} node;

// Root node for tree
node *root;

// returns a new node
node *createnode(int data)
{
    node *temp = malloc(sizeof(node));
    temp->left = temp->right = NULL;
    temp->data = data;
    return temp;
}

// left child->parent->right child
void inorder(node *parent)
{
    if (parent)
    {
        inorder(parent->left);
        printf("%i, ", parent->data);
        inorder(parent->right);
    }
    else if (isEmpty)
        printf("\nTree Empty\n");
}

void main()
{
    // Insertion
    root = createnode(12);
    root->left = createnode(19);
    root->right = createnode(39);
    root->left->left = createnode(59);
    root->left->right = createnode(79);
    root->right->left = createnode(99);
    /*   12
        /  \
      19   39
      /\   /
    59 79 99
   */

    printf("\nBefore Deletion: ");
    inorder(root);

    //Deletion
    node *del;
    root->right->left = NULL; // Deleting element 99 from tree
    del = root->right->left;
    free(del);

    printf("\nAfter Deletion: ");
    inorder(root);
}

// >>> OUTPUT
// Before Deletion: 59, 19, 79, 12, 99, 39,
// After Deletion: 59, 19, 79, 12, 39,