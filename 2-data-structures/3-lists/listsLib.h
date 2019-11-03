#include <stdbool.h> 

// A linked list node  
struct Node {  
    int data;  
    struct Node* next;  
    struct Node* prev;  
};  
  
/* Given a reference (pointer to pointer) to the head of a list  
and an int, inserts a new node on the front of the list. */
void push(struct Node** head_ref, int new_data);
  
/* Given a node as next_node, insert a new node before the given node */
void insertBefore(struct Node** head_ref, struct Node* next_node, int new_data);
  
// This function prints contents of linked list starting from the given node  
void printList(struct Node* node);

void deleteNode(struct Node** head_ref, struct Node* del);

bool search(struct Node* head, int x);

int getCount(struct Node* head);

