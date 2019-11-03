# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o btLib.o 
	gcc  client.o btLib.o -o clientBt  -Wall -pedantic-errors -g
	#make clean

btLib.o: btLib.c btLib.h
	gcc  btLib.c -c -o btLib.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o clientBt