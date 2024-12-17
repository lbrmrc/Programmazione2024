myExe: main.o lists.o dato.o
	gcc -g -o myExe main.o lists.o dato.o
main.o: main.c lists.h
	gcc -g -c main.c
lists.o: lists.c dato.h
	gcc -g -c lists.c
dato.o: dato.c
	gcc -g -c dato.c
clean :
	rm -f *.o
