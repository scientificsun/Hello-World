CC      = gcc
CFLAGS  = -g
RM      = rm -f


default: all

all: hello

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

test: hello
	./hello this is a test

clean veryclean:
