// CODE 2:	C program to show the bfs traversal of the graph
// Input: 5 vertices (starting vertex is marked as 0)
// Take graph data in matrix form as follows:

// 0 1 0 0 1
// 1 0 1 1 1
// 0 1 0 1 0
// 0 1 1 0 1
// 1 1 0 1 0

#include <stdio.h>

int vertices;
int front = -1;
int rear = -1;

void bfs(int v, int visited[], int matrix[][vertices], int queue[])
{
    for (int i = 0; i < vertices; i++)
    {
        if (matrix[v][i] != 0 && visited[i] == 0)
        {
            queue[++rear] = i; // insert them into queue
            visited[i] = 1;    // mark the vertex visited
            printf("%i ", i);
        }
    }
    front++;
    if (front <= rear)
        bfs(queue[front], visited, matrix, queue);
}

void main()
{
    printf("Enter the number of vertices: ");
    scanf("%i", &vertices);

    int visited[vertices];
    // Marking all vertices not visited
    for (int i = 0; i < vertices; i++)
        visited[i] = 0;

    int matrix[vertices][vertices];
    printf("Enter graph data in matrix form: \n");
    // Taking input in graph matrix
    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            scanf("%i", &matrix[i][j]);

    int v_init_;
    printf("\nEnter the starting vertex: ");
    scanf("%i", &v_init_);

    int queue[vertices];
    queue[rear] = v_init_;

    printf("\nBFS traversal is:\n");
    // Marking initial matrix as visited
    visited[v_init_] = 1;
    printf("%i ", v_init_);

    bfs(v_init_, visited, matrix, queue);

    if (rear != vertices - 1)
        printf("\nBFS is not possible");
}
// >>> OUTPUT
// Enter the number of vertices: 5
// Enter graph data in matrix form:
// 0 1 0 0 1
// 1 0 1 1 1
// 0 1 0 1 0
// 0 1 1 0 1
// 1 1 0 1 0

// Enter the starting vertex: 0

// BFS traversal is:
// 0  1  4  2  3