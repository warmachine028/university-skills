import java.util.Scanner;

public class Conversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.next(), 2);
        System.out.println(n);

        int N = Integer.parseInt(sc.next(), 10);
        System.out.println(N);
        sc.close();
    }
}
