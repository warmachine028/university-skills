class EvenSum {
    public static void main(String[] args) {
        int array[] = new int[] { 1, 2, 3, 4, 5, 6, 7, 8 };
        int sum = 0;
        for (int item : array)
            sum += item % 2 != 0 ? 0 : item;
        System.out.println(sum);
    }
}
