campo: main.o campo.o
	gcc -g -o campo main.o campo.o

main.o: main.c campo.h
	gcc -c -g main.c

campo.o: campo.c campo.h
	gcc -c -g campo.c