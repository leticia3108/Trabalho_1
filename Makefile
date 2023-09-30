# Execuçao do programa com inserir.c imprimir.c e main.c

CC = gcc
ALL = main

all: $(ALL)

main: main.c imprimir.c inserir.c remover.c

	$(CC) $^ -o $(ALL)

.PHONY: clean distclean

%.o: %.c
	gcc -c $<
	
clean: 
	rm -f *.o 

distclean: clean
	rm -f $(ALL)