prog: main.o counter.o
	gcc -g -o prog main.o counter.o

main.o: main.c counter.h
	gcc -g -c main.c

counter.o: counter.c counter.h
	gcc -g -c counter.c