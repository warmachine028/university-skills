/* CODE 1:
Write a program in C to implement Queue using Array 
i. Insert 
ii. Delete 
iii.Display 
iv. Exit
*/

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int front, rear;
    int capacity;
    int *arr;
} queue;

queue *createQueue(int size)
{
    queue *new = malloc(sizeof(queue));
    new->arr = malloc(sizeof(int) * size);
    new->rear = new->front = -1;
    new->capacity = size;
    return new;
}

int isEmpty(queue *que)
{
    return que->rear == -1;
}

int isFull(queue *que)
{
    return que->rear == que->capacity - 1;
}

void enqueue(queue *que)
{
    if (isFull(que))
        return;
    if (que->front == -1)
        que->front = 0;

    int data;
    scanf("%i", &data);
    que->arr[++que->rear] = data;
}

void dequeue(queue *que)
{
    if (isEmpty(que))
        return;
    que->front++;
    if (que->front > que->rear)
        que->front = que->rear = -1;
}

void display(queue *que)
{
    if (isEmpty(que))
        return;

    printf("->%i\n", que->arr[que->front]);
}
void main()
{
    int SIZE, choice;
    printf("Enter the maximum capacity of Queue: ");
    scanf("%i", &SIZE);

    queue *que = createQueue(SIZE);

    while (choice != 4)
    {
        scanf("%i", &choice);
        switch (choice)
        {
        case 1:
            enqueue(que);
            break;
        case 2:
            dequeue(que);
            break;
        case 3:
            display(que);
            break;
        default:
            break;
        }
    }
}