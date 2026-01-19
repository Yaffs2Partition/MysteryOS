CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRC = $(shell find src -name "*.c")
OUT = build/mysteryos

all:
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -rf build

