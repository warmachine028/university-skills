// CODE 8: C program for deleting elements in a AVL Tree
/*The input AVL Tree is:

            9
           /  \
          1    10
        /  \     \
       0    5     11
      /    /  \
     -1   2    6
*/
// Delete 10, and perform the pre order traversal on the tree before and after deletion of 10 to show the difference

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

node *minValueNode(node *parent)
{
    node *ref = parent;

    while (ref->left)
        ref = ref->left;

    return ref;
}

node *delete (node *parent, int data)
{
    if (parent == NULL)
        return parent;

    if (data < parent->data)
        parent->left = delete (parent->left, data);
    else if (data > parent->data)
        parent->right = delete (parent->right, data);

    // if key is same as root's key, then This is
    // the node to be deleted
    else
    {
        node *del;
        if (parent->left == NULL || parent->right == NULL)
        {
            del = parent->left ? parent->left : parent->right;

            if (del == NULL) // No child case
                del = parent,
                parent = NULL;

            else // One child case
                *parent = *del;
            free(del);
        }
        else
            del = minValueNode(parent->right),
            parent->data = del->data,
            parent->right = delete (parent->right, del->data);
    }

    // If the tree had only one node then return
    if (parent == NULL)
        return parent;

    parent->height = max(height(parent->left), height(parent->right)) + 1;
    int balance = getbalance(parent);

    if (balance > 1 && getbalance(parent->left) >= 0)
        return rightRotate(parent);

    // Left Right Case
    if (balance > 1 && getbalance(parent->left) < 0)
    {
        parent->left = leftRotate(parent->left);
        return rightRotate(parent);
    }

    // Right Left Case
    if (balance < -1 && getbalance(parent->right) > 0)
    {
        parent->right = rightRotate(parent->right);
        return leftRotate(parent);
    }
    // Right Right Case
    if (balance < -1 && getbalance(parent->right) <= 0)
        return leftRotate(parent);

    return parent;
}

void main()
{

    int arr[9] = {9, 5, 10, 0, 6, 11, -1, 1, 2};
    int n = sizeof arr / sizeof arr[0];
    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    /* The input AVL tree
             9
           /  \
          1    10
        /  \     \
       0    5     11
      /    /  \
     -1   2    6
    */

    printf("\nPreorder Tree: ");
    preorder(root);

    printf("\nDeleting 10");
    root = delete (root, 10);
    /* After deletion
             1
           /  \
          0    9
        /     / \
       -1    5  11
           /  \
          2    6
    */
    printf("\nPreorder Tree: ");
    preorder(root);
}

// >>> OUTPUT
// Preorder Tree: 9, 1, 0, -1, 5, 2, 6, 10, 11,
// Deleting 10
// Preorder Tree: 1, 0, -1, 9, 5, 2, 6, 11,