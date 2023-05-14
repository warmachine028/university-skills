// CODE 1: Given an adjacency matrix representation of a graph, compute the shortest path from a source vertex to a goal vertex using Breadth First Search. In case of a tie, a smaller indexed vertex should be preferable to a larger indexed vertex.

#include <stdio.h>
int graph[100][100], q[100], prev[100], visited[100];
int front, rear;

int bfs(int source, int destination, int n)
{
    while (front <= rear)
    {
        visited[source] = 1;
        for (int i = 0; i <= n; i++)
            if (graph[source][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                prev[i] = source;
                q[rear++] = i;
            }
        source = q[front++];
        if (source == destination)
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%i", &n);

    for (int tc = 0; tc < n; tc++)
    {
        int total, source, destination;
        scanf("%i", &total);
        for (int i = 0; i <= total; i++)
            prev[i] = -1,
            visited[i] = 0;
        for (int i = 1; i <= total; i++)
            for (int j = 1; j <= total; j++)
                scanf("%i", &graph[i][j]);

        scanf("%i %i", &source, &destination);
        source++, destination++;
        front = rear = 0;
        int flag = bfs(source, destination, total);
        int path[100] = {0};
        int ctr = 0;
        if (flag)
        {
            while (prev[destination] != -1)
                path[ctr++] = destination,
                destination = prev[destination];
            printf("%i\n", ctr);
            printf("\n%i ", source - 1);
            for (int i = ctr - 1; i >= 0; i--)
                printf("%i ", path[i] - 1);
            printf(" ");
        }
        else
            printf("Not Found");
    }
}

// INPUT:
// 1
// 5
// 0 1 1 0 0
// 1 0 1 0 0
// 1 1 0 1 0
// 0 0 1 0 1
// 0 0 0 1 0
// 0 4

// OUTPUT:
// 3

// 0 2 3 4