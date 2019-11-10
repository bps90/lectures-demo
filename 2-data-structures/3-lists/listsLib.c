// A complete working C program to demonstrate all  
// insertion before a given node  
#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h> 
#include "listsLib.h"
  
/* Given a reference (pointer to pointer) to the head of a list  
and an int, inserts a new node on the front of the list. */
void push(struct ListNode** head_ref, int new_data)  
{  
    struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));  
  
    new_node->data = new_data;  
  
    new_node->next = (*head_ref);  
    new_node->prev = NULL;  
  
    if ((*head_ref) != NULL)  
        (*head_ref)->prev = new_node;  
  
    (*head_ref) = new_node;  
}  
  
/* Given a node as next_node, insert a new node before the given node */
void insertBefore(struct ListNode** head_ref, struct ListNode* next_node, int new_data)  
{  
    /*1. check if the given next_node is NULL */
    if (next_node == NULL) {  
        printf("the given next node cannot be NULL");  
        return;  
    }  
  
    /* 2. allocate new node */
    struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));  
  
    /* 3. put in the data */
    new_node->data = new_data;  
  
    /* 4. Make prev of new node as prev of next_node */
    new_node->prev = next_node->prev;  
  
    /* 5. Make the prev of next_node as new_node */
    next_node->prev = new_node;  
  
    /* 6. Make next_node as next of new_node */
    new_node->next = next_node;  
  
    /* 7. Change next of new_node's previous node */
    if (new_node->prev != NULL)  
        new_node->prev->next = new_node;  
    /* 8. If the prev of new_node is NULL, it will be 
       the new head node */
    else
        (*head_ref) = new_node; 
      
}  
  
// This function prints contents of linked list starting from the given node  
void printList(struct ListNode* node)  
{  
    struct ListNode* last;  
    printf("\nTraversal in forward direction \n");  
    while (node != NULL) {  
        printf(" %d ", node->data);  
        last = node;  
        node = node->next;  
    }  
  
    printf("\nTraversal in reverse direction \n");  
    while (last != NULL) {  
        printf(" %d ", last->data);  
        last = last->prev;  
    }  
    printf("\n");
}  

/* Function to delete a node in a Doubly Linked List. 
   head_ref --> pointer to head node pointer. 
   del  -->  pointer to node to be deleted. */
void deleteListNode(struct ListNode** head_ref, struct ListNode* del) 
{ 
    /* base case */
    if (*head_ref == NULL || del == NULL) 
        return; 
  
    /* If node to be deleted is head node */
    if (*head_ref == del) 
        *head_ref = del->next; 
  
    /* Change next only if node to be deleted is NOT the last node */
    if (del->next != NULL) 
        del->next->prev = del->prev; 
  
    /* Change prev only if node to be deleted is NOT the first node */
    if (del->prev != NULL) 
        del->prev->next = del->next; 
  
    /* Finally, free the memory occupied by del*/
    free(del); 
    return; 
} 

/* Checks whether the value x is present in linked list */
struct ListNode* search(struct ListNode* head, int x)
{ 
    struct ListNode* current = head;  // Initialize current 
    while (current != NULL) 
    { 
        if (current->data == x) 
            return current; 
        current = current->next; 
    } 
    return NULL; 
} 

/* Counts no. of nodes in linked list */
int getCount(struct ListNode* head) 
{ 
    int count = 0;  // Initialize count 
    struct ListNode* current = head;  // Initialize current 
    while (current != NULL) 
    { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 