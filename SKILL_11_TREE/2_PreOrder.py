# CODE 2: WAP for Tree Traversal in Pre-order.


class TreeNode:
    def __init__(self, data, left=None, right=None):
        self.left: TreeNode = left
        self.data: int = data
        self.right: TreeNode = right
    
    def __str__(self):  # PreOrder
        return f"{self.data} {self.left or ''}{self.right or ''}"


# __main__
root = TreeNode(10)  # 10 20 50 80 90 100
root.left = TreeNode(20)
root.right = TreeNode(80)
root.left.left = TreeNode(50)
root.right.right = TreeNode(70)
root.right.left = TreeNode(90)
root.right.right = TreeNode(100)
print(root)
