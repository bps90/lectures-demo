# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o bstLib.o 
	gcc  client.o bstLib.o -o clientBts  -Wall -pedantic-errors -g
	#make clean

bstLib.o: bstLib.c bstLib.h
	gcc  bstLib.c -c -o bstLib.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o clientBts