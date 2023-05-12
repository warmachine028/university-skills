# CODE 3: WAP for Tree Traversal in In-order.


class TreeNode:
    def __init__(self, data, left=None, right=None):
        self.left: TreeNode = left
        self.data: int = data
        self.right: TreeNode = right
    
    def __str__(self):  # InOrder
        return f"{self.left or ''}{self.data} {self.right or ''}"


# __main__
root = TreeNode(10)  # 50 20 10 90 80 100
root.left = TreeNode(20)
root.right = TreeNode(80)
root.left.left = TreeNode(50)
root.right.right = TreeNode(70)
root.right.left = TreeNode(90)
root.right.right = TreeNode(100)
print(root)
