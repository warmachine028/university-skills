/* CODE 8:
Read 2n ints. Use each half to create two BSTs in the given order. Find if the two trees 
are identical. Print y/n. There are T test cases. Implement using C programming.
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

int isvalid(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;

    if (root1 == NULL && root2 || root1 && root2 == NULL)
        return 0;

    return root1->data = root2->data && isvalid(root1->left, root2->left) && isvalid(root1->right, root2->right);
}

void main()
{
    int inputs[3][6] = {{1, 2, 3, 1, 3, 2},
                        {1, 2, 3, 2, 3, 1},
                        {2, 1, 3, 2, 3, 1}};
    for (int i = 0; i < 3; i++)
    {
        TreeNode *root1 = NULL, *root2 = NULL;

        for (int j = 0; j < 3; j++)
            root1 = insert(root1, inputs[i][j]);

        for (int j = 3; j < 6; j++)
            root2 = insert(root2, inputs[i][j]);

        printf(isvalid(root1, root2) ? "y\n" : "n\n");
    }
}