// CODE 7: C program to insert elements in an AVL Tree
// [Consider the constructed AVL Tree to be:
/*          30
           /  \
         20   40
        /  \    \
       10  25   50
*/
// Perform a pre order traversal on the constructed tree to validate the result]

#include <stdio.h>
#include <malloc.h>
#define isEmpty root ? 0 : 1

typedef struct AVLTree
{
    int data;
    struct AVLTree *left;
    struct AVLTree *right;
    int height;
} node;

node *root;

void preorder(node *parent)
{
    if (parent)
    {
        printf("%i, ", parent->data);
        preorder(parent->left);
        preorder(parent->right);
    }
    else if (isEmpty)
        printf("\nTree Empty\n");
}

node *createnode(int data)
{
    node *temp = malloc(sizeof(node));
    temp->right = temp->left = NULL;
    temp->data = data;
    temp->height = 1;
    return temp;
}

int height(node *parent)
{
    if (parent == NULL)
        return 0;
    return parent->height;
}

int getBalance(node *parent)
{
    if (parent == NULL)
        return 0;
    return height(parent->left) - height(parent->right);
}

int max(int a, int b)
{
    return a > b ? a : b;
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *temp = x->right;

    // Perform rotation
    x->right = y;
    y->left = temp;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

node *leftRotate(node *x)
{
    node *y = x->right;
    node *temp = y->left;

    y->left = x;
    x->right = temp;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

node *insert(node *parent, int data)
{
    if (parent == NULL)
        return createnode(data);

    if (data < parent->data)
        parent->left = insert(parent->left, data);
    else if (data > parent->data)
        parent->right = insert(parent->right, data);
    else
        return parent;

    parent->height = max(height(parent->left), height(parent->right)) + 1;
    int balance = getBalance(parent);

    // If this node becomes unbalanced, then there are 4 cases
    // Left Left Case
    if (balance > 1 && data < parent->left->data)
        return rightRotate(parent);

    // Right Right Case
    if (balance < -1 && data > parent->right->data)
        return leftRotate(parent);

    // Left Right Case
    if (balance > 1 && data > parent->left->data)
    {
        parent->left = leftRotate(parent->left);
        return rightRotate(parent);
    }

    // Right Left Case
    if (balance < -1 && data < parent->right->data)
    {
        parent->right = rightRotate(parent->right);
        return leftRotate(parent);
    }

    return parent;
}

void main()
{
    /* The constructed AVL tree
			 30
	     	/ \
	 	 20   40
		/ \	   \
  	  10 25    50
    */
    int arr[6] = {10, 20, 30, 40, 50, 25};
    int n = sizeof arr / sizeof arr[0];
    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    printf("\nPreorder Tree: ");
    preorder(root);
}

// >>> OUTPUT
// Preorder Tree: 30, 20, 10, 25, 40, 50,