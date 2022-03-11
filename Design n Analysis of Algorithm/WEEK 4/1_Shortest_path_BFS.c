// CODE 1: Given an adjacency matrix representation of a graph, compute the shortest path from a source vertex to a goal vertex using Breadth First Search. In case of a tie, a smaller indexed vertex should be preferable to a larger indexed vertex.

// The first line is the number of test cases. Thereafter, for every test case, the first line of input is n, the number of vertices in the graph. Then n lines of inputs have n integers each, separated by a space, denoting the adjacency matrix. The next line of input is the index of source and goal, the indexing starts from 0.
#include <malloc.h>
#include <stdio.h>

void print(int *graph, int n)
{
    printf("\nThe Graph\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%i ", graph[i * n + j]);
        printf("\n");
    }
}

void initialize(int *visited, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            visited[i * n + j] = 0;
}

void insert(int *queue, int n)
{
}

int find_shortest_path(int *graph, int n, int s, int g)
{
    int queue[n];
    int visited[n][n];
    initialize(*visited, n);
    queue[0] = s;

    visited[s][s] = 1;
    print(*visited, n);
}

void main()
{
    int test_cases;
    test_cases = 1;
    // scanf("%i", &test_cases);
    for (int i = 0; i < test_cases; i++)
    {
        int n; // The number of vertices in graph
        n = 5;
        // scanf("%i", &n);
        int graph[][5] = {
            {0, 1, 1, 0, 0},
            {1, 0, 1, 0, 0},
            {1, 1, 0, 1, 0},
            {0, 0, 1, 0, 1},
            {0, 0, 0, 1, 0}};
        // int *graph = malloc(sizeof(n) * n * n);
        // for (int i = 0; i < n; i++)
        //     for (int j = 0; j < n; j++)
        //         graph[i * n + j] = i * j;

        int source, goal;
        source = 0, goal = 5;
        // scanf("%i %i", &source, &goal);
        find_shortest_path(*graph, n, source, goal);
    }
}