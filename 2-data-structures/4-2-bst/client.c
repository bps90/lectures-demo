  // C program to demonstrate insert operation in binary search tree 
#include<stdio.h> 
#include<stdlib.h> 
#include "bstLib.h"

// Driver Program to test above functions 
int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    struct node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   
    printf("\nPreorder traversal of binary tree is \n"); 
    printPreorder(root); 

    printf("\nInorder traversal of binary tree is \n"); 
    printInorder(root);   

    printf("\nPostorder traversal of binary tree is \n"); 
    printPostorder(root); 
   
    return 0; 
} 