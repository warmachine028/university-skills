class Factorial3{
    public static void main(String ... Args){
	int number = 10;
	Factorial fact = new Factorial();
	System.out.println("The factorial of " + number + " is " + fact.factorial(number));
    }
}

class Factorial{
    int factorial(int n){
	return n < 1 ? 1 : n * factorial(n - 1);
    }
}
