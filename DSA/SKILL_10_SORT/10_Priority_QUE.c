/* CODE 10:
Write down a C program to implement a priority queue.
i) Insert
ii) Delete from rear
iii) Display

*/

#include <stdio.h>

int heap[40];
int size = -1;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveUp(int i)
{
    for (i; i > 0; i /= 2)
        if (heap[(i - 1) / 2] < heap[i])
            swap(&heap[(i - 1) / 2], &heap[i]);
}

//function to move the node down the tree in order to restore the heap property.
void heapify(int root)
{
    int largest = root;
    int left = root + 1;
    int right = root + 2;

    if (size >= left && heap[largest] < heap[left])
        largest = left;

    if (size >= right && heap[largest] < heap[right])
        largest = right;

    if (root != largest)
        swap(&heap[root], &heap[largest]),
            heapify(largest);
}

void removeMax()
{
    heap[0] = heap[size--];
    heapify(0);
}

//inserting the element in a priority queue
void insert()
{
    int data;
    scanf("%i", &data);
    heap[++size] = data;
    moveUp(size);
}

//Removing the element from the priority queue at a given index i.
void delete ()
{
    int i;
    scanf("%i", &i);
    heap[i] = heap[0] + 1;
    moveUp(i);   // move the node stored at ith location is shifted to the root node
    removeMax(); // Removing the node having maximum priority
}

void display()
{
    for (int i = 0; i <= size + 1; i++)
        printf("%i ", heap[i]);
    printf("\n");
}

void main()
{
    int choice = -1;
    while (choice != 4)
    {
        scanf("%i", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
}