import java.util.*;

class DataSize {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++) {
            try {
                long l = sc.nextLong();
                System.out.println(l + " can be fitted in:");
                if (Byte.MIN_VALUE <= l && l <= Byte.MAX_VALUE)
                    System.out.println("* byte");
                if (Short.MIN_VALUE <= l && l <= Short.MAX_VALUE)
                    System.out.println("* short");
                if (Integer.MIN_VALUE <= l && l <= Integer.MAX_VALUE)
                    System.out.println("* int");
                System.out.println("* long");
            } catch (Exception e) {
                System.out.println(sc.next() + " can't be fitted anywhere.");
            }
        }
        sc.close();
    }
}
