// CODE 1: Given a chess board having cells, you need to place N queens on the board in such a way that no queen attacks any other queen.

#include <stdio.h>

int N;
#define true 1
#define false 0

void print(int board[N][N])
{
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
			printf("%i ", board[i][j]);
		printf("\n");
	}
}

int isValid(int board[N][N], int row, int col)
{
	for (int i = 0; i < col; i++)
		if (board[row][i])
			return false;

	for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false;

	for (int i = row, j = col; j > -1 && i < N; i++, j--)
		if (board[i][j])
			return false;

	return true;
}

int NQueens(int board[N][N], int col)
{
	if (col >= N)
		return true;

	for (int i = 0; i < N; i++)
		if (isValid(board, i, col))
		{
			board[i][col] = 1;
			if (NQueens(board, col + 1))
				return true;
			board[i][col] = 0; // BACKTRACK
		}

	return false;
}

void solve()
{
	// Initializing chess board with zeros
	int board[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			board[i][j] = 0;

	NQueens(board, 0)
		? print(board)
		: printf("Not Possible");
}

int main()
{
	scanf("%i", &N);
	solve();
}

// INPUT:
// 4

// OUTPUT: 
// 0 1 0 0 
// 0 0 0 1 
// 1 0 0 0 
// 0 0 1 0
