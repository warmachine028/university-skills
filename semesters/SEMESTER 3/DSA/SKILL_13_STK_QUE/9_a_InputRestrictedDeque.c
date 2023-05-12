// CODE 9a: Write a C program to implement input restricted dequeue.

#include <malloc.h>
#include <stdio.h>

typedef struct
{
    int *array;
    int capacity;
    int front;
    int rear;

} InputRestrictedDeque;

InputRestrictedDeque *createDequeue(int capacity)
{
    InputRestrictedDeque *IRDeque = malloc(sizeof(InputRestrictedDeque));
    IRDeque->capacity = capacity;
    IRDeque->array = malloc(sizeof(int) * capacity);
    IRDeque->front = IRDeque->rear = 0;
}

int isEmpty(InputRestrictedDeque *IRDeque)
{
    return IRDeque->rear == IRDeque->front;
}

int isFull(InputRestrictedDeque *IRDeque)
{
    return IRDeque->rear == IRDeque->capacity - 1;
}

int enqueue(int data, InputRestrictedDeque *IRDeque)
{
    if (isFull(IRDeque))
        return -1;
    IRDeque->array[IRDeque->rear++] = data;
    return 0;
}

int dequeue(char side[], InputRestrictedDeque *IRDeque)
{
    if (isEmpty(IRDeque))
        return -1;
    if (side == "REAR" || side == "Rear" || side == "rear")
        return IRDeque->array[--IRDeque->rear];
    else
        return IRDeque->array[++IRDeque->front];
}

void print(InputRestrictedDeque *IRDeque)
{
    printf("\nIR DQUEUE: ");
    if (isEmpty(IRDeque))
    {
        printf("EMPTY\n");
        return;
    }
    for (int i = IRDeque->front; i < IRDeque->rear - 1; i++)
        printf("%i, ", IRDeque->array[i]);
    printf("%i\n", IRDeque->array[IRDeque->rear - 1]);
}

void main()
{
    int n = 10;
    InputRestrictedDeque *Dqueue = createDequeue(n);
    enqueue(10, Dqueue);
    enqueue(20, Dqueue);
    enqueue(39, Dqueue);
    enqueue(390, Dqueue);

    dequeue("rear", Dqueue);
    dequeue("front", Dqueue);
    dequeue("Front", Dqueue);  
    print(Dqueue);
}