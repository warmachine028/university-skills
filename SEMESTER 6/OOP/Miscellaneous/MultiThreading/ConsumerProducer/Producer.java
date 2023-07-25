package ConsumerProducer;

public class Producer implements Runnable {
    Company company;

    Producer(Company c) {
        company = c;
    }

    public void run() {
        for (int i = 1; true; i++) {
            this.company.produceItem(i);
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(e.getMessage());
            }
        }
    }
}
