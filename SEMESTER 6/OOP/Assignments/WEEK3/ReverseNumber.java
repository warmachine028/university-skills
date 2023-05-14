public class ReverseNumber {
    static int reverse(int n) {
        int result = 0;
        while (n > 0) {
            int remainder = n % 10;
            result = result * 10 + remainder;
            n /= 10;
        }
        return result;
    }

    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        System.out.println(reverse(n));
    }

}
