// CODE 4: C program for inserting elements in a Binary Search Tree
// Create the following Binary Search Tree
/*    	       50
            /     \
          30      70
         /  \    /  \
       20   40 60   80
*/
// Perform an inorder traversal to validate the result

#include <stdio.h>
#include <malloc.h>
#define isEmpty root ? 0 : 1

typedef struct BSTree
{
    struct BSTree *left;
    int data;
    struct BSTree *right;
} node;

node *root;

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

node *createnode(int data)
{
    node *temp = malloc(sizeof(node));
    temp->right = temp->left = NULL;
    temp->data = data;
    return temp;
}

node *insert(node *parent, int data)
{
    if (parent == NULL)
        return createnode(data);

    if (data < parent->data)
        parent->left = insert(parent->left, data);

    else if (data > parent->data)
        parent->right = insert(parent->right, data);

    return parent;
}

void main()
{
    /*    	   50
            /     \
          30      70
         /  \    /  \
       20   40 60   80
    */
    int arr[7] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof arr / sizeof arr[0];

    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    printf("\nInorder Tree: ");
    inorder(root);
}

// >>> OUTPUT
// Inorder Tree: 20, 30, 40, 50, 60, 70, 80,