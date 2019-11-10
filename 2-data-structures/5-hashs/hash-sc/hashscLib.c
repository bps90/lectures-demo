// Code adapted from 
// http://see-programming.blogspot.com/2013/05/chain-hashing-separate-chaining-with.html

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "listLib.h"
#include "hashscLib.h"

//Vars definitions
struct hash * hashTable; // Hash Table
int M; // default size of hash table with separete chaning

/* Returns the hash code for a key */
int hashCode(int key) {
   return key % M;
}

/* Given some informations (key, name and age), 
it inserts a new node on the front of the list of
a hash table index. */
void insertToHash(int key, char * name, int age) {
    int hashIndex = hashCode(key);

    struct node * newnode = createNode(key, name, age);
    
    /* head of list for the bucket with index "hashIndex" */
    if (!hashTable[hashIndex].head) {
        hashTable[hashIndex].head = newnode;
        hashTable[hashIndex].count = 1;
        return;
    }

    /*
    ALGUMA COISA ESTA FALTANDO AQUI!!!
    */

    /* adding new node to the list */
    newnode -> next = (hashTable[hashIndex].head);
    /*
     * update the head of the list and no of
     * nodes in the current bucket
     */
    hashTable[hashIndex].head = newnode;
    hashTable[hashIndex].count++;
    return;
}

/* Function to delete a node in a hash table with SC. 
   key --> to be deleted. */
void deleteFromHash(int key) {
    /* find the bucket using hash index */
    int hashIndex = hashCode(key);

    struct node **head_ref = &hashTable[hashIndex].head; 

    if(deleteFromList(head_ref, key) == 1){
    	hashTable[hashIndex].count--;
    }else{
    	printf("Search element unavailable in hash table\n");
    }

    return;
}

/* Function to check if a key is in a hash table with SC. 
   key --> to be checked. */
void searchInHash(int key) {
    int hashIndex = hashCode(key);
    struct node * myNode;

    myNode = searchInList(hashTable[hashIndex].head, key);
    
    if(myNode != NULL)
      printNode(myNode);
    else
      printf("Search element unavailable in hash table\n");

    return;
}

// This function prints contents of hash table with SC
void display() {
    struct node * myNode;
    int i;
    for (i = 0; i < M; i++) {
        if (hashTable[i].count == 0)
            continue;
        myNode = hashTable[i].head;
        if (!myNode)
            continue;
        printf("\nData at index %d in Hash Table:\n", i);
        printf("VoterID     Name          Age   \n");
        printf("--------------------------------\n");
        while (myNode != NULL) {
            printNode(myNode);
            myNode = myNode -> next;
        }
    }
    return;
}

// This function prints occupied and empyt slots in the hash table with SC
void display_clusters(){
  int i;
  printf("\nDisplaying hash table clusters\n");
  for(i = 0; i < M; i++){
    if(hashTable[i].count != 0)
      printf("*");
    else
      printf("_");
  }
  printf("\n");
}