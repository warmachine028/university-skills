// CODE 1: Buzz No.: Number divisible by 7 or 10
class BuzzNumber {
    public static void main(String[] args) {
        int testCase = 70;
        if (testCase % 10 == 0 || testCase % 7 == 0)
            System.out.println("Buzz Number");
        else
            System.out.println("Not Buzz Number");
    }
}
