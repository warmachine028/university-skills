// https://stackoverflow.com/questions/789489/segment-tree-java-implementation
public class segmentTree {
    public static class STNode {
        int leftIndex;
        int rightIndex;
        int sum;
        STNode leftNode;
        STNode rightNode;
    }

    static STNode constructSegmentTree(int[] A, int l, int r) {
        if (l == r) {
            STNode node = new STNode();
            node.leftIndex = l;
            node.rightIndex = r;
            node.sum = A[l];
            return node;
        }
        int mid = (l + r) / 2;
        STNode leftNode = constructSegmentTree(A, l, mid);
        STNode rightNode = constructSegmentTree(A, mid+1, r);
        STNode root = new STNode();
        root.leftIndex = leftNode.leftIndex;
        root.rightIndex = rightNode.rightIndex;
        root.sum = leftNode.sum + rightNode.sum;
        root.leftNode = leftNode;
        root.rightNode = rightNode;
        return root;
    }

    static int getSum(STNode root, int l, int r) {
        if (root.leftIndex >= l && root.rightIndex <= r)
            return root.sum;
        if (root.rightIndex < l || root.leftIndex > r) 
            return 0;
        return getSum(root.leftNode, l, r) + getSum(root.rightNode, l, r);
    }

    /**
     *
     * @param root
     * @param index index of number to be updated in original array
     * @param newValue
     * @return difference between new and old values
     */
    static int updateValueAtIndex(STNode root, int index, int newValue) {
        int diff = 0;
        if (root.leftIndex == root.rightIndex && index == root.leftIndex) {
            // We actually reached to the leaf node to be updated
            diff = newValue - root.sum;
            root.sum = newValue;
            return diff;
        }
        int mid = (root.leftIndex + root.rightIndex) / 2;
        if (index <= mid) {
            diff = updateValueAtIndex(root.leftNode, index, newValue);
        } else {
            diff = updateValueAtIndex(root.rightNode, index, newValue);
        }
        root.sum += diff;
        return diff;
    }
    
    public static void main(String[] Args) {
        int[] list = { 1, 2, 3, 9, 10 };
        STNode root = constructSegmentTree(list, 0, 4);
        System.out.println(root.leftNode.rightNode.rightNode.sum);
        int sum = getSum(root, 0, 9);
        System.out.println(sum);
    }
}

// public class segmentTree {

// }