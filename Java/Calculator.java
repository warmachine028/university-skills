/*CODE: Create a new class called Calculator with the following methods:
 * 1. A Static method called powerInt(int num1, int num2)
 * This method should return num1 to the power num2
 * 2. A static method called powerDouble(double num1, int num2).
 * This method should return num1 to the power num2.
 * 3. Invoke both the methods and test the functionalities.
 * Hint: Use Math.pow(double, double) to calculate power.
 */

class Calculator {
    static int powerInt(int num1, int num2) {
        return (int) Math.pow(num1, num2);
    }

    static double powerDouble(double num1, int num2) {
        return Math.pow(num1, num2);
    }
}

class Main {
    public static void main(String... args) {
        int resultInt = Calculator.powerInt(10, 2);
        double resultDouble = Calculator.powerDouble(10, 5);
        System.out.println(resultInt);
        System.out.println(resultDouble);
    }
}