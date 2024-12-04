calorie: main.o listaAlimenti.o
	gcc -g -o calorie main.o listaAlimenti.o

main.o: main.c listaAlimenti.h
	gcc -g -c main.c

listaAlimenti.o: listaAlimenti.c listaAlimenti.h
	gcc -g -c listaAlimenti.c