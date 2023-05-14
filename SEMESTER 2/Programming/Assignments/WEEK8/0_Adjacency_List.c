// CODE 0: Given an undirected Graph of N vertices: 1 to N, and M edges, consider the representation of the input graph (given next) such that that there is an edge between vertex X and vertex Y, the task is to write a C program to create Adjacency List of the given Graph:

// 0 -- 1
// | /  | > 2
// 4 -- 3

#include <stdio.h>
#include <malloc.h>

typedef struct node
{
    int dest;
    struct node *next;
} node;

typedef struct
{
    node *head;
} list;

typedef struct
{
    int vertices;
    list *array;
} graph;

node *createnode(int dest)
{
    node *temp = malloc(sizeof(node));
    temp->dest = dest;
    temp->next = NULL;
    return temp;
}

graph *createGraph(int v)
{
    graph *temp = malloc(sizeof(graph));
    temp->vertices = v;
    temp->array = malloc(v * sizeof(list));
    for (int i = 0; i < v; i++)
        temp->array[i].head = NULL;
    return temp;
}

void addEdge(graph *graph, int src, int dest)
{
    node *temp = createnode(dest);
    temp->next = graph->array[src].head;
    graph->array[src].head = temp;

    temp = createnode(src);
    temp->next = graph->array[dest].head;
    graph->array[dest].head = temp;
}

void print(graph *graph)
{
    for (int v = 0; v < graph->vertices; v++)
    {
        printf("\nVERTEX %i\n", v);
        printf("head -> ");
        node *ref = graph->array[v].head;
        while (ref->next)
        {
            printf("%i -> ", ref->dest);
            ref = ref->next;
        }
        printf("%i\n", ref->dest);
    }
}

void main()
{
    int V = 5;
    graph *graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printf("Adjacency Lists for graph:\n");
    print(graph);
}

// >>> OUTPUT:
// Adjacency Lists for graph:

// VERTEX 0
// head -> 4 -> 1

// VERTEX 1
// head -> 4 -> 3 -> 2 -> 0

// VERTEX 2
// head -> 3 -> 1

// VERTEX 3
// head -> 4 -> 2 -> 1

// VERTEX 4
// head -> 3 -> 1 -> 0