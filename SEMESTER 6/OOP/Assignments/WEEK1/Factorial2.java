class Factorial2 {
    static int factorial(int n) {
        return n < 1 ? 1 : n * factorial(n - 1);
    }

    public static void main(String... Args) {
        int number = 5;
        System.out.println("Factorial of " + number + " is " + factorial(number));
    }
}
