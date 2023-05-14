import java.util.Scanner;

public class Item {
    String code;
    float price;

    Item() {

    }
}

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 5, total = 0;
        Item items[] = new Item[n],
                item;

        for (int i = 0; i < n; i++) {
            item = new Item();
            System.out.printf("Enter Product Code: ");
            item.code = sc.nextLine();
            System.out.printf("Enter Product Price: ");
            item.price = sc.nextFloat();
            sc.nextLine();
            total += item.price;
            items[i] = item;

        }
        System.out.println("---------------------------------------");
        System.out.println("|       CODE      |     Price         |");
        System.out.println("---------------------------------------");
        for (int i = 0; i < n; i++) 
            System.out.printf("|    %d   |     %f   |", items[i].code, items[i].price);
        
        System.out.printf("|       Total    |     %d         |", total);
        System.out.println("---------------------------------------");

        sc.close();
    }
}