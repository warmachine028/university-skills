import java.util.Scanner;

public class ScanReader {
    public static void main(String... args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a word");
            String word = sc.next();
            String string = sc.nextLine();
            int integer = sc.nextInt();
            System.out.println(word + string + integer);
        }
    }
}
