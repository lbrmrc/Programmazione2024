app : main.o studente.o registro.o
	gcc -g -o app main.o studente.o registro.o

main.o: main.c registro.h studente.h
	gcc -g -c main.c

studente.o: studente.c studente.h
	gcc -g -c studente.c

registro.o: registro.c registro.h studente.h
	gcc -g -c registro.c

clean:
	rm -f *.o app