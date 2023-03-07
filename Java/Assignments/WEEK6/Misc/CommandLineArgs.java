public class CommandLineArgs {
    public static void main(String[] args) {
        int n1 = Integer.parseInt(args[0]),
            n2 = Integer.parseInt(args[1]);

        System.out.printf("%d + %d = %d\n", n1, n2, n1 + n2);
    }
}
