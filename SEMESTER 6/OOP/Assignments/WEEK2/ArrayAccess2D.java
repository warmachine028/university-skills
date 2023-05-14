import java.util.Arrays;

class ArrayAccess2D {
    public static void main(String[] args) {
        int array[][] = new int[5][5];
        float array0[][];
        array0 = new float[5][5];

        System.out.println(Arrays.deepToString(array0)); // Array access in 1 line

        // Accessing all arrays
        for (float i[] : array0) {
            for (float j : i)
                System.out.print(j + ", ");
            System.out.println();
        }
        System.out.println();

        // Initializing and accessing
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                array[i][j] = i + j;
                System.out.print(array[i][j] + ", ");
            }
            System.out.println();
        }
    }

}
