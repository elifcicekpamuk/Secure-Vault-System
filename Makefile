CC = gcc
CFLAGS = -Wall

SRC = src/main.c src/vault.c src/crypto.c src/storage.c
OUT = securevault

all:
  $(CC) $(SRC) $(CFLAGS) -o $(OUT)

clean:
  rm -f $(OUT)
