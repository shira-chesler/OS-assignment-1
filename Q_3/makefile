CC = gcc
CFLAGS = -Wall -g

all : libencriptor.so encode decode

libencriptor.so : funcs.c funcs.h
	$(CC) $(CFLAGS) -fPIC -c funcs.c
	$(CC) $(CFLAGS) -shared funcs.o -o libencriptor.so

encode : funcs.o funcs.h encode.o
	$(CC) $(CFLAGS) funcs.o encode.o -o encode

decode : funcs.o funcs.h decode.o
	$(CC) $(CFLAGS) funcs.o decode.o -o decode

.PHONY : all clean

clean:
	rm encode decode *.so *.o