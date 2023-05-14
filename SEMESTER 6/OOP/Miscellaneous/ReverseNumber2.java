class ReverseNumber2 {
    static int reverse(int num) {
        return reversePrev(num, 0);
    }

    static int reversePrev(int num, int prev) {
        if (num < 10)
            return num + prev;
        else {
            prev += num % 10;
            return reversePrev(num / 10, prev * 10);
        }
    }

    public static void main(String[] args) {
        int n = 101110;
        int reverse = reverse(n);
        System.out.println("The reverse of " + n + " is " + reverse);
    }
}
