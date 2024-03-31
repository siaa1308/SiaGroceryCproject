CC = gcc
CFLAGS = -Wall -Wextra -std=c99

grocery: main.o calculatePrice.o displayBill.o viewItemsInCart.o viewPrices.o


	$(CC) $(CFLAGS) -o grocery main.o calculatePrice.o displayBill.o viewItemsInCart.o viewPrices.o


main.o: main.c grocery.h
	$(CC) $(CFLAGS) -c main.c

calculatePrice.o: calculatePrice.c grocery.h
	$(CC) $(CFLAGS) -c calculatePrice.c

displayBill.o: displayBill.c grocery.h
	$(CC) $(CFLAGS) -c displayBill.c

viewItemsInCart.o: viewItemsInCart.c grocery.h
	$(CC) $(CFLAGS) -c viewItemsInCart.c

viewPrices.o: viewPrices.c grocery.h
	$(CC) $(CFLAGS) -c viewPrices.c


clean:
	rm -f grocery *.o

