import java.util.Scanner;

class Sum {
    int sum(int a, int b) {
        return a + b;
    }
}

public class Summation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(),
                b = sc.nextInt();
        System.out.println("SUM of" + a + " &" + b + " is:" + new Sum().sum(a, b));
        sc.close();
    }
}
