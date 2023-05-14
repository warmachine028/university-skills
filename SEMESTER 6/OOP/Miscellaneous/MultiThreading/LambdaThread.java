import java.util.Arrays;

public class LambdaThread {
    public static void main(String[] args) {
        Thread thread = new Thread(
                () -> Arrays.asList(1, 2, 3, 4)
                        .stream()
                        .forEach((e) -> System.out.print(e + " ")));
        thread.start();
    }
}
