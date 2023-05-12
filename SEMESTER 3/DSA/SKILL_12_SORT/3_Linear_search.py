# CODE 3: Given a set of numbers. Find an element in the array using linear search. Implement using python language.
# (gedit filename.py)

def linear_search(array: list[int], key: int) -> int:
    for i, item in enumerate(array):
        if item == key: return i
    return -404


# __main__
result = linear_search([1, 4, 2, 5, 6, 2], 6)
print(f"Item {f'found at {result}' if result >= 0 else 'Not found'}")
