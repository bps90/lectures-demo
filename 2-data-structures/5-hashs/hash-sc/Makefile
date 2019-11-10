# My first Makefile
# You can read this:
#### http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

all: client.o listLib.o hashscLib.o 
	gcc  client.o listLib.o hashscLib.o -o clientHashSC  -Wall -pedantic-errors -g
	#make clean

listLib.o: listLib.c listLib.h
	gcc  listLib.c -c -o listLib.o -Wall -pedantic-errors -g

hashscLib.o: hashscLib.c hashscLib.h
	gcc  hashscLib.c -c -o hashscLib.o -Wall -pedantic-errors -g

client.o: client.c
	gcc  client.c -c -o client.o -Wall -pedantic-errors -g -lm

clean:
	rm *.o clientHashSC