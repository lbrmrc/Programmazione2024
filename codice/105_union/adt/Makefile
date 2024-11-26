prog: main.o figura.o
	gcc -g -o prog main.o figura.o

main.o: main.c figura.h
	gcc -g -c main.c

figura.o: figura.c figura.h
	gcc -g -c figura.c