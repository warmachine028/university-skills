// CODE 3: You are given a graph with n vertices. Find all pair shortest paths for that graph

#include <stdio.h>
int nV;
#define min(a, b) a < b ? a : b

void printMatrix(int matrix[][nV])
{
    for (int i = 0; i < nV; i++)
    {
        for (int j = 0; j < nV; j++)
            printf("%i ", matrix[i][j]);
        printf("\n");
    }
}

void floydWarshall(int graph[][nV])
{
    int matrix[nV][nV];

    for (int i = 0; i < nV; i++)
        for (int j = 0; j < nV; j++)
            matrix[i][j] = graph[i][j];

    for (int k = 0; k < nV; k++)
        for (int i = 0; i < nV; i++)
            for (int j = 0; j < nV; j++)
                matrix[i][j] = min(matrix[i][k] + matrix[k][j], matrix[i][j]);

    printMatrix(matrix);
}

int main()
{
    scanf("%i", &nV);
    int graph[nV][nV];
    for (int i = 0; i < nV; i++)
        for (int j = 0; j < nV; j++)
            scanf("%i", &graph[i][j]);

    floydWarshall(graph);
}

// INPUT:
// 4
// 0 11 1 6
// 11 0 7 3
// 1 7 0 2
// 6 3 2 0

// OUTPUT:
// 0 6 1 3
// 6 0 5 3
// 1 5 0 2
// 3 3 2 0
