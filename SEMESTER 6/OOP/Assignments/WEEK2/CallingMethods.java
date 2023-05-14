class CallingMethods {
    static void callByValue(int a) {
        a += 10;
    }

    static void callByReference(int[] a) {
        a[0] += 10;
    }

    public static void main(String[] args) {
        int n = 100;
        int b[] = { 100 };
        callByValue(n);
        callByReference(b);
        System.out.println(n); // Called by value -> NO change
        System.out.println(b[0]); // Called by reference -> Change reflected
    }
}