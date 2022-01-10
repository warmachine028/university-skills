# CODE 3: WAP for Tree Traversal in Post-order.


class TreeNode:
    def __init__(self, data, left=None, right=None):
        self.left: TreeNode = left
        self.data: int = data
        self.right: TreeNode = right
    
    def __str__(self):  # PostOrder
        return f"{self.left or ''}{self.right or ''}{self.data} "


# __main__
root = TreeNode(10)  # 50 20 90 100 80 10
root.left = TreeNode(20)
root.right = TreeNode(80)
root.left.left = TreeNode(50)
root.right.right = TreeNode(70)
root.right.left = TreeNode(90)
root.right.right = TreeNode(100)
print(root)
