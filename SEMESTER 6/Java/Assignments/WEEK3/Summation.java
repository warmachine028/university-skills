import java.util.Scanner;

public class Summation {
    static int sum(int n) {
        return n * (n + 1) / 2;
    }
}

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println(Summation.sum(n));
    }
}
