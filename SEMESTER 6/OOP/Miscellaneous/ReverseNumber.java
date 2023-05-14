// CODE 4: Reverse a number
class ReverseNumber {
    public static void main(String[] args) {
        int n = 101120;
        int temp = n;
        int reverse = 0;
        while (temp != 0) {
            reverse *= 10;
            reverse += temp % 10;
            temp /= 10;
        }
        System.out.println("Reverse of " + n + " is " + reverse);
    }
}
