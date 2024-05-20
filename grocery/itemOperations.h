#ifndef ITEM_OPERATIONS_H
#define ITEM_OPERATIONS_H

#define MAX_NAME_LENGTH 50
#define MAX_CART_ITEMS 100

struct Item {
    char name[MAX_NAME_LENGTH];
    float price;
    int quantity;
};

struct Customer;

void displayItems(struct Item *items, int itemCount);
void addItemToCart(struct Customer *customer, struct Item *items, int itemIndex, int quantity);
void displayCart(struct Customer *customer);
float calculateTotal(struct Customer *customer);
void searchItemByName(struct Item *items, int itemCount, char *name);

#endif /* ITEM_OPERATIONS_H */
