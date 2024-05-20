#include <stdio.h>
#include "printBill.h"
#include "customerOperations.h"

void printBill(struct Customer *customer) {
    printf("\n--- Bill ---\n");
    printf("Customer ID: %s\n", customer->id);
    printf("Name: %s\n", customer->name);
    printf("Contact: %s\n", customer->contact);
    displayCart(customer);
    float totalPrice = calculateTotal(customer);
    printf("Total Price: Rs. %.2f\n", totalPrice);
    printf("--------------\n");
}
