import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        int length = n.length(), flag = 1;
        for (int i = 0; i < length / 2; i++) {
            if (n.charAt(i) != n.charAt(length - i - 1)) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            System.out.println("Number is a Palindrome");
        else
            System.out.println("Number is not a Palindrome");
        sc.close();
    }
}