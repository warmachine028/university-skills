# CODE 4: Write a program to implement a sort technique that works by repeatedly stepping through the list to be sorted.

def merge_sort(array: list[int]) -> None:
    if len(array) > 1:
        mid: int = len(array) // 2

        left: list[int] = array[:mid]
        right: list[int] = array[mid:]

        merge_sort(left)
        merge_sort(right)

        lindex: int = 0
        rindex: int = 0
        aindex: int = 0

        # Comparing and copying data from left nad right arrays
        while lindex < len(left) and rindex < len(right):
            if left[lindex] <= right[rindex]:
                array[aindex] = left[lindex]
                lindex += 1
            else:
                array[aindex] = right[rindex]
                rindex += 1
            aindex += 1

        # Copying Remaining Data

        for i in range(lindex, len(left)):
            array[aindex] = left[i]
            aindex += 1

        for i in range(rindex, len(right)):
            array[aindex] = right[i]
            aindex += 1


if __name__ == "__main__":
    arr: list = [3, 4, 5, 2, 1]
    merge_sort(arr)
    print(arr)
