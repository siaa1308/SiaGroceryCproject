CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRCS = main.c printBill.c fileOperations.c itemOperations.c customerOperations.c
OBJS = $(SRCS:.c=.o)
EXEC = grocery_management_system

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXEC) $(OBJS)
