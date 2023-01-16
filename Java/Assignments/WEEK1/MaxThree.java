class MaxThree{
    public static void main(String... Args){
	int number1 = 30,
	    number2 = 10,
	    number3 = 20;
	if (number1 > number2)
	    if (number1 > number3)
		System.out.println("number1 is the maximum");
	    else
		System.out.println("number3 is the maximum");
	else if (number2 > number3)
	    System.out.println("number2 is the maximum");
	else
	    System.out.println("number3 is the maximum");
    }
}
