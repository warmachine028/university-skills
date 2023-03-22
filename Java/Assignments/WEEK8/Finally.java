import java.util.Scanner;

public class Finally {
    static void exceptionDoesntOccur() {
        int a = 10, b = 20;
        System.out.println(a / b);
    }

    static void exceptionNotHandled() throws ArrayIndexOutOfBoundsException {
        int x[] = new int[] { 1, 2, 3 };
        x[3] = 10;
    }

    static void exceptionHandled() throws StringIndexOutOfBoundsException {
        String string = "Hello, World!";
        string.charAt(18);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(
                  "1. Exception Doesn't Occur\n"
                + "2. Exception Not Handled\n"
                + "3. Exception Handled"
        );
        System.out.print("Enter Choice: ");
        int choice = sc.nextInt();
        sc.close();
        try {
            switch (choice) {
                case 3:
                    exceptionHandled();
                    break;
                case 2:
                    exceptionNotHandled();
                    break;
                case 1:
                default:
                    exceptionDoesntOccur();
            }
        } catch (StringIndexOutOfBoundsException error) {
            System.out.println("Exception Handled");
        } finally {
            System.out.println("Finally Block executed");
        }
    }
}
