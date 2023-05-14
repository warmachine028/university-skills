// CODE 6: C program to implement circular queue.

#include <stdio.h>
#define MAX 5

int cqueue_arr[MAX];
int front = -1;
int rear = -1;

void enqueue(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("\nQueue Full");
        return;
    }
    if (front == -1)
        front = 0,
        rear = 0;

    else
    {
        if (rear == MAX - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    cqueue_arr[rear] = item;
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue Empty");
        return;
    }
    
    printf("\n%i dequeued from queue", cqueue_arr[front]);
    
    if (front == rear)
        front = -1,
        rear = -1;
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front = front + 1;
    }
}

void display()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1)
    {
        printf("\nQUEUE EMPTY");
        return;
    }
    printf("Queue elements :n");
    if (front_pos <= rear_pos)
        while (front_pos <= rear_pos)
            printf("%d ", cqueue_arr[front_pos]),
                front_pos++;
    else
    {
        while (front_pos <= MAX - 1)
            printf("%d ", cqueue_arr[front_pos]),
                front_pos++;

        front_pos = 0;
        while (front_pos <= rear_pos)
            printf("%d ", cqueue_arr[front_pos]),
                front_pos++;
    }
    printf("\n");
}

void main()
{
    int choice = 1;

    while (choice)
    {
        printf("\n_OPTIONS_");
        printf("\n0. EXIT");
        printf("\n1. ENQUEUE");
        printf("\n2. DEQUEUE");
        printf("\n3. DISPLAY\n");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        while (choice < 0 || choice > 3)
        {
            printf("\nInvalid Choice. Try Again: ");
            scanf("%i", choice);
        }

        int data;
        switch (choice)
        {
        case 0: // EXIT
            printf("Exitting");
            break;
        case 1: // ENQUEUE
            printf("Enter data: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2: // DEQUEUE
            dequeue();
            break;
        case 3: // DISPLAY
            display();
            break;
        }
    }
}
