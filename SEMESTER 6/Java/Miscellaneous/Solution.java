import java.util.*;

public class Solution {
    public static int findDuplicate(ArrayList<Integer> arr, int n) {
        HashMap<Integer, Boolean> dict = new HashMap<>();
        for (int i : arr) {
            if (dict.containsKey(i))
                return i;
            dict.put(i, true);
        }
        return 0;
    }

    public static void main(String[] args) throws Exception{
        ArrayList<Integer> input = new ArrayList<>(Arrays.asList(1, 1, 2));
        int result = findDuplicate(input, 3);
        System.out.println(result);
    }
}
