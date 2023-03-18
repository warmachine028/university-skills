import java.util.*;

public class ArrayLists {
    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        Scanner sc = new Scanner(System.in);
        List<List<Integer>> arr = new ArrayList<>();
        int m = sc.nextInt();
        for (int i = 0; i < m; i++) {
            List<Integer> inArr = new ArrayList<>();
            int n = sc.nextInt();
            for (int j = 0; j < n; j++)
                inArr.add(sc.nextInt());
            arr.add(inArr);
        }

        m = sc.nextInt();
        for (int i = 0; i < m; i++) {
            int x = sc.nextInt(), y = sc.nextInt();
            x--; y--;
            try {
                System.out.println(arr.get(x).get(y));
            } catch (IndexOutOfBoundsException e) {
                System.out.println("ERROR!");
            }
        }
        sc.close();
    }
}