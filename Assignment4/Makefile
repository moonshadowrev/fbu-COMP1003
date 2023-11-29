CC=gcc
CFLAGS=-std=c11 -Wall

all: matrix_program

matrix_program: Question.o matrix_operations.o
	$(CC) $(CFLAGS) -o matrix_program Question.o matrix_operations.o

Question.o: Question.c
	$(CC) $(CFLAGS) -c Question.c

matrix_operations.o: matrix_operations.c
	$(CC) $(CFLAGS) -c matrix_operations.c

clean:
	rm -f *.o matrix_program
