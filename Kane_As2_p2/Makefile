CFLAGS = -I. -I./inc

TARGET = run_As2P2
OBJECTS = main.o listEmployee.o

$(TARGET): $(OBJECTS)
	gcc -o $(TARGET) $(OBJECTS)

main.o: main.c 
	gcc -c main.c -I./inc

listEmployee.o: listEmployee.c
	gcc -c listEmployee.c -I./inc
	 
clean:
	rm -r *.o
