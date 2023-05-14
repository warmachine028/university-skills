class SumDiagonal {
    public static void main(String[] args) {
        int array[][] = {
                { 0, 1, 2, 3, 5 },
                { 5, 6, 7, 8, 9 },
                { 0, 1, 2, 3, 4 },
                { 5, 6, 7, 8, 9 },
                { 0, 1, 2, 3, 4 },
        };
        int leftDiagonal = 0, rightDiagonal = 0;
        int length = array.length;
        for (int i = 0; i < length; i++) {
            int row[] = array[i];
            leftDiagonal += row[i]; // First Element
            rightDiagonal += row[length - i - 1]; // Last Element
        }
        System.out.println(leftDiagonal);
        System.out.println(rightDiagonal);
    }
}
