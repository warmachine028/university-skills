// CODE 2: You are given two square matrices and multiply them using Strassen's matrix multiplication algorithm.

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%i %i", &n, &m);
    int a[n][n], b[m][m], c[2][2];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%i", &a[i][j]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%i", &b[i][j]);

    int m1 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
    int m2 = (a[1][0] + a[1][1]) * b[0][0];
    int m3 = a[0][0] * (b[0][1] - b[1][1]);
    int m4 = a[1][1] * (b[1][0] - b[0][0]);
    int m5 = (a[0][0] + a[0][1]) * b[1][1];
    int m6 = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
    int m7 = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);

    c[0][0] = m1 + m4 - m5 + m7;
    c[0][1] = m3 + m5;
    c[1][0] = m2 + m4;
    c[1][1] = m1 - m2 + m3 + m6;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%i ", c[i][j]);
        printf("\n");
    }
}

// INPUT:
// 2
// 2
// 1 2
// 2 1
// 2 4
// 1 2

// OUTPUT:
// 4 8
// 5 10
