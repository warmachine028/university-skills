import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int flag = 0;
        if (n == 1)
            flag = 1;
        for (int i = 2; i <= Math.sqrt(n) + 1; i++)
            if (n % i == 0) {
                flag = 1;
                break;
            }
        if (flag == 1)
            System.out.println("This is a not a Prime Number");
        else
            System.out.println("This is a Prime Number");
        sc.close();
    }

}
