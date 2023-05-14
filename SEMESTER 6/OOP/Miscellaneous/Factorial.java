// CODE 2: Calculate Factorial of 12
class Factorial {
    static int factorial(int n) {
        return n < 1 ? 1 : n * factorial(n - 1);
    }

    public static void main(String[] args) {
        int n = 12;
        System.out.println("Factorial of " + n + " is " + factorial(n));
    }
}
