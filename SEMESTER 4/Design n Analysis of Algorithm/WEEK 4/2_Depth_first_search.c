// CODE 2: You have been given a graph consisting of N nodes and M edges. The nodes in this graph are enumerated from 1 to N . The graph can consist of self-loops as well as multiple edges. This graph consists of a special node called the head node. You need to consider this and the entry point of this graph. You need to find and print the number of nodes that are unreachable from this head node.

#include <malloc.h>
#include <stdio.h>

typedef struct node
{
    struct node *next;
    int vertex;
} node;

node *G[20];
int visited[20];

void insert(int vi, int vj)
{
    node *q = malloc(sizeof(node));
    q->vertex = vj;
    q->next = NULL;
    if (G[vi] == NULL)
        G[vi] = q;
    else
    {
        node *p = G[vi];
        while (p->next)
            p = p->next;
        p->next = q;
    }
}

void DFS(int i)
{
    node *p = G[i];
    printf("%i ", i);
    visited[i] = 1;

    while (p)
    {
        i = p->vertex;
        if (!visited[i])
            DFS(i);
        p = p->next;
    }
}

int read()
{
    int n, no_of_edges, vi, vj;
    scanf("%i", &n);
    for (int i = 0; i < n; i++)
    {
        G[i] = NULL;
        scanf("%i", &no_of_edges);
        for (int j = 0; j < no_of_edges; j++)
        {
            scanf("%i %i", &n, &vj);
            insert(vi, vj);
        }
    }
    return n;
}

int main()
{
    int n = read();
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    DFS(0);
}

// INPUT:
// 10 10
// 8 1
// 8 3
// 7 4
// 7 5
// 2 6
// 10 7
// 2 8
// 10 9
// 2 10
// 5 10
// 2

// OUTPUT:
// 0