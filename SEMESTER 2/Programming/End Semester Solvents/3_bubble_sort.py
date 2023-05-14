# CODE 3: Write a program to implement bubble sort. Given the numbers 7, 1, 4, 12, 67, 33, and 45. How many swaps will be performed to sort these numbers using the bubble sort.


def bsort(arr: list[int]) -> int:
    count: int = 0
    for i in range(len(arr)):
        for j in range(i, len(arr)):
            if arr[i] > arr[j]:
                arr[i], arr[j] = arr[j], arr[i]
                count += 1
    return count


a = [7, 1, 4, 12, 67, 33, 45]
swap = bsort(a)
print(*a, sep=", ")
print(f"swaps: {swap}")
