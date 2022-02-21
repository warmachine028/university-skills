# CODE 8: Take input of the following elements – 10,20,30,35,40,45,50,55,60,66,77,88,89. Find 66 using proper sorting
# approach in python.

def interpolation_search(array: list[int], key: int) -> int:
    low = 0
    high = len(array) - 1
    while low <= high and array[low] <= key <= array[high]:
        pos = low + (key - array[low]) // (array[high] - array[low]) * (high - low)
        if key == array[pos]:
            return pos
        elif key < array[pos]:
            high = pos - 1
        else:
            low = pos + 1
    return -404


# __main__
elements = [10, 20, 30, 35, 40, 45, 50, 55, 60, 66, 77, 88, 89]
item = 66
result = interpolation_search(elements, item)
print(f"Element {item} {f'found at {result}' if result >= 0 else 'not found'}")
