# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o queueLib.o 
	gcc  client.o queueLib.o -o clientQueue  -Wall -pedantic-errors -g
	#make clean

queueLib.o: queueLib.c queueLib.h
	gcc  queueLib.c -c -o queueLib.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o clientQueue