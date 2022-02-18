# CODE 1: You have been given an array A of size N . you need to sort this array non-decreasing oder using bubble sort. However, you do not need to print the sorted array . You just need to print the number of swaps required to sort this array using bubble sort

import random

def swap(arr: list[int], low: int, high: int) -> None:
    arr[low], arr[high] = arr[high], arr[low]


def bubblesort(arr: list[int]) -> int:
    swaps = 0
    for i in range(len(arr)):
        for j in range(i, len(arr)):
            if arr[i] > arr[j]:
                swaps += 1
                swap(arr, i, j)
    return swaps
    # return arr


# arr = random.sample(range(100), 10)
# result = bubblesort(list(arr))
# print(arr, result, sorted(arr), sep='\n')
# assert result == sorted(arr) 
print(bubblesort([1, 2, 3, 4, 5]))