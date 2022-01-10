/* CODE 7: 
Read n ints and make a BST in the same order. Print the tree in preorder, inorder and postorder traversals. 
Separate characters by '_'. Implement using C programming.
Input: (n, x_i)
4
2 1 4 3
Output:
2_1_4_3_
1_2_3_4_
1_3_4_2_
*/

#include <stdio.h>
#include <malloc.h>
#define createNode malloc(sizeof(TreeNode))

typedef struct TreeNode
{
    struct TreeNode *left;
    int data;
    struct TreeNode *right;
} TreeNode;

TreeNode *insert(TreeNode *root, int data)
{
    TreeNode *temp = createNode;
    temp->left = temp->right = NULL;
    temp->data = data;

    if (root == NULL)
        return temp;

    TreeNode *ref = root;
    while (ref)
        if (data < ref->data)
        {
            if (ref->left == NULL)
            {
                ref->left = temp;
                return root;
            }
            ref = ref->left;
        }
        else
        {
            if (ref->right == NULL)
            {
                ref->right = temp;
                return root;
            }
            ref = ref->right;
        }
}

void preOrder(TreeNode *root)
{
    if (root)
    {
        printf("%i_", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(TreeNode *root)
{
    if (root)
    {
        inOrder(root->left);
        printf("%i_", root->data);
        inOrder(root->right);
    }
}

void postOrder(TreeNode *root)
{
    if (root)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%i_", root->data);
    }
}

void main()
{
    TreeNode *root = NULL;
    int inputs[] = {2, 1, 4, 3},
        n = 4;
    
    for (int i = 0; i < n; i++)
        root = insert(root, inputs[i]);

    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
}