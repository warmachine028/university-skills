import java.util.Arrays;

public class ThreadThread { // ! Process Not recommended
    public static void main(String[] args) {
        Thread t1 = new Thread(
                () -> Arrays.asList(1, 2, 3, 4).stream().forEach((item) -> System.out.print(item + " ")));
        Thread thread = new Thread(t1);
        thread.start();
    }
}
