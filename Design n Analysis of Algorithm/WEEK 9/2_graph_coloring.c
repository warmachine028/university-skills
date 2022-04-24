/* CODE 2:
You are given a graph with N nodes and M undirected edges.

This graph does not contain self loops and multiple edges between same pair of nodes. You plan to give this to Monk for his birthday so you wish to colour it. You want to colour all the nodes of the graph in either red or blue colour such that each edge has endpoints of different colours. As Monk loves red colour, you also want the number of nodes with red colour to be maximum. Output the maximum number of red coloured nodes you can get in the graph after colouring every vertex under the given constraint. If no such colouring is possible output "NO" (without quotes).
*/

#include <malloc.h>
#include <stdio.h>

#define true 1
#define false 0

int N;

void printRedCount(int* colors, int n_colors)
{
	int* freqs = calloc(n_colors, sizeof(int));
	for (int i = 0; i < N; i++)
		freqs[colors[i] - 1]++;

	// Finding maximum frequency of colors.
	int red = -__INT_MAX__;
	for (int i = 0; i < n_colors; i++)
		red = red > freqs[i] ? red : freqs[i];

	printf("%i\n", red);
}

int isValid(int graph[N][N], int color[])
{
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			if (graph[i][j] && color[i] == color[j])
				return false;
	return true;
}

int graphColoring(int graph[N][N], int i, int color[], int n_colors)
{
	if (i == N)
		return isValid(graph, color);

	for (int j = 1; j <= n_colors; j++) {
		color[i] = j;
		if (graphColoring(graph, i + 1, color, n_colors))
			return true;
		color[i] = 0;
	}
	return false;
}

void solve(int graph[N][N], int* colors, int n_colors)
{
	graphColoring(graph, 0, colors, n_colors)
		? printRedCount(colors, n_colors)
		: printf("NO");

	/*
	for (int i = 0; i < N; i++)
		printf("%i, ", color[i]);
	printf("\n");
	*/
}

int main()
{
	int testCases;
	int n_colors = 2; // RED or BLUE
	scanf("%i", &testCases);

	for (int i = 0; i < testCases; i++) {
		int edges;
		scanf("%i %i", &N, &edges);

		// Initializing matrix for N nodes
		int matrix[N][N];
		for (int j = 0; j < N; j++)
			for (int k = 0; k < N; k++)
				matrix[j][k] = 0;

		for (int j = 0; j < edges; j++) {
			int source, destination;
			scanf("%i %i", &source, &destination);

			// For zero based indexing
			source--, destination--;
			// Undirected Graph
			matrix[source][destination] = 1;
			matrix[destination][source] = 1;
		}

		int* color = calloc(N, sizeof(int));
		solve(matrix, color, n_colors);
	}
}
