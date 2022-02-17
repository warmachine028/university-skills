# CODE 5: Implement Bubble sort using Python language.

def bubble_sort(array: list[int]) -> None:
    for i in range(len(array) - 1):
        for j in range(i, len(array)):
            if array[i] > array[j]:
                array[i], array[j] = array[j], array[i]


# __main__
LIST = [3, 2, 1, 4, 6, 7, 2, 1]
bubble_sort(LIST)
print(LIST)
