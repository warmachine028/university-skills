import java.util.Scanner;

public class ArmstrongNumber {
    Boolean result;

    int noOfDigits(int n) {
        return Integer.toString(Math.abs(n)).length();
    }

    int[] getDigits(int n) {
        int digits[] = new int[noOfDigits(n)];
        String s = Integer.toString(Math.abs(n));
        for (int i = 0; i < s.length(); i++)
            digits[i] = Integer.parseInt(s.charAt(i) + "");
        return digits;
    }

    ArmstrongNumber(int n) {
        int n_digits = noOfDigits(n);
        int digits[] = getDigits(n);
        int number = 0;
        for (int digit : digits)
            number += Math.pow(digit, n_digits);

        result = number == Math.abs(n);
    }
}

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        if (new ArmstrongNumber(n).result)
            System.out.print("Armstrong Number");
        else
            System.out.print("Not an Armstrong Number");

    }
}