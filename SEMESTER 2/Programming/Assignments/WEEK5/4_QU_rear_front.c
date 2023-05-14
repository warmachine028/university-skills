// CODE 4: C program to show the operations of a queue and print the rear and front at the end.

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
    return !(qu->top);
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
    int max = 3;
    queue qu = createQueue(max);

    enqueue(&qu, 34);
    enqueue(&qu, 40);
    enqueue(&qu, 19);


    display(&qu);
    printf("\nREAR -> %i", qu.array[qu.top - 1]);
    printf("\nFRONT -> %i", qu.array[0]);
}
