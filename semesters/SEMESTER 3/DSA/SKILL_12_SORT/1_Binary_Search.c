// CODE 1: Implement binary search using C-programming language.

int binarySearch(int array[], int key, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == array[mid])
            return mid;
        else if (key < array[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -404;
}

// void main() {}