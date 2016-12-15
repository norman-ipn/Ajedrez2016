a.out: main.o tablero.o piezas.o persistencia.o interfaz.o red.o ia.o 
	gcc main.o tablero.o piezas.o persistencia.o interfaz.o red.o ia.o
main.o: main.c
	gcc -c main.c -Wall
tablero.o: tablero.c
	gcc -c tablero.c -Wall
piezas.o: piezas.c
	gcc -c piezas.c -Wall
persistencia.o: persistencia.c
	gcc -c persistencia.c -Wall
interfaz.o: interfaz.c
	gcc -c interfaz.c -Wall
red.o: red.c
	gcc -c red.c -Wall
ia.o: ia.c
	gcc -c ia.c -Wall

clean:
	rm main.o tablero.o piezas.o persistencia.o interfaz.o red.o ia.o a.out
run: a.out
	./a.out
