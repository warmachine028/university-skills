import java.util.Arrays;

public class StringBufferMethods {
    public static void main(String[] args) {
        StringBuffer string = new StringBuffer("String");
        char dst[] = new char[10];
        System.out.println("Append: " + string.append("ABCD") // StringABCD
                + "\nCapacity: " + string.capacity() // 22
                + "\nChar At: " + string.charAt(6) // A
                + "\nDelete: " + string.delete(6, 99) // String
                + "\nDeleteCharAt: " + string.deleteCharAt(5) // Strin
                + "\nIndex: " + string.indexOf("S") // 0
                + "\nInsert: " + string.insert(5, "g") // String
                + "\nLength: " + string.length() // 6
                + "\nSub String: " + string.substring(0, 6) // String
                + "\nTo String: " + string.toString() // String
        );
        string.ensureCapacity(10); // Returns Nothing
        string.getChars(0, 5, dst, 1);
        System.out.println(Arrays.toString(dst)); // [, S, t, r, i, n, , , , ]
        string.setCharAt(0, 's'); // string
        string.setLength(25);
    }

}
