#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "listLib.h"

// This function prints contents of one node
void printNode(struct node * node) {  
    printf("%-12d", node->key);
    printf("%-15s", node->name);
    printf("%d\n", node->age);
} 

// This fuction creates a new node given some informations
struct node * createNode(int key, char * name, int age) {
    struct node * newnode;
    newnode = (struct node * ) malloc(sizeof(struct node));
    newnode->key = key;
    newnode->age = age;
    strcpy(newnode->name, name);
    newnode->next = NULL;
    return newnode;
}

/* Checks whether the value key is present in linked list */
struct node* searchInList(struct node* head, int key) {
    struct node * myNode;
    myNode = head;

    if (!myNode) {
        printf("Search element unavailable in the list\n");
        return NULL;
    }
    while (myNode != NULL) {
        if (myNode->key == key) {
            
            //printNode(myNode);
            return myNode;
        }
        myNode = myNode->next;
    }
    
    printf("Search element unavailable in the list\n");
    return NULL;
}


/* Function to delete a node in a Linked List. 
   head_ref --> pointer to head node pointer. 
   del  -->  pointer to node to be deleted. */
int deleteFromList(struct node **head_ref, int key) {
    // Store head node 
    struct node *temp = *head_ref, *prev; 

    // If head node itself holds the key to be deleted 
    if (temp != NULL && temp->key == key) 
    { 
        *head_ref = temp->next;   // Changed head 
        free(temp);               // free old head 
        printf("Data deleted successfully from list\n");
        return 1; 
    } 

    // Search for the key to be deleted, keep track of the 
    // previous node as we need to change 'prev->next' 
    while (temp != NULL && temp->key != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 

    // If key was not present in linked list 
    if (temp == NULL){
        printf("Given data is not present in the list\n");
        return 0; 
    }

    // Unlink the node from linked list 
    prev->next = temp->next; 
  
    free(temp);  // Free memory 

    return 1;
}