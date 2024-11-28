# linking
campo: main.o campo.o mossa.o
	gcc -g -o campo main.o campo.o mossa.o

# compilazione
main.o: main.c campo.h
	gcc -c -g main.c

#compilazione
campo.o: campo.c campo.h mossa.h
	gcc -c -g campo.c

mossa.o: mossa.c mossa.h
	gcc -c -g  mossa.c
