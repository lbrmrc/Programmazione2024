app: main.o autosalone.o automobile.o
	gcc -g -o app main.o autosalone.o automobile.o

main.o: main.c autosalone.h	
	gcc -g -c main.c

autosalone.o: autosalone.c autosalone.h automobile.h
	gcc -g -c autosalone.c

automobile.o: automobile.c automobile.h
	gcc -g -c automobile.c