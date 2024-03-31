#include "grocery.h"
#include <stdio.h>

void viewItemsInCart(int apple_qty, int banana_qty, int orange_qty, int mango_qty, int pear_qty) {
    printf("Item\t\tQuantity\n");
    printf("---------------------\n");
    printf("Apples\t\t%d\n", apple_qty);
    printf("Bananas\t\t%d\n", banana_qty);
    printf("Oranges\t\t%d\n", orange_qty);
    printf("Mangoes\t\t%d\n", mango_qty);
    printf("Pears\t\t%d\n", pear_qty);
    printf("---------------------\n");
}
