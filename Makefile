CC = gcc
AR = ar
FLAGS= -Wall -g

all: libmymat.a connections
libmymat.a: my_mat.o
	$(AR) -rcs libmymat.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

connections: main.o libmymat.a
	$(CC) $(FLAGS) -o connections main.o libmymat.a


.PHONY: clean all

clean:
	rm -f *.o *.a connections