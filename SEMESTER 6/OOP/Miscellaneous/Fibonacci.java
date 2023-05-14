// CODE 2: Print n fibonacci numbers
class Fibonacci {
    public static void main(String[] args) {
        int n = 93;
        long first = 0, second = 1, temp;
        for (int i = 0; i < n; i++) {
            // first = fibonacci(i + 1);
            System.out.print(first + ", ");
            {
                temp = first;
                first = second;
                second = second + temp;
            }
        }
        System.out.println("...");
    }
    
    static int fibonacci(int n) {
        if (n == 1)
            return 0;
        else if (n == 2)
            return 1;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }

}
