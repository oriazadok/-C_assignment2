CC = gcc
CFLAGS = -g -Wall
OBJECTS_MAIN = main.o
OBJECTS_MATH = my_mat.o

all: connections

connections: $(OBJECTS_MAIN) $(OBJECTS_MATH)
	$(CC) $(CFLAGS) -o connections $(OBJECTS_MAIN) $(OBJECTS_MATH)

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so  connections