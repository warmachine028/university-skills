import java.util.Scanner;
import java.util.regex.*;

public class Regex {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int testCases = Integer.parseInt(in.nextLine());
        while (testCases > 0) {
            String pattern = in.nextLine();
            // Write your code
            try {
                Pattern.compile(pattern);
                System.out.println("Valid");
            } catch (PatternSyntaxException e) {
                System.out.println("Invalid");
            }
            testCases--;
        }
        in.close();
    }
}

/*
 * ([A-Z])(.+)
 * [AZ[a-z](a-z)
 * batcatpat(nat
 */