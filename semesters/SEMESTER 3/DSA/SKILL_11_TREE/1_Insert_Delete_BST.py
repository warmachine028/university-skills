# CODE 1: WAP to insert and delete a node from the BST.

class TreeNode:
    def __init__(self, data, left=None, right=None):
        self.left: TreeNode = left
        self.data: int = data
        self.right: TreeNode = right


class BST:
    def __init__(self, items: list[int] = None, root: TreeNode = None):
        self.root = root
        if not items: return
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
    
    def delete(self, data) -> None:
        if not self.root: return
        if self.root.data == data: self.root = self.__adopt_children(self.root)
        ref: TreeNode = self.root
        while ref:
            if ref.data > data:
                if ref.left and ref.left.data == data:
                    ref.left = self.__adopt_children(ref.left)
                    break
                ref = ref.left
            else:
                if ref.right and ref.right.data == data:
                    ref.right = self.__adopt_children(ref.right)
                    break
                ref = ref.right
    
    @staticmethod
    def __adopt_children(root: TreeNode) -> TreeNode | None:
        if not root.left: return root.right
        if not root.right: return root.left
        right_child = root.right
        last_right_child = (self := lambda node: self(node.right) if node.right else node)(root.left)
        last_right_child.right = right_child
        return root.left


Tree = BST([9, 8, 12, 5, 10, 13, 3, 7, 11, 2, 4, 6, 1])
Tree.delete(0)
