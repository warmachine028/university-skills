public class ComplexNumber {
    int complex;

    ComplexNumber(int complex) {
        this.complex = complex;
    }

    void divideComplex(ComplexNumber number) {
        System.out.println(this.complex + number.complex);
    }

    public static void main(String[] args) {
        ComplexNumber a = new ComplexNumber(10),
                b = new ComplexNumber(20);
        a.divideComplex(b);
        b.divideComplex(a);
    }
}