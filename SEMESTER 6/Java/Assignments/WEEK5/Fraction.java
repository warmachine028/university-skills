public class Fraction {
    int numerator, denominator;

    Fraction(int n, int d) {
        int gcd = gcd(n, d);
        numerator = n / gcd;
        denominator = d / gcd;
    }

    Fraction(int n) {
        this(n, 1);
    }

    Fraction(double n) {
        this((int) (n * getDenominator(n)), getDenominator(n));
    }

    private int gcd(int n1, int n2) {
        return n2 != 0 ? gcd(n2, n1 % n2) : n1;
    }

    private static int getDenominator(double n) {
        String mantissa[] = Double.toString(n).split("[.]");
        int decimalPlaces = mantissa[1].length();
        return (int) Math.pow(10, decimalPlaces);
    }

    void display() {
        System.out.printf("%d/%d\n", numerator, denominator);
    }
}

class Main {

    public static void main(String[] args) {
        Fraction f = new Fraction(4 / 2),
                f1 = new Fraction(3.14),
                f2 = new Fraction(12, 16),
                f3 = new Fraction(19);
        f.display();
        f1.display();
        f2.display();
        f3.display();
    }
}
