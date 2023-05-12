# CODE 5: WAP to search the element in a Binary search tree.

class TreeNode:
    def __init__(self, data, left=None, right=None):
        self.left: TreeNode = left
        self.data: int = data
        self.right: TreeNode = right


class BST:
    def __init__(self, root: TreeNode = None, items: list[int] = None):
        self.root = root
        for item in items: self.insert(item)
    
    def insert(self, data: int) -> None:
        temp = TreeNode(data)
        if not self.root:
            self.root = temp
            return
        ref = self.root
        while ref:
            if data < ref.data:
                if not ref.left:
                    ref.left = temp
                    break
                ref = ref.left
            else:
                if not ref.right:
                    ref.right = temp
                    break
                ref = ref.right
    
    def search(self, data: int) -> bool:
        if not self.root: return False
        if self.root.data == data: return True
        ref = self.root
        while ref:
            if data < ref.data:
                if ref.left and ref.left.data == data:
                    return True
                ref = ref.left
            else:
                if ref.right and ref.right.data == data:
                    return True
                ref = ref.right
        return False


Tree = BST(None, [9, 8, 12, 5, 10, 13, 3, 7, 11, 2, 4, 6, 1])
print(*[*map(Tree.search, [9, 8, 12, 5, 10, 13, 3, 404, 79])], sep=" ")
