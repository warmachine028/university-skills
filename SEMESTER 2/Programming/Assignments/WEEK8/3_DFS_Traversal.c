// CODE 3: C program to show the dfs traversal of the graph. (Note: Use the same input as bfs traversal to see the difference)

#include <stdio.h>

int vertices;

void dfs(int i, int visited[], int matrix[][vertices])
{
    printf("%i ", i);
    visited[i] = 1;
    for (int j = 0; j < vertices; j++)
        if (!visited[j] && matrix[i][j] == 1)
            dfs(j, visited, matrix);
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
    printf("Enter adjecency matrix of the graph: \n");
    // Taking input in graph matrix
    for (int i = 0; i < vertices; i++)
        for (int j = 0; j < vertices; j++)
            scanf("%d", &matrix[i][j]);

    int v_init_;
    printf("\nEnter the starting vertex: ");
    scanf("%i", &v_init_);

    printf("\nDFS traversal is:\n");
    dfs(v_init_, visited, matrix);
}

// >>> OUTPUT
// Enter the number of vertices: 5
// Enter adjecency matrix of the graph: 
// 0 1 0 0 1
// 1 0 1 1 1 
// 0 1 0 1 0
// 0 1 1 0 1
// 1 1 0 1 0

// Enter the starting vertex: 0

// DFS traversal is:
// 0 1 2 3 4