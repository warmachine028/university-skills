// CODE 1: (BELLMAN FORD) You are given a graph with n vertices and the edges can have negative weights. Now find the shortest distance for each of the vertices from vertex 1 (that is the 1st vertex of the graph)

#include <stdio.h>
#include <stdlib.h>

void Bellman_Ford(int G[20][20], int V, int E, int edge[20][2])
{
    int distance[20];
    for (int i = 0; i < V; i++)
        distance[i] = __INT_MAX__;
    

    distance[0] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        for (int k = 0; k < E; k++)
        {
            int u = edge[k][0];
            int v = edge[k][1];
            if (distance[u] + G[u][v] < distance[v])
                distance[v] = distance[u] + G[u][v];
        }
    }

    // Actually upto znow shortest path found. But BellmanFord checks for negative edge cycle.
    // In this step we check for that shortest distances if graph doesn't contain negative weight cycle.

    // If we get a shorter path, then there is a negative edge cycle.
    int flag = 1;
    for (int k = 0; k < E; k++)
    {
        int u = edge[k][0];
        int v = edge[k][1];
        if (distance[u] + G[u][v] < distance[v])
        {
            flag = 0;
            return;
        }
    }

    if (flag)
        for (int i = 0; i < V; i++)
            printf("%i ", distance[i]);
}

int main()
{
    int V, edge[20][2], G[20][20], i, j, k = 0;

    scanf("%i", &V);

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
        {
            scanf("%i", &G[i][j]);
            if (G[i][j])
                edge[k][0] = i, edge[k++][1] = j;
        }

    Bellman_Ford(G, V, k, edge);
}

/*
INPUT: 
5
0 1 0 7 0
0 0 5 8 -4
0 -2 0 0 0
0 0 -3 0 9
2 0 7 0 0

EXPECTED OUTPUT: 
0 2 4 7 -2
*/