class CheckArgumentException extends RuntimeException {
    CheckArgumentException(String message) {
        super(message);
    }
}

public class UserDefinedException {
    public static void main(String[] args) {
        try {
            int sum = 0;
            for (int i = 0; i < 5; i++)
                sum += Integer.parseInt(args[i]);
            System.out.println("Sum of these numbers is: " + sum);
        } catch (IndexOutOfBoundsException error) {
            throw new CheckArgumentException(error.getMessage());
        }
    }
}
