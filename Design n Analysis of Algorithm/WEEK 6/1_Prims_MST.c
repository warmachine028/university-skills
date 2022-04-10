// CODE 1: Given a weighted undirected graph. Find the sum of weights of edges of a Minimum Spanning Tree using Prims Algorithm.

#include <stdlib.h>
#include <stdio.h>

// Finding vertex with min key value, not in MST
int minKey(int key[], _Bool mstSet[], int n)
{
    // Initialize min value
    int min = __INT_MAX__, min_index = 0;

    for (int v = 0; v < n; v++)
        if (!mstSet[v] && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

int calculateMinimumWeights(int *parent, int **graph, int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
        sum += graph[i][parent[i]];
    return sum;
}

// Prim's Algorithm: Construct the MST
int primsMST(int **graph, int n)
{
    int parent[n]; // Array to store constructed MST

    int key[n]; // Key values used to pick minimum weight edge in cut

    _Bool mstSet[n]; // To set of vertex as visited

    // Initialize all keys as INFINITE
    for (int i = 0; i < n; i++)
        key[i] = __INT_MAX__,
        mstSet[i] = 0;

    // Include 1st vertex in MST. Make key 0 so that this vertex is picked as first vertex.
    key[0] = 0;
    parent[0] = -1; // root of MST

    for (int count = 0; count < n - 1; count++)
    {
        // Pick the minimum key vertex from the set of unvisited vertices
        int u = minKey(key, mstSet, n);
        mstSet[u] = 1; // Add the picked vertex to the MST Set

        // Ukdate k-v and parent index of adjacent vertex of picked vertex
        for (int v = 0; v < n; v++)
            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    // Calculate sum of minimum weights
    return calculateMinimumWeights(parent, graph, n);
}

int main()
{
    int n, m;
    scanf("%i %i", &n, &m);

    // Allocating graph in Adjacency Matrix format
    int **graph = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        graph[i] = calloc(sizeof(int), n);

    for (int i = 0; i < m; i++)
    {
        int source, destination, weight;
        scanf("%i %i %i", &source, &destination, &weight);
        source--, destination--; // Since 0 indexing

        // Since undirected, so both source <-> destination
        graph[source][destination] = graph[destination][source] = weight;
    }

    printf("%i", primsMST(graph, n));
}
