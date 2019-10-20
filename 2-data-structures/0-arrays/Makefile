# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o arrayLib.o 
	gcc  client.o arrayLib.o -o clientArray  -Wall -pedantic-errors -g
	#make clean

arrayLib.o: arrayLib.c arrayLib.h
	gcc  arrayLib.c -c -o arrayLib.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o clientArray