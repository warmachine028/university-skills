// CODE 9: C program to search an element in a AVL Tree
// [Use the above specified tree as input. Search for the node 11 in it]

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

node *createnode(int data)
{
    node *temp = malloc(sizeof(node));
    temp->data = data;
    temp->left = temp->right = NULL;
    temp->height = 1;
    return temp;
}

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

int max(int a, int b)
{
    return a > b ? a : b;
}

int height(node *parent)
{
    if (parent == NULL)
        return 0;
    return parent->height;
}

int getbalance(node *parent)
{
    if (parent == NULL)
        return 0;
    return height(parent->left) - height(parent->right);
}

node *rightRotate(node *y)
{
    node *x = y->left;
    node *temp = x->right;

    x->right = y;
    y->left = temp;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
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
    int balance = getbalance(parent);

    // Left Left Case
    if (balance > 1 && data < parent->left->data)
        return rightRotate(parent);

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

    // Right Right Case
    if (balance < -1 && data > parent->right->data)
        return leftRotate(parent);

    return parent;
}

int search(node *parent, int data) // avg->O(logn) wrst->O(n)
{
    if (parent == NULL)
        return 0;
    if (data > parent->data)
        return search(parent->right, data);
    else if (data < parent->data)
        return search(parent->left, data);
    return 1;
}

void main()
{

    int arr[9] = {9, 5, 10, 0, 6, 11, -1, 1, 2};
    int n = sizeof arr / sizeof arr[0];
    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    printf("\nInorder Tree: ");
    inorder(root);
    /* AVL tree
              9
            /  \
           1    10
         /  \    \
        0    5   |11|
      /    /  \
     -1   2    6
    */

    int key = 11;
    if (search(root, key))
        printf("\n%i found in tree.", key);
    else
        printf("\n%i not found.", key);
}

// >>> OUTPUT
// Inorder Tree: -1, 0, 1, 2, 5, 6, 9, 10, 11,
// 11 found in tree.