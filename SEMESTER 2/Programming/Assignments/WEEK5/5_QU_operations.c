// CODE 5: C program to insert 5 elements in a queue (size 5), check and display if it is full, then delete 1 element and print the remaining elements of the queue.

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int MAX;
    int top;
    int *array;
} queue;

queue createQueue(int capacity)
{
    queue qu;
    qu.MAX = capacity;
    qu.top = 0;
    qu.array = malloc(sizeof(int) * capacity);
    return qu;
}

int isEmpty(queue *qu)
{
    return !qu->top;
}

int isFull(queue *qu)
{
    return qu->top == qu->MAX;
}

void enqueue(queue *qu, int data)
{
    if (isFull(qu))
        printf("\nQUEUE FULL");
    else
        qu->array[qu->top++] = data,
        printf("\n%i enqueued into Queue", data);
}

int dequeue(queue *qu)
{
    if (isEmpty(qu))
        printf("\nQUEUE EMPTY");
    else
    {
        int data = qu->array[0];
        qu->top--;
        for (int i = 0; i < qu->top; i++)
            qu->array[i] = qu->array[i + 1];
        printf("\n%i dequeued from Queue", data);
        return data;
    }
}

void front(queue *qu)
{
    if (isEmpty(qu))
        printf("\nQUEUE EMPTY");
    else
        printf("\nFRONT -> %i", qu->array[0]);
}

void rear(queue *qu)
{
    if (isEmpty(qu))
        printf("\nQUEUE EMPTY");
    else
        printf("\nREAR -> %i", qu->array[qu->top]);
}

void display(queue *qu)
{
    if (isEmpty(qu))
        printf("\nQUEUE EMPTY");
    else
    {
        printf("\nQUEUE: ");
        for (int i = 0; i < qu->top; i++)
            printf("%i ", qu->array[i]);
    }
}

void main()
{
    int max = 5;
    queue qu = createQueue(max);
    enqueue(&qu, 454);
    enqueue(&qu, 404);
    enqueue(&qu, 554);
    enqueue(&qu, 453);
    enqueue(&qu, 230);

    if (isFull(&qu))
        printf("\nQUEUE IS FULL"),
            dequeue(&qu);

    display(&qu);
}
