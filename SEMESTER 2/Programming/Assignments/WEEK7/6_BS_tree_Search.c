// CODE 6: C program to search an element in a Binary Search Tree
// [Use the above specified tree as input. Search for the node 70 in it]

#include <stdio.h>
#include <malloc.h>

typedef struct BSTree
{
    struct BSTree *left;
    int data;
    struct BSTree *right;
} node;

node *root;

node *createnode(int data)
{
    node *temp = malloc(sizeof(node));
    temp->left = temp->right = NULL;
    temp->data = data;
    return temp;
}

node *insert(node *node, int data)
{
    if (node == NULL)
        return createnode(data);
    if (data > node->data)
        node->right = insert(node->right, data);
    else if (data < node->data)
        node->left = insert(node->left, data);
    return node;
}

int search(node *root, int data) // avg->O(logn) wrst->O(n)
{
    if (root == NULL)
        return 0;
    if (data > root->data)
        return search(root->right, data);
    else if (data < root->data)
        return search(root->left, data);
    return 1;
}

void inorder(node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%i, ", root->data);
        inorder(root->right);
    }
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
          30     |70|
         /  \    /  \
       20   40 60   80
    */
    int item = 70;
    if (search(root, item))
        printf("\n%i found in tree.", item);
    else
        printf("\n%i not found in tree.", item);
}

// >>> OUTPUT
// Inorder Tree: 20, 30, 40, 50, 60, 70, 80,
// 70 found in tree.