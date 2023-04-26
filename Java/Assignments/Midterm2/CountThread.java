public class CountThread {
	public static void main(String[] args) {
		new Thread(() -> {
				for (int i = 1; i <= 1000; i++)
					System.out.println(i);
		}).start();

		new Thread(() -> {
				for (int i = 1000; i >= 1; i--)
					System.out.println(i);
		}).start();
	}
}


