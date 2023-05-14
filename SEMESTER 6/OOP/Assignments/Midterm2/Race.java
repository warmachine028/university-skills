public class Race implements Runnable {
	static Thread hare, tortoise;

	@Override
	public void run() {
		Thread current = Thread.currentThread();
		Boolean threadIsHare = current == hare;
		for (int i = 1; i <= 100; i++) {
			if (i == 60 && threadIsHare) {
				System.out.println(current.getName() + " paused");
				try {
					current.sleep(5000);
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
			System.out.printf("Step %d %s\n", i, current.getName());
		}
		if (threadIsHare) {
			System.out.println("Hare Won!");
			System.out.println("Stopping Tortoise...");
			tortoise.stop();
			return;
		}
		System.out.println("Tortoise Won!");
		System.out.println("Stopping Hare...");
		hare.stop();
	}

	public static void main(String args[]) {
		var race = new Race();
		hare = new Thread(race, "Hare");
		tortoise = new Thread(race, "Tortoise");

		hare.setPriority(10);
		hare.start();
		tortoise.start();
	}
}

