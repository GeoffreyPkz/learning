CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
EXEC=tableaux
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

tableaux: $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)

main.o: tableaux.h

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)

