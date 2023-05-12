import java.util.Arrays;

class ArrayAccess {
    public static void main(String[] args) {
        int array[] = new int[10];
        int array0[];
        array0 = new int[10];
        int array1[] = { 1, 2, 3, 4, 5 };

        Arrays.stream(array0).forEach(System.out::print); // -> Prints array
        System.out.println(Arrays.toString(array1));  // -> Print array in one line
        // Accessing all arrays
        for (int i : array)
            System.out.print(i + ", ");
        System.out.println();

        // Initializing and accessing
        for (int i = 0; i < array.length; i++) {
            array[i] = i + 1;
            System.out.print(array[i] + ", ");
        }
    }
}
