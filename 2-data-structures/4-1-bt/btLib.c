#include <stdio.h>  
#include <stdlib.h> 
#include "btLib.h" 

/* newNode() allocates a new node with the given data and NULL left and  
   right pointers. */
struct node* newNode(int data) 
{ 
  // Allocate memory for new node  
  struct node* node = (struct node*)malloc(sizeof(struct node)); 
  
  // Assign data to this node 
  node->data = data; 
  
  // Initialize left and right children as NULL 
  node->left = NULL; 
  node->right = NULL; 
  return(node); 
} 

/* Given a binary tree, print its nodes according to the 
  "bottom-up" postorder traversal. */
void printPostorder(struct node* node) 
{ 
     if (node == NULL) 
        return; 
  
     // first recur on left subtree 
     printPostorder(node->left); 
  
     // then recur on right subtree 
     printPostorder(node->right); 
  
     // now deal with the node 
     printf("%d ", node->data); 
} 
  
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node) 
{ 
     if (node == NULL) 
          return; 
  
     /* first recur on left child */
     printInorder(node->left); 
  
     /* then print the data of node */
     printf("%d ", node->data);   
  
     /* now recur on right child */
     printInorder(node->right); 
} 
  
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node) 
{ 
     if (node == NULL) 
          return; 
  
     /* first print data of node */
     printf("%d ", node->data);   
  
     /* then recur on left sutree */
     printPreorder(node->left);   
  
     /* now recur on right subtree */
     printPreorder(node->right); 
}     