# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o listsLib.o 
	gcc  client.o listsLib.o -o clientLists  -Wall -pedantic-errors -g
	#make clean

listsLib.o: listsLib.c listsLib.h
	gcc  listsLib.c -c -o listsLib.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o clientLists