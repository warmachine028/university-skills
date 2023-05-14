// CODE 1: Write a java Program to create a thread by extending the Thread class

public class ExtendingThread extends Thread {
    @Override
    public void run() {
        for (int i = 0; i < 5; i++)
            System.out.print(i + " ");
    }

    public static void main(String[] args) {
        new ExtendingThread().start();
    }
}
