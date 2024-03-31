int main() {
    int choice, apple_qty = 0, banana_qty = 0, orange_qty = 0, mango_qty = 0, pear_qty = 0;
    struct Customer customer;

    printf("Welcome to the Grocery Store Management System!\n");

    // Input customer details
    printf("Enter your name: ");
    fgets(customer.name, sizeof(customer.name), stdin);
    printf("Enter your phone number: ");
    fgets(customer.phone_number, sizeof(customer.phone_number), stdin);
    customer.customer_id = rand() % 1000 + 1; // Generate a random customer ID

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
                printf("Customer ID: %d\n", customer.customer_id);
                printf("Customer Name: %s", customer.name);
                printf("Customer Phone Number: %s", customer.phone_number);
                printf("Thank you for shopping with us!\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
