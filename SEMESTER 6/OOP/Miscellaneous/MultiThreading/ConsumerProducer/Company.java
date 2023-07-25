package ConsumerProducer;

public class Company {
    int items;
    boolean produced;
    // produced == false -> producer
    // produced == true -> consumer

    synchronized public void produceItem(int n) {
        if (produced) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
        items = n;
        System.out.println("Produced: " + items);
        produced = true;
        notify();
    }

    synchronized public int consumeItem() {
        if (!produced) {
            try {
                wait();
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
        System.out.println("Consumed: " + items);
        produced = false;
        notify();
        return items;
    }
}
