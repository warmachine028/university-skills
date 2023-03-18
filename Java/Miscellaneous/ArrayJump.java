import java.util.*;

public class ArrayJump {
    public static boolean solve(int leap, int arr[], int index){
        if (index < 0 || arr[index]== 1)
            return false;
        if (index == arr.length - 1 || index + leap == arr.length - 1)
            return true;
        arr[index] = 1;
        return solve(leap, arr, index + 1) || solve(leap, arr, index + leap) || solve(leap, arr, index - 1);
     
    }
    
    public static boolean canWin(int leap, int[] game) {
        // Return true if you can win the game; otherwise, return false.
        return solve(leap, game, 0);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0) {
            int n = scan.nextInt();
            int leap = scan.nextInt();

            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
            }

            System.out.println((canWin(leap, game)) ? "YES" : "NO");
        }
        scan.close();
    }
}