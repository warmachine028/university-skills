/* CODE 2:
Implement a Circular Queue using arrays with the following operations. 
  i. Insert (Display "Queue Overflow" if queue is full). 
 ii. Delete (Display "Queue Underflow" if queue is empty). 
iii. Display (Display NULL if queue is empty). 
 iv. Exit
*/

#include <stdio.h>
#include <malloc.h>

typedef struct
{
    int front, rear;
    int *arr;
    int capacity;
} circularQueue;

circularQueue *createQueue(int size)
{
    circularQueue *new = malloc(sizeof(circularQueue));
    new->front = new->rear = -1;
    new->capacity = size;
    new->arr = malloc(sizeof(int) * size);
    return new;
}

int isEmpty(circularQueue *cque)
{
    return cque->front == -1;
}

int isFull(circularQueue *cque)
{
    return cque->front == (cque->rear + 1) % cque->capacity;
}

void enqueue(circularQueue *cque)
{
    if (isFull(cque))
    {
        printf("Queue Overflow\n");
        return;
    }
    int data;
    scanf("%i", &data);

    if (isEmpty(cque))
        cque->front = cque->rear = 0;
    else
        cque->rear = (cque->rear + 1) % cque->capacity;
    cque->arr[cque->rear] = data;
}

void dequeue(circularQueue *cque)
{
    if (isEmpty(cque))
    {
        printf("Queue Underflow\n");
        return;
    }
    printf("Dequed Element: %i\n", cque->arr[cque->front]);
    if (cque->front == cque->rear)
        cque->front = cque->rear = -1;
    else
        cque->front = (cque->front + 1) % cque->capacity;
}

void display(circularQueue *cque)
{
    if (isEmpty(cque))
    {
        printf("Queue Underflow\n");
        return;
    }

    for (int i = cque->front; i != cque->rear; i = (i + 1) % cque->capacity)
        printf("%i ", cque->arr[i]);
    printf("%i\n", cque->arr[cque->rear]);
}

void main()
{
    int N, choice;
    printf("Enter the maximum size of Circular Queue: ");
    scanf("%i", &N);

    circularQueue *CQUE = createQueue(N);

    while (choice != 4)
    {
        scanf("%i", &choice);
        switch (choice)
        {
        case 1:
            enqueue(CQUE);
            break;

        case 2:
            dequeue(CQUE);
            break;
        case 3:
            display(CQUE);
        default:
            break;
        }
    }
}