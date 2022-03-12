CC=gcc
CPPFLAGS=-I./include
CFLAGS=-Wall -Wextra -ansi -pedantic
BIN=./bin
SRC=./src
OBJ=./obj
PRGM=$(BIN)/program

all: $(PRGM)

$(PRGM): $(OBJ)/arbre_n.o $(SRC)/main.c
	$(CC) $(CPPFLAGS) $(CFLAGS) $^ -o $@

$(OBJ)/arbre_n.o: $(SRC)/arbre_n.c ./include/arbre_n.h
	$(CC) $(CPPFLAGS) $(CFLAGS) $< -c -o $@

clean:
	rm ./**/*.o
	
distclean:
	rm $(BIN)/*
	rm ./**/*.o

.PHONY: all clean distclean