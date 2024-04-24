#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grocery.h"

int main() {
    int choice;
    Item *items = createItems();
    Item *cart = malloc(sizeof(Item) * numItems);

    while (1) {
        printf("\n********** Grocery Store Management **********\n");
        printf("1. Add Items to Cart\n");
        printf("2. View Items in Cart\n");
        printf("3. View Prices of Items Available\n");
        printf("4. Generate Bill and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nAdd Items to Cart:\n");
                char itemName[50];
                int quantity;
                printf("Enter item name: ");
                scanf("%s", itemName);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                Item *foundItem = findItemByName(items, numItems, itemName);
                if (foundItem != NULL) {
                    cart = addItemToCart(cart, numItems, items, itemName, quantity);
                    printf("%d %s added to cart.\n", quantity, itemName);
                } else {
                    printf("Item not found.\n");
                }
                break;
            case 2:
                printf("\nItems in Cart:\n");
                viewItemsInCart(cart, numItems);
                break;
            case 3:
                printf("\nPrices of Items Available:\n");
                viewPrices(items, numItems);
                break;
            case 4:
                printf("\n********** Your Bill **********\n");
                displayBill(cart, numItems);
                printf("Thank you for shopping with us!\n");
                freeItems(items);
                free(cart);
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

   
