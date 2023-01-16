class Factorial4{
    static int factorial(int n){
	return n < 1 ? 1 : n * factorial(n - 1);
    }
    public static void main(String ...Args){
	int number = Integer.parseInt(Args[0]);
	System.out.println("Factorial of " + number + " is " + factorial(number));
    }
}
