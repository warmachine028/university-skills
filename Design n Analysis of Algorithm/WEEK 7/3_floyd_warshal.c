// CODE 3: (FLOYD WARSHAL) You are given a graph with n vertices. Find all pair shortest paths for that graph

#include <stdio.h>
#define nV 4

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
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];

    printMatrix(matrix);
}

int main()
{
    int graph[nV][nV] = {{0, 11, 1, 6},
                         {11, 0, 7, 3},
                         {1, 7, 0, 2},
                         {6, 3, 2, 0}};
    floydWarshall(graph);
}

