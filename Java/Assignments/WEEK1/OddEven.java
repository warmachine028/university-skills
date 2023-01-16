class OddEven{
    static boolean oddEven(int n){
	return n % 2 == 0;
    }
    public static void main(String ... Args){
	int number = 3;
	System.out.println(number + " is " + (oddEven(number) ? "Even" : "Odd"));
    }
}
