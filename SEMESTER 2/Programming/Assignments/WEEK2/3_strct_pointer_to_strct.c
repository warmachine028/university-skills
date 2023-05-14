// CODE 3: Write a C program to create a structure item, declare structure pointer pItem and by using pItem, assign and access the elements of the structure.

#include <stdio.h>
#include <string.h>
#define MAX_BRAND 20

typedef struct
{
    char brand[MAX_BRAND];
    int barcode;
    int price;
    int quantity;
} item;

void main()
{
    // pointer to structure
    item *pItem;

    // assigning using ptr
    strcpy(pItem->brand, "Nescafe");
    pItem->barcode = 12090092;
    pItem->price = 120;
    pItem->quantity = 12;

    // accessing using ptr
    printf("\nAccessing member variables of structure\n");
    printf("Brand: %s\n", pItem->brand);
    printf("Barcode: %i\n", pItem->barcode);
    printf("Price: %i\n", pItem->price);
    printf("Quantity: %i\n", pItem->quantity);
}
// OUTPUT
// Accessing member variables of structure
// Brand: Nescafe
// Barcode: 12090092
// Price: 120
// Quantity: 12