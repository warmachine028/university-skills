// CODE 3: You are given 2 strings and you have to find the Longest Common Subsequence between them.

#include <malloc.h>
#include <stdio.h>
#include <string.h>

int LCS(char* S1, char* S2)
{
	int m = strlen(S1) - 1;
	int n = strlen(S2) - 1;

	int LCS_table[m][n];
	for (int i = 0; i <= m; i++)
		LCS_table[i][0] = 0;
	for (int i = 0; i <= n; i++)
		LCS_table[0][i] = 0;

	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++) {
			int res = LCS_table[i][j - 1];
			if (S1[i - 1] == S2[j - 1])
				res = LCS_table[i - 1][j - 1] + 1;
			else if (LCS_table[i - 1][j]
				>= LCS_table[i][j - 1])
				res = LCS_table[i - 1][j];
			LCS_table[i][j] = res;
		}

	return LCS_table[m][n];
}

int main()
{
	int string_size = 100;
	char* str1 = malloc(sizeof(char) * string_size);
	char* str2 = malloc(sizeof(char) * string_size);

	fgets(str1, string_size, stdin);
	fgets(str2, string_size, stdin);

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
