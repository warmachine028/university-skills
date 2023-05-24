import java.util.Arrays;

public class SortArray {
    public static void main(String[] args) {
        // int arr[] = { 4, 2, 3, 1, 0, -1 };
        String arr[] = {
            "Pritam Kundu",
            "Srijan",
            "Zenitsu",
            "Max",
            "Rohit",
            "Mohan",
            "Zubain"
        };
        Arrays.stream(arr).sorted().forEach(item -> System.out.println(item));

    }
}