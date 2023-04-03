// CODE 1: Write a java Program to create a thread by implementing the Runnable interface

public class ImplementingRunnable implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 5; i++)
            System.out.print(i + " ");
    }

    public static void main(String[] args) {
        new Thread(new ImplementingRunnable()).start();
    }
}
