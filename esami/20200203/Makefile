palestra: listaUtenti.o main.o
	gcc -g -o palestra listaUtenti.o main.o

listaUtenti.o: listaUtenti.c listaUtenti.h
	gcc -g -c listaUtenti.c

main.o: main.c listaUtenti.h
	gcc -g -c main.c