public class ThreadPriority implements Runnable {
    @Override
    public void run() {
        Thread thread = Thread.currentThread();
        String name = thread.getName();

        System.out.printf("%s Started\n", thread);
        for (int i = 0; i < 3; i++)
            System.out.println(i + " of " + name);
        System.out.printf("%s Ended\n", thread);

    }

    public static void main(String[] args) {
        Thread thread1 = new Thread(new ThreadPriority()),
                thread2 = new Thread(new ThreadPriority()),
                thread3 = new Thread(new ThreadPriority()),
                thread4 = new Thread(new ThreadPriority());

        thread1.setPriority(1);
        thread2.setPriority(3);
        thread3.setPriority(5);
        thread4.setPriority(7);
        for (Thread thread : new Thread[] { thread1, thread2, thread3, thread4 })
            thread.start();
    }

}
