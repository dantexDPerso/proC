all: programa

programa: main.o listaConjunto.o
	gcc -o programa main.o

main.o: main.c listaConjunto.h conjunto.h
	gcc -c main.c

listaConjunto.o: listaConjunto.c listaConjunto.h conjunto.h
	gcc -c listaConjunto.c
remove:
	rm -f programa *.o

clean:
	rm -f *.o