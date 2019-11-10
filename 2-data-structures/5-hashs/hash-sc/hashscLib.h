// Code adapted from 
// http://see-programming.blogspot.com/2013/05/chain-hashing-separate-chaining-with.html

#ifndef HASHSC_H   // guardas de cabeçalho, impedem inclusões cíclicas
#define HASHSC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "listLib.h"

extern int M; 
extern struct hash * hashTable; 

struct hash {
    struct node * head;
    int count;
};

int hashCode(int key);

void insertToHash(int key, char * name, int age);

void deleteFromHash(int key);

void searchInHash(int key);

void display();

void display_clusters();

#endif