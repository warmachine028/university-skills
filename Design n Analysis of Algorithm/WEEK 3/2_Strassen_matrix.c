// CODE 2: You are given two square matrices and multiply them using Strassen's matrix multiplication algorithm.

int *multiply(int **matrix1, int **matrix2, int n)
{
    int matrix[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
            for (int k = 0; k < n; k++)
                matrix[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    
    return matrix;
}