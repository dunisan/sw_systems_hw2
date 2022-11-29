CC = gcc

all: connections

connections: main.o my_mat.o my_mat.h
	gcc -Wall my_mat.o main.o -o connections
main.o: main.c my_mat.h
	gcc -Wall -g -c main.c -o main.o
my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c -o my_mat.o
clean:
	rm *.o main

