// C program to demonstrate insert operation in binary search tree 
#include<stdio.h> 
#include<stdlib.h> 
#include "bstLib.h"
   
// A utility function to create a new BST node 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
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
   
/* A utility function to insert a new node with given data in BST */
struct node* insert(struct node* node, int data) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(data); 
  
    /* Otherwise, recur down the tree */
    if (data < node->data) 
        node->left  = insert(node->left, data); 
    else if (data > node->data) 
        node->right = insert(node->right, data);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 
 