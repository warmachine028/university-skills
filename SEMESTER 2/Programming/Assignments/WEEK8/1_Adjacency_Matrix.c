// CODE 1: Given a undirected Graph of N vertices: 1 to N, and M edges, consider the representation of the input graph such that that there is an edge between vertex X and vertex Y, the task is to write a C program to create Adjacency Matrix of the given Graph.

//    0 - 1                A -> Vertex
//    | \ | > 4            | -> Edge
//    2 - 3

#include <stdio.h>

int N = 5, M;
// N vertices and M Edges

void createAdjMatrix(int Adj[N][N], int arr[M][2])
{

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            Adj[i][j] = 0;

    for (int i = 0; i < M; i++)
    {
        int x = arr[i][0];
        int y = arr[i][1];

        Adj[x][y] = 1,
        Adj[y][x] = 1;
    }
}

void print(int Adj[][N])
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%i ", Adj[i][j]);
        printf("\n");
    }
}

void main()
{
    int Adj[N][N];

    int arr[][2] = {{0, 1},
                    {0, 2},
                    {0, 3},
                    {1, 3},
                    {1, 4},
                    {2, 3},
                    {3, 4}};

    M = sizeof arr / sizeof arr[0];

    createAdjMatrix(Adj, arr);

    // Printing the matrix
    printf("The Matrix is:\n");
    print(Adj);
}

// The Matrix is:
// 0 1 1 1 0
// 1 0 0 1 1
// 1 0 0 1 0
// 1 1 1 0 1
// 0 1 0 1 0