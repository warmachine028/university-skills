import java.util.Scanner;

class RangeException extends IndexOutOfBoundsException {
    RangeException(String message) {
        super(message);
    }
}

public class test {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            throw new IndexOutOfBoundsException("Marks must be between 0 and 50");
            // throw new RangeException("Marks must be between 0 and 50");
        } catch (ArithmeticException error) {

        }
    }
}
