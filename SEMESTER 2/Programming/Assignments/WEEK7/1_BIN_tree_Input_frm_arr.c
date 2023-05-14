// CODE 0:  program to take an input tree and show inorder, preorder and post order traversals of it
// (Take input as: int array[7] = {27, 14, 35, 10, 19, 31, 42};)

#include <stdio.h>
#include <malloc.h>
#define isEmpty root ? 0 : 1

typedef struct BINTree
{
    struct BINTree *left;
    int data;
    struct BINTree *right;
} node;

node *root;

node *createnode(int data)
{
    node *temp = malloc(sizeof(node));
    temp->left = temp->right = NULL;
    temp->data = data;
    return temp;
}

node *insertLevelOrder(int *arr, node *root, int index, int size)
{
    // Base case for recursion
    if (index < size)
    {
        node *temp = createnode(arr[index]);
        root = temp;

        // insert left child
        root->left = insertLevelOrder(arr, root->left, 2 * index + 1, size);

        // insert right child
        root->right = insertLevelOrder(arr, root->right, 2 * index + 2, size);
    }
    return root;
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

void postorder(node *parent)
{
    if (parent)
    {
        postorder(parent->left);
        postorder(parent->right);
        printf("%i, ", parent->data);
    }
    else if (isEmpty)
        printf("\nTree Empty\n");
}

void main()
{
    int array[7] = {27, 14, 35, 10, 19, 31, 42};
    int n = sizeof array / sizeof array[0];
    root = insertLevelOrder(array, root, 0, n);
    /*         
           27
         /   \
       14    35
      /\     /\
    10 19  31 42
    */

    printf("\nTRAVERSAL IN PRE-ORDER: ");
    preorder(root);
    printf("\nTRAVERSAL IN IN-ORDER: ");
    inorder(root);
    printf("\nTRAVERSAL IN POST-ORDER: ");
    postorder(root);
}

// >>> OUTPUT
// TRAVERSAL IN PRE-ORDER: 27, 14, 10, 19, 35, 31, 42,
// TRAVERSAL IN IN-ORDER: 10, 14, 19, 27, 31, 35, 42,
// TRAVERSAL IN POST-ORDER: 10, 19, 14, 31, 42, 35, 27,
