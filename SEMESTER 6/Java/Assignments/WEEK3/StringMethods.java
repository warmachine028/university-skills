import java.util.Arrays;

public class StringMethods {
    public static void main(String[] args) {
        String string = new String("String");
        String string1 = "String1";
        String string2 = "string";
        /*
         * String.compareTo compares strings character Wise
         * if found greater returns 1
         * if found lesser returns -1
         * if found equal returns 0
         */
        System.out.println("Lexical comparision: " + string1.compareTo(string) // 1
                + "\nFirst Character: " + string.charAt(0) // S
                + "\nEquality: " + string1.equals(string) // false
                + "\nCase Insensitive: " + string.equalsIgnoreCase(string2) // true
                + "\nIndex Of: " + string.indexOf("S") // 0
                + "\nLength: " + string.length() // 6
                + "\nSubstring 1 (arg): " + string.substring(3) // ing
                + "\nSubstring 2 (args): " + string.substring(3, 5) // in
                + "\nCharacter Array: " + Arrays.toString(string.toCharArray()) // [S, t, r, i, n, g]
                + "\nL Case: " + string.toLowerCase() // string
                + "\nString: " + string.toString() // String
                + "\nU Case: " + string2.toUpperCase() // STRING
                + "\nTrim: " + "  Hello World   ".trim() // Hello World
                + "\nValue Of: " + String.valueOf(new int[] { 1, 2, 3, 4 }) // [I@1b083826
        );

    }
}
