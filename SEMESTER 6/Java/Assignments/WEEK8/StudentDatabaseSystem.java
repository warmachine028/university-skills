import java.util.Scanner;

class RangeException extends IndexOutOfBoundsException {
    RangeException(String message) {
        super(message);
    }
}

public class StudentDatabaseSystem {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your name: ");
            String name = sc.nextLine();

            System.out.println("Enter your marks: ");
            int subjects = 6, sum = 0, total = 50 * subjects;
            int marks[] = new int[subjects];
            for (int i = 0; i < subjects; i++) {
                int mark = sc.nextInt();
                if (mark < 0 || mark > 50)
                    throw new RangeException("Marks must be between 0 and 50");
                marks[i] = mark;
                sum += mark;
            }
            System.out.println("Marksheet of " + name);
            for (int mark : marks)
                System.out.println(mark);
            System.out.printf("Percentage: %f", (float) sum / total * 100);
        } catch (RangeException error) {
            System.out.println(error.getMessage());
        } catch (ArrayIndexOutOfBoundsException error) {
            System.out.println("Marks of 6 subjects are required");
        }
    }
}
