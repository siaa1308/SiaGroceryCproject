#ifndef GROCERY_H_
#define GROCERY_H_

typedef struct {
    char name[50];  
    float price;    
    int quantity;   
} Item;

float calculatePrice(int qty, float price);
void displayBill(Item *cart, int numItems);
void viewItemsInCart(Item *cart, int numItems);
void viewPrices(Item *items, int numItems);
Item *addItemToCart(Item *cart, int numItems, Item *items, const char *itemName, int quantity);
Item *createItems();
void freeItems(Item *items);
Item *findItemByName(Item *items, int numItems, const char *itemName);

#endif
