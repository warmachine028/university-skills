// CODE 9b: Write a C program to implement output restricted deque.

#include <malloc.h>
#include <stdio.h>

typedef struct
{
    int *array;
    int capacity;
    int front;
    int rear;

} OutputRestrictedDeque;

OutputRestrictedDeque *createDequeue(int capacity)
{
    OutputRestrictedDeque *ORDeque = malloc(sizeof(OutputRestrictedDeque));
    ORDeque->capacity = capacity;
    ORDeque->array = malloc(sizeof(int) * capacity);
    ORDeque->front = ORDeque->rear = 0;
}

int isEmpty(OutputRestrictedDeque *ORDeque)
{
    return ORDeque->rear == ORDeque->front;
}

int isFull(OutputRestrictedDeque *ORDeque)
{
    return ORDeque->rear == ORDeque->capacity - 1;
}

int enqueue(int data, char side[], OutputRestrictedDeque *ORDeque)
{
    if (isFull(ORDeque))
        return -1;
    if (side == "FRONT" || side == "Front" || side == "front")
    {   /*
         According to the rule any Queue Operation must be performed in constant time or
         require O(1) Time Complexity. But the following process violates the rule
         by performing the Shifting of array elements in O(N) time complexity. I know that
         this is not the optimal way to insert the element at front. But due to constraint
         of time I am unable to implement this Output Restricted Queue using Circular Array.
         */
        for (int i = ORDeque->rear + 1; i > ORDeque->front; i--)
            ORDeque->array[i] = ORDeque->array[i - 1];
        ORDeque->array[ORDeque->front] = data;
        ORDeque->rear++;
    }
    else
        ORDeque->array[ORDeque->rear++] = data;
    return 0;
}

int dequeue(OutputRestrictedDeque *ORDeque)
{
    return isEmpty(ORDeque) ? -1 : ORDeque->array[++ORDeque->front];
}

void print(OutputRestrictedDeque *ORDeque)
{
    printf("\nOR DQUEUE: ");
    if (isEmpty(ORDeque))
    {
        printf("EMPTY\n");
        return;
    }
    for (int i = ORDeque->front; i < ORDeque->rear - 1; i++)
        printf("%i, ", ORDeque->array[i]);
    printf("%i\n", ORDeque->array[ORDeque->rear - 1]);
}

void main()
{
    int n = 10;
    OutputRestrictedDeque *Dqueue = createDequeue(n);
    enqueue(10, "rear", Dqueue);
    enqueue(20, "front", Dqueue);
    enqueue(39, "front", Dqueue);
    enqueue(390, "rear", Dqueue);
    dequeue(Dqueue);
    dequeue(Dqueue);

    print(Dqueue);
    // TODO: Implement this using Circular Queue
}
