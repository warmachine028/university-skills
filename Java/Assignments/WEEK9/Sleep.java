import java.io.IOError;
import java.io.IOException;

public class Sleep implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 5; i++) {
            try {
                Thread.sleep(500);
                System.out.print(i + " ");
            } catch (InterruptedException e) {
            }
        }
    }

    public static void main(String[] args) {
        new Thread(new Sleep()).start();
    }
}