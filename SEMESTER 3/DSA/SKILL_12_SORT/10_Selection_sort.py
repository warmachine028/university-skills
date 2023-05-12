# CODE 10: Implement Selection sort using Python language.

def selection_sort(array: list[int]) -> None:
    for i in range(len(array) - 1):
        position = i
        # Finding index of item after current having least value
        for j in range(i + 1, len(array)):
            if array[j] < array[position]:
                position = j
        # swapping places of current with the minimum valued item
        array[position], array[i] = array[i], array[position]


# __main__
LIST = [2, 1, 4, 2, 6, 8, 3]
selection_sort(LIST)
print(LIST)
