riepilogo: listaClienti.o main.o
	gcc -g -o riepilogo listaClienti.o main.o

listaClienti.o: listaClienti.c listaClienti.h
	gcc -g -c listaClienti.c

main.o: main.c listaClienti.h
	gcc -g -c main.c