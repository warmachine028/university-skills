# [WEEK 2](https://www.hackerrank.com/contests/daa-lab-day225022022/challenges)

## Logarithmic Sorting Algorithms - 25th February 2022

1. [Quick Sort](1_Quick_sort.c)
   Quick sort is based on the divide-and-conquer approach based on the idea of choosing one element as a pivot element and partitioning the array around it such that: Left side of pivot contains all the elements that are less than the pivot element Right side contains all elements greater than the pivot

   It reduces the space complexity and removes the use of the auxiliary array that is used in merge sort. Selecting a random pivot in an array results in an improved time complexity in most of the cases.

2. [Merge Sort](2_Merge_sort.c)
   Merge sort is a divide-and-conquer algorithm based on the idea of breaking down a list into several sub-lists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

    Idea:

    ```algorithm
        Divide the unsorted list into N sublists, each containing 1 element.

        Take adjacent pairs of two singleton lists and merge them to form a list of 2 elements.
        N will now convert into N/2 lists of size 2.
        Repeat the process till a single sorted list of obtained.
    ```

    While comparing two sublists for merging, the first element of both lists is taken into consideration. While sorting in ascending order, the element that is of a lesser value becomes a new element of the sorted list. This procedure is repeated until both the smaller sublists are empty and the new combined sublist comprises all the elements of both the sublists.

3. [Heap Sort](3_Heap_sort.c)
   Heaps can be used in sorting an array. In max-heaps, maximum element will always be at the root. Heap Sort uses this property of heap to sort the array.
