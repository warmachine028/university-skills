public class ImplementingRunnable implements Runnable {
    private int number;

    ImplementingRunnable() {
        this(0);
    }

    ImplementingRunnable(int number) {
        this.number = number;
    }

    @Override
    public void run() {
        System.out.println(number + " Running");
        for (int i : new int[] { 1, 2, 3, 4, 5 }) {
            System.out.println(number + ": " + i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println("Interrupted Execution: " + e.getMessage());
            }
            if (i > 2 && number == 3)
                throw new RuntimeException("Thread " + number + " has been deliberately been Stopped");
        }
        System.out.println(number + " Execution Complete");
    }

}
