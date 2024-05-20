#ifndef CUSTOMER_OPERATIONS_H
#define CUSTOMER_OPERATIONS_H

#include "itemOperations.h"

#define CUSTOMER_DATA_FILE "customer_data.txt"

struct Customer {
    char name[50];
    char contact[20];
    char id[5];
    struct Item *cart;
    int cartSize;
};

int login(struct Customer *customer);
void displayCart(struct Customer *customer);
float calculateTotal(struct Customer *customer);
void saveCustomerData(struct Customer *customer);

#endif /* CUSTOMER_OPERATIONS_H */
