#include <stdio.h>
#include "grocery.h"

int main() {
    int choice, apple_qty = 0, banana_qty = 0, orange_qty = 0, mango_qty = 0, pear_qty = 0;

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
                printf("Enter quantity of Apples: ");
                scanf("%d", &apple_qty);
                printf("Enter quantity of Bananas: ");
                scanf("%d", &banana_qty);
                printf("Enter quantity of Oranges: ");
                scanf("%d", &orange_qty);
                printf("Enter quantity of Mangoes: ");
                scanf("%d", &mango_qty);
                printf("Enter quantity of Pears: ");
                scanf("%d", &pear_qty);
                break;
            case 2:
                printf("\nItems in Cart:\n");
                viewItemsInCart(apple_qty, banana_qty, orange_qty, mango_qty, pear_qty);
                break;
            case 3:
                printf("\nPrices of Items Available:\n");
                viewPrices();
                break;
            case 4:
                printf("\n********** Your Bill **********\n");
                displayBill(apple_qty, banana_qty, orange_qty, mango_qty, pear_qty);
                printf("Thank you for shopping with us!\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
