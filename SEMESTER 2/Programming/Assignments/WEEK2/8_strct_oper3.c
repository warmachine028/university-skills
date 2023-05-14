// CODE 8: Write a C program to read item details used in party and calculate all expenses, divide expenses in all friends equally. (Using structure)

#include <stdio.h>
#define MAXLEN 30

typedef struct
{
    char name[MAXLEN];
    float price;
    int quantity;
    float total;

} item;

void main()
{
    int n;
    printf("Enter how many items: ");
    scanf("%i", &n);
    getchar();
    
    item items[n];
    float expenditure = 0;
    for (int i = 0; i < n; i++)
    {
        printf("\n_______ITEM %i_______\n", i + 1);
        printf("Enter item name: ");
        gets(items[i].name);

        printf("Price of per unit: ");
        scanf("%f", &items[i].price);

        printf("Enter quantity: ");
        scanf("%i", &items[i].quantity);

        items[i].total = items[i].price * items[i].quantity;
        expenditure += items[i].total;
        getchar();
    }
    
    printf("\nTotal Expenditure: %.2f\n", expenditure);
    
    int friends;
    printf("\nEnter number of friends: ");
    scanf("%i", &friends);
    printf("Each friend has to pay amt. of %.2f", expenditure / friends);

}

// OUTPUT
// Enter how many items: 3

// _______ITEM 1_______
// Enter item name: Coca Cola
// Price of per unit: 30
// Enter quantity: 2

// _______ITEM 2_______
// Enter item name: French Fries
// Price of per unit: 50
// Enter quantity: 3

// _______ITEM 3_______
// Enter item name: Cheese Burger
// Price of per unit: 60
// Enter quantity: 3

// Total Expenditure: 390.00

// Enter number of friends: 3
// Each friend has to pay amt. of 130.00