import java.util.*;

public class Anagrams {
    static Boolean isAnagram(String a, String b) {
        // Boolean isAnagram = false;
        HashMap<Character, Integer> map = new HashMap<>();
        HashMap<Character, Integer> map2 = new HashMap<>();
        for (char character : a.toCharArray())
            if (map.containsKey(character))
                map.put(character, map.get(character) + 1);
            else
                map.put(character, 1);

        for (char character : b.toCharArray())
            if (map2.containsKey(character))
                map2.put(character, map2.get(character) + 1);
            else
                map2.put(character, 1);

        return map.equals(map2);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String a = scan.next(),
                b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println((ret) ? "Anagrams" : "Not Anagrams");
    }

}
