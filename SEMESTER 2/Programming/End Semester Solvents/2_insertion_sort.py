# CODE 2: Write a program to implement a sort technique in which the sorted array is built one entry at a time.


def isort(arr: list[int]) -> None:
    for i in range(1, len(arr)):
        item: int = arr[i]
        j: int = i - 1
        while j >= 0 and item < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = item

if __name__ == "__main__": 
    arr:list = [int(i) for i in input().split()]
    print(arr)
    isort(arr)
    print(arr)
