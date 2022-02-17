// CODE 7: Write down a C program to implement a priority queue.
#include <malloc.h>
#include <stdio.h>

typedef struct
{
    int capacity;
    int *array;
    int front;
    int rear;
} PriorityQueue;

PriorityQueue *createPriorityQueue(int capacity)
{
    PriorityQueue *pQueue = malloc(sizeof(PriorityQueue));
    pQueue->capacity = capacity;
    pQueue->array = malloc(sizeof(int) * capacity);
    pQueue->front = pQueue->rear = 0;

    return pQueue;
}

int isFull(PriorityQueue *pQueue)
{
    return pQueue->rear == pQueue->capacity - 1;
}

int isEmpty(PriorityQueue *pQueue)
{
    return !pQueue->rear;
}

void _swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void _heapify(int *array, int index, int length)
{
    int root = index;
    int left = root * 2 + 1;
    int right = root * 2 + 2;

    if (left < length && array[root] < array[left])
        root = left;
    if (right < length && array[root] < array[right])
        root = right;
    if (root == index)
        return;
    _swap(&array[index], &array[root]);
    _heapify(array, root, length);
}

void enqueue(int item, PriorityQueue *pQueue)
{
    if (isFull(pQueue))
        return;
    pQueue->array[pQueue->rear++] = item;
    for (int i = pQueue->rear / 2 - 1; i >= 0; i--)
        _heapify(pQueue->array, i, pQueue->rear);
}

int dequeue(PriorityQueue *pQueue)
{
    if (isEmpty(pQueue))
        return -1;
    int item = pQueue->array[0];
    pQueue->array[0] = pQueue->array[--pQueue->rear];
    _heapify(pQueue->array, 0, pQueue->rear);
    return item;
}

void print(PriorityQueue *pQueue)
{
    printf("\nPRIORITY QUEUE: ");
    if (!pQueue->rear)
    {
        printf("EMPTY\n");
        return;
    }
    for (int i = pQueue->front; i < pQueue->rear - 1; i++)
        printf("%i, ", pQueue->array[i]);
    printf("%i\n", pQueue->array[pQueue->rear - 1]);
}

void main()
{
    int n = 10;
    PriorityQueue *pQueue = createPriorityQueue(n);
    for (int i = 0; i < 7; i++)
        enqueue(i, pQueue);
    for (int i = 0; i < 7; i++)
    {
        print(pQueue);
        printf("%i, ", dequeue(pQueue));
    }
    print(pQueue);
}