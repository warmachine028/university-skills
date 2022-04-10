// CODE 2: Given a weighted undirected graph. Find the sum of weights of edges of a Minimum Spanning Tree using Kruskal's Algorithm.


#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int src, dest, weight;
} Edge;

typedef struct
{
    int V, E;
    Edge *edge;
} Graph;

typedef struct
{
    int parent, rank;
} Subset;

Graph *createGraph(int V, int E)
{
    Graph *graph = malloc(sizeof(Graph));
    graph->V = V;
    graph->E = E;
    graph->edge = malloc(E * sizeof(Edge));

    return graph;
}

int find(Subset *subsets, int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}
void Union(Subset *subsets, int x, int y)
{
    int xroot = find(subsets, x), yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;

    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;

    else
        subsets[yroot].parent = xroot, subsets[xroot].rank++;
}
int comparator(const void *a, const void *b)
{
    return ((Edge *)a)->weight > ((Edge *)b)->weight;
}

void KruskalMST(Graph *graph)
{
    int V = graph->V, e = 0, i = 0;
    Edge *result = malloc(sizeof(Edge) * V);

    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), comparator);

    Subset *subsets = malloc(V * sizeof(Subset));

    for (int v = 0; v < V; ++v)
        subsets[v].parent = v, subsets[v].rank = 0;

    while (e < V - 1 && i < graph->E)
    {
        Edge next_edge = graph->edge[i++];

        int x = find(subsets, next_edge.src), y = find(subsets, next_edge.dest);
        if (x != y)
        {
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }

    int minimumCost = 0;
    for (i = 0; i < e; ++i)
        minimumCost += result[i].weight;

    printf("%d", minimumCost);
    
}

int main()
{
    int V, E;
    scanf("%i %i", &V, &E);
    Graph *graph = createGraph(V, E);

    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        scanf("%i %i %i", &u, &v, &w);

        graph->edge[i].src = u - 1; // if indexing is from 0
        graph->edge[i].dest = v - 1;
        graph->edge[i].weight = w;
    }

    KruskalMST(graph);
}
