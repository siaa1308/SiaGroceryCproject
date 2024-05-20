#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "customerOperations.h"

int login(struct Customer *customer) {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "admin123") == 0) {
        strcpy(customer->name, "Admin");
        strcpy(customer->contact, "1234567890");
        strcpy(customer->id, "A001");
        customer->cart = NULL;
        customer->cartSize = 0;
        return 1;
    } else {
        printf("Invalid username or password.\n");
        return 0;
    }
}

void displayCart(struct Customer *customer) {
    printf("Items in cart:\n");
    for (int i = 0; i < customer->cartSize; i++) {
        printf("%d. %s - Rs. %.2f\n", i + 1, customer->cart[i].name, customer->cart[i].price);
    }
}

float calculateTotal(struct Customer *customer) {
    float total = 0.0;
    for (int i = 0; i < customer->cartSize; i++) {
        total += customer->cart[i].price;
    }
    return total;
}

void saveCustomerData(struct Customer *customer) {
    FILE *file = fopen(CUSTOMER_DATA_FILE, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(file, "Customer ID: %s\n", customer->id);
    fprintf(file, "Name: %s\n", customer->name);
    fprintf(file, "Contact: %s\n", customer->contact);
    for (int i = 0; i < customer->cartSize; i++) {
        fprintf(file, "%s %.2f\n", customer->cart[i].name, customer->cart[i].price);
    }
    fprintf(file, "Total: %.2f\n", calculateTotal(customer));
    fprintf(file, "--------------\n");

    fclose(file);
}
