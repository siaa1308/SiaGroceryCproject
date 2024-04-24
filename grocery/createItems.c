Item *createItems() {
    Item *items = malloc(sizeof(Item) * numItems);
    if (items == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(items[0].name, "Apples");
    items[0].price = 5.0;
    items[0].quantity = 0;
    strcpy(items[1].name, "Bananas");
    items[1].price = 2.0;
    items[1].quantity = 0;
    strcpy(items[2].name, "Oranges");
    items[2].price = 3.0;
    items[2].quantity = 0;
    strcpy(items[3].name, "Mangoes");
    items[3].price = 10.0;
    items[3].quantity = 0;
    strcpy(items[4].name, "Pears");
    items[4].price = 7.0;
    items[4].quantity = 0;

    return items;
}
