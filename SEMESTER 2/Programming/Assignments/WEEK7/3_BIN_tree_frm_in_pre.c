// 	C program to generate a tree from its inorder and preorder representations
// Input representation for inorder is: char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
// Input representation for preorder is: char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' };)

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

void inorder(node *parent)
{
    if (parent)
    {
        inorder(parent->left);
        printf("%c, ", parent->data);
        inorder(parent->right);
    }
    else if (isEmpty)
        printf("\nTree Empty\n");
}

int search(char arr[], int strt, int end, char key)
{
    for (int i = strt; i <= end; i++)
        if (arr[i] == key)
            return i;
}

node *build(char inorder[], char preorder[], int first, int last)
{
    static int preIndex = 0;
    if (first > last)
        return NULL;

    // Use current node from Preorder array using preIndex and increment it
    node *temp = createnode(preorder[preIndex++]);
    if (first == last)
        return temp;

    // Else find the index of node
    int inIndex = search(inorder, first, last, temp->data);

    // Using Inorder index, build left and right sub-trees
    temp->left = build(inorder, preorder, first, inIndex - 1);
    temp->right = build(inorder, preorder, inIndex + 1, last);

    return temp;
}

void main()
{
    char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
    char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
    int len = sizeof in / sizeof in[0];

    // Building tree using inorder and preorder traversals
    root = build(in, pre, 0, len - 1);

    printf("\nTree: ");
    inorder(root);
}

// >>> OUTPUT
// Tree : D, B, E, A, F, C,