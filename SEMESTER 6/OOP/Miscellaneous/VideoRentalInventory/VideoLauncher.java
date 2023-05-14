package VideoRentalInventory;

import java.util.Scanner;

public class VideoLauncher {
    public static void main(String[] args) {
        int choice = 0;
        VideoStore store = new VideoStore();
        Scanner sc = new Scanner(System.in);

        while (choice != 6) {
            System.out.println("MAIN MENU"
                    + "\n========="
                    + "\n1. Add Video"
                    + "\n2. Check Out Video"
                    + "\n3. Return Video"
                    + "\n4. Receive Rating"
                    + "\n5. List Inventory"
                    + "\n6. Exit");
            System.out.print("Enter your choice (1..6): ");
            choice = sc.nextInt();
            sc.nextLine();
            switch (choice) {
                case 1:
                    System.out.print("Enter the name of the video you want to add: ");
                    store.addVideo(sc.nextLine());
                    sc.nextLine();
                    break;
                case 2:
                    System.out.print("Enter the name of the video you want to check out: ");
                    store.doCheckout(sc.nextLine());
                    sc.nextLine();
                    break;
                case 3:
                    System.out.print("Enter the name of the video you want to return: ");
                    store.doReturn(sc.nextLine());
                    sc.nextLine();
                    break;
                case 4:
                    System.out.print("Enter the name of the video you want to Rate: ");
                    String name = sc.nextLine();
                    System.out.print("Enter the rating for this video: ");
                    store.recieveRating(name, sc.nextInt());
                    sc.nextLine();
                    sc.nextLine();
                    break;
                case 5:
                    System.out.println("                Videos available");
                    store.listInventory();
                    sc.nextLine();
                    break;
                case 6:
                    System.out.println("Exiting...!! Thanks for using the application.");
            }
        }
        sc.close();
    }
}
// javac -d . *.java && java VideoRentalInventory.VideoLauncher