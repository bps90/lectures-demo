#include <stdio.h>  
#include <stdlib.h>  
#include <stdbool.h> 
#include "listsLib.h"

/* Driver program to test above functions*/
int main()  
{  
    /* Start with the empty list */
    struct ListNode* head = NULL;  
    struct ListNode* dummy = NULL;  

    push(&head, 7);  
  
    push(&head, 1);  
  
    push(&head, 4); 

    push(&head, 9); 

    push(&head, 2); 
  
    // Insert 8, before 1. So linked list becomes 4->8->1->7->NULL  
    insertBefore(&head, head->next, 8);  
  
    printf("\n Original Linked list "); 
    printList(head); 

    /* Check the count function */
    printf("count of nodes is %d\n", getCount(head));
  
    /* delete nodes from the doubly linked list */
    deleteListNode(&head, head); /*delete first node*/
    deleteListNode(&head, head->next); /*delete middle node*/
    deleteListNode(&head, head->next); /*delete last node*/
  
    /* Modified linked list will be NULL<-8->NULL */
    printf("\n Modified Linked list "); 
    printList(head); 
    

    dummy = search(head, 9);
    dummy != NULL? printf("9 Yep\n") : printf("9 Nop\n"); 
    dummy = search(head, 1);
    dummy != NULL? printf("1 Yep\n") : printf("1 Nop\n"); 

    getchar();  
    return 0;  
}  