
import java.util.Scanner;

public class Stats {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.print("Enter a string: ");
        String input = sc.nextLine();
        sc.close();
        int upcase = 0, lowcase = 0, digit = 0;
        for (char c : input.toCharArray())
            // switch (Character.getType(c)) {
            //     case Character.UPPERCASE_LETTER:
            //         upcase++;
            //         break;
            //     case Character.LOWERCASE_LETTER:
            //         lowcase++;
            //         break;
            //     case Character.DECIMAL_DIGIT_NUMBER:
            //         digit++;
            // }
            if (Character.isLowerCase(c))
                lowcase++;
            else if (Character.isUpperCase(c))
                upcase++;
            else if (Character.isDigit(c))
                digit++;
        
        System.out.println(lowcase + " " + upcase + " " + digit); // 5 4 4
    }
}
