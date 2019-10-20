# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o complex.o 
	gcc  client.o complex.o -o myprog  -Wall -pedantic-errors -g
	#make clean

complex.o: complex.c complex.h
	gcc  complex.c -c -o complex.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o myprog