public class ThreadName {
    public static void main(String[] args) {
        /*
        Thread thread = new Thread("Good Thread"),
                thread1 = new Thread("Bad Thread");
        String name = thread.getName(), name1 = thread1.getName();

        System.out.println(name + "\n" + name1);
        */
        String name = Thread.currentThread().getName();
        System.out.println(name);
    }
}
