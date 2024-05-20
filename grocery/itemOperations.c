#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "itemOperations.h"
#include "customerOperations.h"

void displayItems(struct Item *items, int itemCount) {
    printf("Available items:\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%d. %s - Rs. %.2f\n", i + 1, items[i].name, items[i].price);
    }
}

void addItemToCart(struct Customer *customer, struct Item *items, int itemIndex, int quantity) {
    if (customer->cartSize < MAX_CART_ITEMS && itemIndex >= 0 && itemIndex < MAX_CART_ITEMS) {
        // Allocate memory for the new cart item
        customer->cart = realloc(customer->cart, (customer->cartSize + 1) * sizeof(struct Item));
        if (customer->cart == NULL) {
            printf("Memory allocation error.\n");
            exit(1);
        }

        // Copy the item details
        strncpy(customer->cart[customer->cartSize].name, items[itemIndex].name, sizeof(customer->cart[customer->cartSize].name) - 1);
        customer->cart[customer->cartSize].name[sizeof(customer->cart[customer->cartSize].name) - 1] = '\0';
        customer->cart[customer->cartSize].price = items[itemIndex].price * quantity;  // Adjust price for quantity
        customer->cart[customer->cartSize].quantity = quantity;

        customer->cartSize++;
        printf("%d %s(s) added to cart.\n", quantity, items[itemIndex].name);
    } else {
        printf("Unable to add item to cart.\n");
    }
}

void searchItemByName(struct Item *items, int itemCount, char *name) {
    for (int i = 0; i < itemCount; i++) {
        if (strstr(items[i].name, name) != NULL) {
            printf("Item found: %s - Rs. %.2f\n", items[i].name, items[i].price);
            return;
        }
    }
    printf("Item not found.\n");
}
