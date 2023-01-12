// CODE 4: Write a Java program to change temperature from Fahrenheit to Celsius.
// C = (F - 32) / 1.8
class Fahrenheit_to_Celcius {
    public static void main(String Args[]) {
        double fahrenheit = 122;
        double celcius = (fahrenheit - 32) / 1.8;
        System.out.printf("The temperature in Fahrenheit is: %.2f", celcius);
    }
}