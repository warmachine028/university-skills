import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class ListOperation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> list = new ArrayList<>();

        int n = sc.nextInt();
        for (int i = 0; i < n; i++)
            list.add(sc.nextInt());

        n = sc.nextInt();
        for (int i = 0; i < n; i++)
            if (sc.next().equals("Insert"))
                list.add(sc.nextInt(), sc.nextInt());
            else
                list.remove(sc.nextInt());

        for (int i = 0; i < list.toArray().length; i++)
            System.out.print(list.get(i) + " ");
        sc.close();
    }
}