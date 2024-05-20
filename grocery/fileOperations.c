#include <stdio.h>
#include <stdlib.h>
#include "fileOperations.h"
#include "itemOperations.h"

#define ITEM_FILE "items.csv"

void loadItemsFromFile(struct Item **items, int *itemCount) {
    FILE *file = fopen(ITEM_FILE, "r");
    if (file == NULL) {
        printf("Error opening items file.\n");
        exit(1);
    }

    *itemCount = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            (*itemCount)++;
        }
    }
    rewind(file);

    *items = (struct Item *)malloc(*itemCount * sizeof(struct Item));
    if (*items == NULL) {
        printf("Memory allocation error.\n");
        exit(1);
    }

    for (int i = 0; i < *itemCount; i++) {
        fscanf(file, "%[^,],%f\n", (*items)[i].name, &(*items)[i].price);
    }

    fclose(file);
}

void loadCustomersFromFile() {
    FILE *file = fopen(CUSTOMER_FILE, "r");
    if (file == NULL) {
        printf("Error opening customers file!\n");
        exit(1);
    }

    char line[100];
    printf("Customer IDs and Names:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    
    fclose(file);
}
