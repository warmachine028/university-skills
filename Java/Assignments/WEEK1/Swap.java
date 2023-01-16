class Swap{
    public static void main(String... Args){
	int number1 = 30,
	    number2 = 10;
	System.out.println("INITIALLY");
	System.out.println("number1: "+ number1);
	System.out.println("number2: "+ number2);

	number1 = number1 ^ number2;
	number2 = number1 ^ number2;
	number1 = number1 ^ number2;

	System.out.println("FINALLY");
	System.out.println("number1: "+ number1);
	System.out.println("number2: "+ number2);
    }
}
