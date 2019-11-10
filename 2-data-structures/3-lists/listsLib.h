#include <stdbool.h> 

// A linked list node  
struct ListNode {  
    int data;  
    struct ListNode* next;  
    struct ListNode* prev;  
};  
  
/* Given a reference (pointer to pointer) to the head of a list  
and an int, inserts a new node on the front of the list. */
void push(struct ListNode** head_ref, int new_data);
  
/* Given a node as next_node, insert a new node before the given node */
void insertBefore(struct ListNode** head_ref, struct ListNode* next_node, int new_data);
  
// This function prints contents of linked list starting from the given node  
void printList(struct ListNode* node);

void deleteListNode(struct ListNode** head_ref, struct ListNode* del);

struct ListNode* search(struct ListNode* head, int x);

int getCount(struct ListNode* head);

