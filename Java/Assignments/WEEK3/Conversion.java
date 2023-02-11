import java.util.Scanner;

public class Conversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter a Binary Number: ");
        n = Integer.parseInt(sc.next(), 2);
        System.out.println(n);

        System.out.print("Enter a Decimal Number: ");
        n = sc.nextInt();
        System.out.println(Integer.toBinaryString(n));
        sc.close();
    }
}