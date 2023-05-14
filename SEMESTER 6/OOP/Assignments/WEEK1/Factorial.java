class Factorial {
	public static void main(String... Args) {
		int number = 10;
		int temp = number;
		int factorial = 1;
		while (temp != 1) {
			factorial *= temp;
			temp--;
		}
		System.out.println("Factorial of " + number + " is " + factorial);
	}
}
