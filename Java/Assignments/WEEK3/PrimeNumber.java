import java.util.Scanner;

public class PrimeNumber {
    static Boolean isPrime(int n) {
        Boolean result = true;
        if (n <= 1)
            return result = false;

        for (int i = 2; i <= Math.sqrt(n); i++)
            if (n % i == 0)
                return result = false;
        return result;
    }
}

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        // Prime Number
        if (PrimeNumber.isPrime(n))
            System.out.print("Number is Prime");
        else
            System.out.print("Number is not Prime");
    }

}
