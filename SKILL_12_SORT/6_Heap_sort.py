# CODE 6: Implement Heap sort using Python language.


def heap_sort(array: list[int]) -> None:
    length = len(array)
    
    def heapify(index: int, n=length) -> None:
        root = index
        # Calculating left and right child of root
        left = 2 * index + 1
        right = 2 * index + 2
        
        # Find maximum among root, left_child, right_child
        if left < n and array[root] < array[left]:
            root = left
        if right < n and array[root] < array[right]:
            root = right
        if root == index: return
        
        # Swap maximum with root and perform heapify again
        array[index], array[root] = array[root], array[index]
        heapify(root, n)
    
    # heapPush -> Building maxHeap from array
    for i in range(length // 2, -1, -1): heapify(i)
    
    print(f"Max heap: {array}")  # testing
    
    # heapPop -> Building array from maxHeap
    for i in range(length - 1, 0, -1):
        array[0], array[i] = array[i], array[0]
        heapify(0, i)


LIST = [2, 1, 4, 2, 6, 8, 3, -1]
heap_sort(LIST)
print(LIST)
