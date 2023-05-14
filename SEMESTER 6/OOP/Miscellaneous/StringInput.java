import java.util.Scanner;

public class StringInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Number: ");
        Integer n = scanner.nextInt();
        System.out.print("Enter Double: ");
        Double d = scanner.nextDouble();
        scanner.nextLine(); // JAva Expects newLine after inputting a double
        System.out.print("Enter String: ");
        String str = scanner.nextLine();
        
        
        System.out.println("Double: " + d);
        System.out.println("Integer: " + n);
        System.out.println("String: " + str);

        scanner.close();
    }
}
