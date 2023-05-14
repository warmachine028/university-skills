// CODE 5: C program for deleting elements in a Binary Search Tree
// [Use the above specified tree as input. Delete nodes 20, 30 and 50 from the input tree and show the inorder traversal for each of the cases]

#include <stdio.h>
#include <malloc.h>
#define isEmpty root ? 0 : 1

typedef struct BStree
{
    struct BStree *left;
    int data;
    struct BStree *right;
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

node *minimum(node *parent)
{
    node *ref = parent;
    while (ref && ref->left)
        ref = ref->left;
    return ref;
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

node *delete (node *parent, int data)
{
    // base case
    if (parent == NULL)
        return parent;

    if (data < parent->data)
        parent->left = delete (parent->left, data);

    else if (data > parent->data)
        parent->right = delete (parent->right, data);

    // when deletion node is root
    else
    {
        node *del;
        // node with only one child or no child
        if (parent->left == NULL)
        {
            del = parent->right;
            free(parent);
            return del;
        }
        else if (parent->right == NULL)
        {
            del = parent->left;
            free(parent);
            return del;
        }

        // node with two children:
        del = minimum(parent->right);
        parent->data = del->data;
        parent->right = delete (parent->right, del->data);
    }

    return parent;
}

void main()
{

    int arr[7] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof arr / sizeof arr[0];

    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    printf("\nInorder Tree: ");
    inorder(root);
    /*    	   50
            /     \
          30      70
         /  \    /  \
       20   40 60   80
    */

    printf("\nDeleting 20\n");
    root = delete (root, 20);
    printf("Inorder Tree: ");
    inorder(root);
    /*         50
            /     \
          30      70
           \    /  \
           40 60   80
    */

    printf("\nDeleting 30\n");
    root = delete (root, 30);
    printf("Inorder Tree: ");
    inorder(root);
    /* 	       50
            /     \
          40      70
                /  \
              60   80
    */

    printf("\nDeleting 50\n");
    root = delete (root, 50);
    printf("Inorder Tree: ");
    inorder(root);
    /*         60
            /     \
          40      70
                   \
                   80  
    */
}

// >>> OUTPUT
// Inorder: 20, 30, 40, 50, 60, 70, 80
// Deleting 20:
// Inorder: 30, 40, 50, 60, 70, 80
// Deleting 30:
// Inorder: 40, 50, 60, 70, 80
// Deleting 50:
// Inorder: 40, 60, 70, 80
