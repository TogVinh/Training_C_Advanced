CFLAGS = -I. -I./inc

TARGET = run_as2p1
OBJECTS = main.o array.o

$(TARGET): $(OBJECTS)
	gcc -o $(TARGET) $(OBJECTS)

main.o: main.c 
	gcc -c main.c -I./inc

array.o: array.c
	gcc -c array.c -I./inc
	 
clean:
	rm -r *.o
