all: main

main: main.o fonctions.o cesar.o
	gcc -o main main.c fonctions.o cesar.c
	
fonctions.o: fonctions.c fonctions.h
	gcc -c fonctions.c

cesar.o: cesar.c cesar.h
	gcc -c cesar.c

clean:
	rm main
	rm *.o