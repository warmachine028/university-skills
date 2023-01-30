import java.util.Arrays;

class MatrixMultiply {
    public static void main(String[] args) {
        int m1[][] = {
                { 0, 1, 2, 3, 5 },
                { 5, 6, 7, 8, 9 },
                { 0, 1, 2, 3, 4 },
                { 5, 6, 7, 8, 9 },
                { 0, 1, 2, 3, 4 },
        };
        int m2[][] = {
                { 0, 1, 2, 3, 5 },
                { 5, 6, 7, 8, 9 },
                { 0, 1, 2, 3, 4 },
                { 5, 6, 7, 8, 9 },
                { 0, 1, 2, 3, 4 },
        };
        int len = m1.length;
        int result[][] = new int[len][len];
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                for (int k = 0; k < len; k++)
                    result[i][j] += m1[i][k] * m2[k][j];

        System.out.println(Arrays.deepToString(result));
    }

}
