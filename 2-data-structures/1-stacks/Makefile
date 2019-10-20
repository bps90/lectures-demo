# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o stackLib.o 
	gcc  client.o stackLib.o -o clientStacks  -Wall -pedantic-errors -g
	#make clean

stackLib.o: stackLib.c stackLib.h
	gcc  stackLib.c -c -o stackLib.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o clientStacks