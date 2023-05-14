class Sum2D {
    public static void main(String[] args) {
        int array[][] = {
                { 0, 1, 2, 3, 4 },
                { 5, 6, 7, 8, 9 }
        };
        int sum = 0;
        for (int i[] : array)
            for(int j: i)
                sum += j;
        System.out.println(sum);
    }
}
