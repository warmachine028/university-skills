# CODE 7: Implement Insertion sort using Python language.

def insertion_sort(array: list[int]) -> None:
    for i, value in enumerate(array):
        position = i
        while position > 0 and array[position - 1] > value:  # Finding position to insert
            array[position] = array[position - 1]
            position = position - 1
        array[position] = value  # Inserted


# __main__
LIST = [3, 2, 1, 4, 6, 7, 2]
insertion_sort(LIST)
print(LIST)
