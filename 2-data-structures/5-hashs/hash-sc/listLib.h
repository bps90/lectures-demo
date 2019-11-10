#ifndef LISTLIB_H   // guardas de cabeçalho, impedem inclusões cíclicas
#define LISTLIB_H

#include <stdio.h>
#include <stdlib.h>

struct node {
    int key, age;
    char name[100];
    struct node * next;
};


void printNode(struct node * node); 

struct node * createNode(int key, char * name, int age);

int deleteFromList(struct node **head_ref, int key);

struct node * searchInList(struct node* head, int key);

#endif
