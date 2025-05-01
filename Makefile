CC = cc
CFLAGS = -Wall -Iinclude
SRC = src/main.c src/chess.c
OUT = bin/main

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
