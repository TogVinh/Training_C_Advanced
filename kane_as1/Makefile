As1_kane: main.o matrix.o
	gcc -o As1_kane main.o matrix.o
matrix.o: matrix.c matrix.h
	gcc -c matrix.c

main.o: main.c matrix.h
	gcc -c main.c
	
clean:
	rm main.o matrix.o


