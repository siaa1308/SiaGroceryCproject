#include "grocery.h"
#include <stdio.h>

void displayBill(int apple_qty, int banana_qty, int orange_qty, int mango_qty, int pear_qty) {
    float total_price = 0.0;
    total_price += calculatePrice(apple_qty, 5.0);
    total_price += calculatePrice(banana_qty, 2.0);
    total_price += calculatePrice(orange_qty, 3.0);
    total_price += calculatePrice(mango_qty, 10.0);
    total_price += calculatePrice(pear_qty, 7.0);

    printf("Item\t\tQuantity\tPrice\n");
    printf("--------------------------------\n");
    printf("Apples\t\t%d\t\t%.2f\n", apple_qty, calculatePrice(apple_qty, 5.0));
    printf("Bananas\t\t%d\t\t%.2f\n", banana_qty, calculatePrice(banana_qty, 2.0));
    printf("Oranges\t\t%d\t\t%.2f\n", orange_qty, calculatePrice(orange_qty, 3.0));
    printf("Mangoes\t\t%d\t\t%.2f\n", mango_qty, calculatePrice(mango_qty, 10.0));
    printf("Pears\t\t%d\t\t%.2f\n", pear_qty, calculatePrice(pear_qty, 7.0));
    printf("--------------------------------\n");
    printf("Total Price: %.2f\n", total_price);
    printf("*******************************\n");
}
