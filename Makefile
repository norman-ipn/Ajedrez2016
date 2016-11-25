a.out: main.o
	gcc main.o
main.o: main.c
	gcc -c main.c -Wall
clean:
	rm main.o
run: a.out
	./a.out
