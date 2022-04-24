// CODE 3: You are given 2 strings and you have to find the Longest Common Subsequence between them.

#include <malloc.h>
#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int LCS(char* S1, char* S2)
{
	int m = strlen(S1);
	int n = strlen(S2);

	int LCS_table[n + 1][m + 1];
	for (int i = 0; i <= m; i++)
		LCS_table[0][i] = 0;

	for (int i = 0; i <= n; i++)
		LCS_table[i][0] = 0;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			int x = LCS_table[i - 1][j];
			int y = LCS_table[i][j - 1];

			int res;
			if (S1[j - 1] == S2[i - 1])
				res = LCS_table[i - 1][j - 1] + 1;
			else
				res = max(x, y);
			LCS_table[i][j] = res;
		}
	return LCS_table[n][m];
}

int main()
{
	// int string_size = 100;
	// char* str1 = malloc(sizeof(char) * string_size);
	// char* str2 = malloc(sizeof(char) * string_size);

	// fgets(str1, string_size, stdin);
	// fgets(str2, string_size, stdin);

	char str1[] = "todolomejor";
	char str2[] = "rolcmhjrt";

	int result = LCS(str1, str2);
	printf("%i\n", result);
}

/*
	SNIPPET : To find the subsequence
	int index = LCS_table[m][n];

	char result[index + 1];
	result[index] = '\0';

	int i = m, j = n;
	while (i && j)
		if (S1[i - 1] == S2[j - 1]) {
			result[--index] = S1[--i];
			j--;
		}

		else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
			i--;
		else
			j--;
	printf("%i", LCS_table[m][n]);
*/
