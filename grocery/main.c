#include <stdio.h>
#include <stdlib.h>
#include "printBill.h"
#include "fileOperations.h"
#include "itemOperations.h"
#include "customerOperations.h"

int main() {
    struct Customer customer;
    int choice, itemIndex, quantity;
    float totalPrice;
    char searchName[20];
    struct Item *items;
    int itemCount;

    // Load items from file
    loadItemsFromFile(&items, &itemCount);

    // User login
    if (!login(&customer)) {
        printf("Login failed!\n");
        return 1;
    }

    while (1) {
        printf("\n1. Display Items\n");
        printf("2. Add Item to Cart\n");
        printf("3. View Cart\n");
        printf("4. Checkout\n");
        printf("5. Search Item\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayItems(items, itemCount);
                break;
            case 2:
                displayItems(items, itemCount);
                printf("Enter item number to add to cart: ");
                scanf("%d", &itemIndex);
                printf("Enter quantity: ");
                scanf("%d", &quantity);
                addItemToCart(&customer, items, itemIndex - 1, quantity);
                break;
            case 3:
                displayCart(&customer);
                break;
            case 4:
                displayCart(&customer);
                totalPrice = calculateTotal(&customer);
                printf("Total Price: Rs. %.2f\n", totalPrice);
                printBill(&customer);
                saveCustomerData(&customer);
                free(customer.cart);  // Free dynamically allocated memory
                free(items);          // Free dynamically allocated memory
                return 0;
            case 5:
                printf("Enter item name to search: ");
                scanf("%s", searchName);
                searchItemByName(items, itemCount, searchName);
                break;
            case 6:
                printf("Exiting the program.\n");
                free(customer.cart);  // Free dynamically allocated memory
                free(items);          // Free dynamically allocated memory
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
