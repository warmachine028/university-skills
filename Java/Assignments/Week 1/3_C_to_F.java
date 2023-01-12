// CODE 3: Write a Java program to change temperature from Celsius to Fahrenheit
// F = C * 1.8 + 32

class Celsius_to_Fahrenheit {
    public static void main (String Args[])
    {
        double celsius = 30.2;
        double fahrenheit  = celsius * 1.8 + 32;
        System.out.printf("Temperature in fahrenheit is: %.2f", fahrenheit);
    }
}