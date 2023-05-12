# CODE 11: Implement Merge sort using Python language

def merge_sort(array: list[int]) -> None:
    if len(array) < 2: return
    # Finding Partitioning position
    mid = len(array) // 2
    
    # Recursively partitioning list till single elements
    merge_sort(left := array[:mid])
    merge_sort(right := array[mid:])
    
    # Indices for mainList - leftList - rightList
    index = left_index = right_index = 0
    
    # Comparing and inserting lesser elements first
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            array[index] = left[left_index]
            left_index += 1
        else:
            array[index] = right[right_index]
            right_index += 1
        index += 1
    
    # Inserting remaining elements from left List
    while left_index < len(left):
        array[index] = left[left_index]
        left_index += 1
        index += 1
    
    # Inserting remaining elements from right List
    while right_index < len(right):
        array[index] = right[right_index]
        right_index += 1
        index += 1


LIST = [2, 1, 4, 2, 6, 8, 3]
merge_sort(LIST)
print(LIST)
