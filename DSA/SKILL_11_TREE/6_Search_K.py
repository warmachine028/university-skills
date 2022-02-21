""" CODE 6: 
Read n ints and make a binary search tree (BST). Do k search operations to print results as y/n.
"""

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


n = 4
Tree = BST([2, 1, 4, 3])

k = 3
searches = [3, 7, 1]
for item in searches: print(('n', 'y')[Tree.search(item)])
